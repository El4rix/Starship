#include "sys.h"

OSContPad gControllerHold[4];
OSContPad gControllerPress[4];
u8 gControllerPlugged[4];
u32 gControllerLock;
u8 gControllerRumbleEnabled[4];
OSContPad sNextController[4];
OSContPad sPrevController[4];
OSContStatus sControllerStatus[4];
OSPfs sControllerMotor[4];

void Controller_AddDeadZone(s32 contrNum) {
    s32 temp_v0 = gControllerHold[contrNum].stick_x;
    s32 temp_a2 = gControllerHold[contrNum].stick_y;
    s32 var_a0;
    s32 var_v0;

    if ((temp_v0 >= -16) && (temp_v0 <= 16)) {
        var_a0 = 0;
    } else if (temp_v0 > 16) {
        var_a0 = temp_v0 - 16;
    } else {
        var_a0 = temp_v0 + 16;
    }

    if ((temp_a2 >= -16) && (temp_a2 <= 16)) {
        var_v0 = 0;
    } else if (temp_a2 > 16) {
        var_v0 = temp_a2 - 16;
    } else {
        var_v0 = temp_a2 + 16;
    }

    if (var_a0 > 60) {
        var_a0 = 60;
    }
    if (var_a0 < -60) {
        var_a0 = -60;
    }
    if (var_v0 > 60) {
        var_v0 = 60;
    }
    if (var_v0 < -60) {
        var_v0 = -60;
    }
    gControllerPress[contrNum].stick_x = var_a0;
    gControllerPress[contrNum].stick_y = var_v0;
}

void Controller_Init(void) {
    u8 sp1F;
    s32 i;

    osContInit(&gSerialEventQueue, &sp1F, sControllerStatus);
    for (i = 0; i < 4; i++) {
        gControllerPlugged[i] = (sp1F >> i) & 1;
        gControllerRumbleEnabled[i] = 0;
    }
}

// LTODO: Fix this
#define osContGetStatus(x) true

void Controller_UpdateInput(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        gControllerPlugged[i] = osContGetStatus(i);
        if ((gControllerPlugged[i] == 1) && (sNextController[i].err_no == 0)) {
            sPrevController[i] = gControllerHold[i];
            gControllerHold[i] = sNextController[i];
            gControllerPress[i].button =
                (gControllerHold[i].button ^ sPrevController[i].button) & gControllerHold[i].button;
            Controller_AddDeadZone(i);
        } else {
            gControllerHold[i].button = gControllerHold[i].stick_x = gControllerHold[i].stick_y =
                gControllerHold[i].err_no = gControllerPress[i].button = gControllerPress[i].stick_x =
                    gControllerPress[i].stick_y = gControllerPress[i].err_no = 0;
        }
    }
}

void Controller_ReadData(void) {
    s32 i;

    if (gControllerLock != 0) {
        gControllerLock--;
        for (i = 0; i < 4; i++) {
            sNextController[i].button = sNextController[i].stick_x = sNextController[i].stick_y =
                sNextController[i].err_no = 0;
        }
    } else {
        osContStartReadData(&gSerialEventQueue);
        osContGetReadData(sNextController);
    }
}

bool Save_ReadData(void) {
    return Save_ReadEeprom(&gSaveIOBuffer) == 0;
}

bool Save_WriteData(void) {
    return Save_WriteEeprom(&gSaveIOBuffer) == 0;
}

void Controller_Rumble(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if ((gControllerPlugged[i] != 0) && (sControllerStatus[i].err_no == 0)) {
            if (sControllerStatus[i].status & 1) {
                if (gControllerRumbleEnabled[i] == 0) {
                    if (osMotorInit(&gSerialEventQueue, &sControllerMotor[i], i)) {
                        gControllerRumbleEnabled[i] = 0;
                    } else {
                        gControllerRumbleEnabled[i] = 1;
                    }
                }
                if (gControllerRumbleEnabled[i] == 1) {
                    if (gControllerRumbleFlags[i] != 0) {
                        if (osMotorStart(&sControllerMotor[i])) {
                            gControllerRumbleEnabled[i] = 0;
                        }
                    } else {
                        if (osMotorStop(&sControllerMotor[i])) {
                            gControllerRumbleEnabled[i] = 0;
                        }
                    }
                }
            } else {
                gControllerRumbleEnabled[i] = 0;
            }
        }
    }
    for (i = 0; i < 4; i++) {
        gControllerRumbleFlags[i] = 0;
    }
}
