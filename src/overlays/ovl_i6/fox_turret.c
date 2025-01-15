#include "global.h"
#include "assets/ast_great_fox.h"
#include "port/hooks/Events.h"

f32 D_i6_801A6B80 = 50.0f;
f32 D_i6_801A6B90 = 0.0f;

u64 Guns_D_GREAT_FOX_E00B4B0_rgba16_png_019_rgba16[] = {
	0x0001000100010001, 0x0001000100010001, 0x0001000100010001, 0x0001000100010001, 0x0001000100010001, 0x0001000100010001, 0x0001000100010843, 0x0843000100010001, 
	0x0001084300011085, 0x1085000108430001, 0x00011085000118c7, 0x18c7000110850001, 0x18c7294b18c7294b, 0x294b18c7294b18c7, 0x7bdf7bdf7bdf7bdf, 0x7bdf7bdf7bdf7bdf, 
	
};

Vtx Guns_GF_GUNS_mesh_mesh_vtx_cull[8] = {
	{{ {-41, -14, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-41, -14, 27}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-41, 13, 27}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-41, 13, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {50, -14, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {50, -14, 27}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {50, 13, 27}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {50, 13, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx Guns_GF_GUNS_mesh_mesh_vtx_0[57] = {
	{{ {-9, 0, 8}, 0, {0, 256}, {220, 0, 134, 255} }},
	{{ {-41, 0, 14}, 0, {255, 0}, {215, 171, 170, 255} }},
	{{ {-9, 5, 14}, 0, {255, 256}, {206, 117, 0, 255} }},
	{{ {50, -6, 14}, 0, {256, 255}, {14, 168, 166, 255} }},
	{{ {5, -14, 14}, 0, {256, 0}, {6, 130, 239, 255} }},
	{{ {5, 0, 0}, 0, {-322, 0}, {243, 190, 148, 255} }},
	{{ {5, 0, 0}, 0, {-322, 0}, {243, 190, 148, 255} }},
	{{ {50, 0, 8}, 0, {0, 256}, {50, 0, 139, 255} }},
	{{ {50, -6, 14}, 0, {256, 255}, {14, 168, 166, 255} }},
	{{ {-9, -5, 14}, 0, {256, 0}, {206, 139, 0, 255} }},
	{{ {5, -14, 14}, 0, {255, 256}, {206, 174, 82, 255} }},
	{{ {5, 0, 27}, 0, {0, 255}, {206, 174, 82, 255} }},
	{{ {5, 0, 27}, 0, {0, 255}, {206, 174, 82, 255} }},
	{{ {-9, 0, 19}, 0, {158, 0}, {220, 0, 122, 255} }},
	{{ {5, 0, 0}, 0, {0, 256}, {243, 190, 148, 255} }},
	{{ {5, -14, 14}, 0, {255, 256}, {6, 130, 239, 255} }},
	{{ {-9, -5, 14}, 0, {255, 0}, {206, 139, 0, 255} }},
	{{ {-9, -5, 14}, 0, {255, 0}, {206, 139, 0, 255} }},
	{{ {-9, 0, 8}, 0, {158, 0}, {220, 0, 134, 255} }},
	{{ {5, 0, 0}, 0, {0, 256}, {243, 190, 148, 255} }},
	{{ {5, 0, 27}, 0, {0, 255}, {7, 16, 126, 255} }},
	{{ {5, 13, 14}, 0, {256, 255}, {6, 126, 16, 255} }},
	{{ {-9, 5, 14}, 0, {256, 0}, {206, 117, 0, 255} }},
	{{ {-9, 5, 14}, 0, {256, 0}, {206, 117, 0, 255} }},
	{{ {-9, 0, 19}, 0, {158, 0}, {220, 0, 122, 255} }},
	{{ {5, 0, 27}, 0, {0, 255}, {7, 16, 126, 255} }},
	{{ {5, 0, 27}, 0, {-322, 0}, {7, 16, 126, 255} }},
	{{ {5, -14, 14}, 0, {256, 0}, {6, 130, 239, 255} }},
	{{ {50, -6, 14}, 0, {256, 256}, {21, 168, 89, 255} }},
	{{ {50, 0, 19}, 0, {0, 256}, {50, 0, 117, 255} }},
	{{ {5, 0, 27}, 0, {-322, 0}, {7, 16, 126, 255} }},
	{{ {-9, 5, 14}, 0, {255, 0}, {206, 117, 0, 255} }},
	{{ {5, 13, 14}, 0, {255, 255}, {206, 83, 173, 255} }},
	{{ {5, 0, 0}, 0, {-7, 263}, {243, 190, 148, 255} }},
	{{ {5, 0, 0}, 0, {-7, 263}, {243, 190, 148, 255} }},
	{{ {-9, 0, 8}, 0, {155, 2}, {220, 0, 134, 255} }},
	{{ {-9, 5, 14}, 0, {255, 0}, {206, 117, 0, 255} }},
	{{ {50, 6, 14}, 0, {255, 255}, {26, 123, 21, 255} }},
	{{ {50, 0, 8}, 0, {0, 255}, {50, 0, 139, 255} }},
	{{ {5, 0, 0}, 0, {-322, 0}, {14, 89, 166, 255} }},
	{{ {5, 0, 0}, 0, {-322, 0}, {14, 89, 166, 255} }},
	{{ {5, 13, 14}, 0, {255, 0}, {6, 126, 16, 255} }},
	{{ {50, 6, 14}, 0, {255, 255}, {26, 123, 21, 255} }},
	{{ {-9, 5, 14}, 0, {256, 255}, {206, 117, 0, 255} }},
	{{ {-41, 0, 14}, 0, {256, 0}, {242, 90, 89, 255} }},
	{{ {-9, 0, 19}, 0, {0, 256}, {220, 0, 122, 255} }},
	{{ {-9, -5, 14}, 0, {256, 256}, {206, 139, 0, 255} }},
	{{ {-41, 0, 14}, 0, {256, 0}, {215, 171, 170, 255} }},
	{{ {-9, 0, 8}, 0, {0, 256}, {220, 0, 134, 255} }},
	{{ {50, 6, 14}, 0, {255, 256}, {26, 123, 21, 255} }},
	{{ {5, 13, 14}, 0, {255, 0}, {6, 126, 16, 255} }},
	{{ {5, 0, 27}, 0, {-322, 0}, {7, 16, 126, 255} }},
	{{ {5, 0, 27}, 0, {-322, 0}, {7, 16, 126, 255} }},
	{{ {50, 0, 19}, 0, {0, 256}, {50, 0, 117, 255} }},
	{{ {50, 6, 14}, 0, {255, 256}, {26, 123, 21, 255} }},
	{{ {-41, 0, 14}, 0, {255, 0}, {215, 171, 170, 255} }},
	{{ {-9, -5, 14}, 0, {264, 254}, {206, 139, 0, 255} }},
};

Gfx Guns_GF_GUNS_mesh_mesh_tri_0[] = {
	gsSPVertex(Guns_GF_GUNS_mesh_mesh_vtx_0 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 9, 0, 14, 15, 16, 0),
	gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
	gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
	gsSP1Triangle(28, 29, 30, 0),
	gsSPVertex(Guns_GF_GUNS_mesh_mesh_vtx_0 + 31, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
	gsSP1Triangle(14, 24, 25, 0),
	gsSPEndDisplayList(),
};

Gfx mat_Guns_f3dlite_material_058[] = {
	gsDPPipeSync(),
	//gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, D_GREAT_FOX_E00B4B0 /* Guns_D_GREAT_FOX_E00B4B0_rgba16_png_019_rgba16 */),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 63, 1024),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 3, 0, G_TX_CLAMP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

Gfx Guns_GF_GUNS_mesh_mesh[] = {
	//gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(Guns_GF_GUNS_mesh_mesh_vtx_cull + 0, 8, 0),
	//gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_Guns_f3dlite_material_058),
	gsSPDisplayList(Guns_GF_GUNS_mesh_mesh_tri_0),
	gsDPPipeSync(),
	//gsSPSetGeometryMode(G_LIGHTING),
	//gsSPClearGeometryMode(G_TEXTURE_GEN),
	//gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



Gfx GF_GUNS[] = {
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 3, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 3, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_GREAT_FOX_E00B4B0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 63, 1024),
    gsSPVertex(ast_great_fox_seg14_vtx_2738, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
    gsSP2Triangles(14, 15, 3, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 4, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(29, 30, 27, 0),
    gsSPVertex(ast_great_fox_seg14_vtx_2928, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 16, 13, 0, 17, 18, 15, 0),
    gsSP2Triangles(15, 19, 17, 0, 20, 18, 21, 0),
    gsSP2Triangles(21, 22, 20, 0, 13, 16, 20, 0),
    gsSP2Triangles(20, 23, 13, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 30, 27, 0),
    gsSPVertex(ast_great_fox_seg14_vtx_2B18, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 22, 19, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(ast_great_fox_seg14_vtx_2D18, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(ast_great_fox_seg14_vtx_2F08, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSPEndDisplayList(),
};

void Turret_SetupShot(Player* player, PlayerShot* shot, f32 xOffset, f32 yOffset, f32 zOffset, s32 shotId, f32 speed) {
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;

    PlayerShot_Initialize(shot);
    Matrix_RotateY(gCalcMatrix, player->unk_000 * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, player->unk_004 * M_DTOR, MTXF_APPLY);
    Matrix_RotateZ(gCalcMatrix, player->rot.z * M_DTOR, MTXF_APPLY);
    Matrix_RotateY(gCalcMatrix, player->unk_180 * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, player->unk_17C * M_DTOR, MTXF_APPLY);
    sp4C.x = xOffset;
    sp4C.y = yOffset + 25.0f;
    sp4C.z = zOffset;
    Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp34);
    Matrix_RotateY(gCalcMatrix, player->unk_000 * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, player->unk_004 * M_DTOR, MTXF_APPLY);
    Matrix_RotateZ(gCalcMatrix, player->rot.z * M_DTOR, MTXF_APPLY);
    Matrix_RotateY(gCalcMatrix, player->unk_180 * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, player->unk_17C * M_DTOR, MTXF_APPLY);
    Matrix_RotateY(gCalcMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, player->rot.x * M_DTOR, MTXF_APPLY);
    sp4C.x = sp4C.y = 0.0f;
    sp4C.z = speed;
    Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp40);
    Matrix_GetYRPAngles(gCalcMatrix, &sp4C);
    shot->obj.status = SHOT_ACTIVE;

    shot->vel.x = sp40.x;
    shot->vel.y = sp40.y;
    shot->vel.z = sp40.z;

    shot->obj.pos.x = player->pos.x + sp34.x;
    shot->obj.pos.y = player->pos.y + sp34.y;
    shot->obj.pos.z = player->pos.z + sp34.z;

    shot->obj.rot.x = sp4C.x;
    shot->obj.rot.y = (sp4C.y);
    shot->obj.rot.z = sp4C.z;

    shot->unk_48 = player->unk_17C;
    shot->unk_4C = player->unk_180;
    shot->unk_50 = player->unk_004;
    shot->unk_54 = player->unk_000;

    shot->obj.rot.z = player->rot.z;
    shot->unk_60 = 0;
    shot->obj.id = shotId;
    shot->timer = 60;
    shot->scale = 1.5f;

    shot->sourceId = player->num;
}

void Turret_GreatFoxLaser(Player* player, f32 xOffset) {
    s32 i;
    PlayerShot* shot;

    for (i = 0; i < ARRAY_COUNT(gPlayerShots); i++) {
        if (gPlayerShots[i].obj.status == SHOT_FREE) {
            Turret_SetupShot(player, &gPlayerShots[i], xOffset, -130.0f, 250.0f, PLAYERSHOT_GFOX_LASER, 100.0f);
            //Play_PlaySfxFirstPlayer(gPlayerShots[i].sfxSource, NA_SE_GREATFOX_SHOT_DEMO); //NA_SE_TURRET_SHOT
            AUDIO_PLAY_SFX(NA_SE_GREATFOX_SHOT_DEMO, gPlayerShots[i].sfxSource, 4);
            break;
        }
    }
}

void Turret_Shoot(Player* player) {
    s32 i;

    if ((gControllerPress[player->num].button & A_BUTTON) && !(gControllerHold[player->num].button & R_TRIG))  {
        player->shotTimer = 0;
    }
    // Fires two great fox lasers. Offsets match up with the possible guns in Draw.
    if ((gControllerHold[player->num].button & A_BUTTON) && !(gControllerHold[player->num].button & R_TRIG)) {
        if (player->shotTimer == 0) {
            Turret_GreatFoxLaser(player, -120.0f);
            Turret_GreatFoxLaser(player, 120.0f);
            player->turretRecoil = 30;
        }
        player->shotTimer++;
        if (player->shotTimer >= 4) {
            player->shotTimer = 0;
        }
    }
    if (player->turretRecoil > 0) {
        player->turretRecoil -= 4;
    } else {
        player->turretRecoil = 0;
    }

    // Fires the lock on attack? The code is missing if so
    if (gControllerPress[player->num].button & R_TRIG) {
        player->turretLockOnCount = 0;
        AUDIO_PLAY_SFX(NA_SE_EN_A6BOSS_CHARGE, gDefaultSfxSource, 4);
    }

    // Draws a textured line to each Event Actor in sequence as R is held. Some sort of charged lock on attack?
    for (i = 1; i < player->turretLockOnCount; i++) {
        if ((gActors[i].obj.status == OBJ_ACTIVE) && (gActors[i].obj.id == OBJ_ACTOR_EVENT)) {
            gTexturedLines[i].mode = 3;
            gTexturedLines[i].xyScale = 0.01f;
            gTexturedLines[i].zScale = 1.0f;

            gTexturedLines[i].posAA.x = player->pos.x;
            gTexturedLines[i].posAA.y = player->pos.y; //0.0f
            gTexturedLines[i].posAA.z = player->pos.z - 10.0f; //100

            gTexturedLines[i].timer = 2;

            gTexturedLines[i].prim.r = 255;
            gTexturedLines[i].prim.g = 255;
            gTexturedLines[i].prim.b = 255;
            gTexturedLines[i].prim.a = 255;

            gTexturedLines[i].posBB.x = gActors[i].obj.pos.x;
            gTexturedLines[i].posBB.y = gActors[i].obj.pos.y;
            gTexturedLines[i].posBB.z = gActors[i].obj.pos.z;
        }
    }
    if (gControllerHold[player->num].button & R_TRIG) {
        Player_SetupArwingShot(player, &gPlayerShots[ARRAY_COUNT(gPlayerShots) - 1], 0.0f, 0.0f, PLAYERSHOT_BOMB,
            180.0f);
        //TurretLaserChargeSpawn();
        player->turretLockOnCount++;
        if (player->turretLockOnCount > ARRAY_COUNT(gActors)) {
            player->turretLockOnCount = ARRAY_COUNT(gActors);
            //func_effect_80081BEC(player->pos.x, player->pos.y, player->trueZpos - 500.0f, 1.0f, 9);
            AUDIO_PLAY_SFX(NA_SE_MISSILE_ALARM, gDefaultSfxSource, 4);
        } else {
            player->turretLockOnCount = player->turretLockOnCount;
        }
    } else if ((player->turretLockOnCount == ARRAY_COUNT(gActors)) && !(gControllerHold[player->num].button & R_TRIG)) {
       player->turretLockOnCount = 0;
       Player_SmartBomb(player);
    } else {
       player->turretLockOnCount = 0;
       Audio_KillSfxBySourceAndId(gDefaultSfxSource, NA_SE_EN_A6BOSS_CHARGE);
    }
}

void TurretLaserChargeSpawn(void) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            TurretLaserChargeSetup(&gEffects[i]);
            break;
        }
    }
}

void TurretLaserChargeSetup(Effect395* this) {
    Effect_Initialize(this);
    this->obj.status = OBJ_INIT;
    this->obj.id = OBJ_EFFECT_395;

    this->obj.pos.x = gPlayer[0].pos.x;
    this->obj.pos.y = gPlayer[0].pos.y + 200;
    this->obj.pos.z = gPlayer[0].trueZpos - 1500.0f;

    this->state = 13;
    this->scale2 = 1.0f;
    Object_SetInfo(&this->info, this->obj.id);
}

void Turret_UpdateRails(Player* player) {
    f32 sp2C;
    f32 sp28;
    f32 stickX;
    f32 stickY;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fv0;
    f32 var_fv1;
    f32 sp84;
    s32 pad;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;

    if (player->csTimer != 0) {
        gInputPress->stick_x = 0;
        gInputPress->stick_y = 0;
        gInputPress->button = 0;
        gInputHold->button = gBoostButton[player->num];
        player->boostMeter = 1.0f;
    }
    // Player_MoveArwingOnRails(player);
    Player_UpdatePath(player);
    Turret_Shoot(player);
    Player_CollisionCheck(player);
    Player_DamageEffects(player);
    Player_WaterEffects(player);
    Player_FloorCheck(player);
    Player_LowHealthAlarm(player);

    // Kill
    if ((player->shields <= 0) && (player->radioDamageTimer != 0)) {
        Player_Down(player);
        player->vel.x *= 0.2f;
        player->vel.y = 5.0f;
        player->rot.x = player->rot.y = 0.0f;
        player->alternateView = false;
        player->csTimer = 20;
        if (gLevelType == LEVELTYPE_SPACE) {
            player->csTimer = 40;
        }
        player->csEventTimer = 120;
    }

    // Animation for start of level
    if (player->turretState < 2) {
        if (player->turretState == 0) {
            player->turretRecoil = 200;
            player->turretState++;
        }
        gControllerLock = 10;
        if (player->turretRecoil == 0) {
            gControllerLock = 0;
            player->turretState++;
            gLevelStartStatusScreenTimer = 50;
        }
    }

    // Moves targeting cursor
    sp2C = (f32) gControllerPress[player->num].stick_x;
    sp28 = -(f32) gControllerPress[player->num].stick_y;
    Math_SmoothStepToF(&player->rot.y, -sp2C * 0.35000002f, 0.5f, 2.0f, 0.00001f);
    Math_SmoothStepToF(&player->rot.x, -sp28 * 0.3f, 0.5f, 2.0f, 0.00001f);
    /* player->trueZpos = player->pos.z;
    player->zPathVel = -gActors[player->turretActor].vel.z;
    player->zPath += player->zPathVel;

    gPathVelZ = player->zPathVel;
    gPathProgress = player->zPath; */

    // Moves the camera around unless locked in place with Z. Condition seems incorrect. 
    if (!(gControllerHold[player->num].button & Z_TRIG) && (sqrtf(SQ(sp2C) + SQ(sp28)) > 55.0f)) {
        if ((sp2C > 40.0f)) {
            player->unk_008 += 2.0f;
        }
        if ((sp2C < -40.0f)) {
            player->unk_008 -= 2.0f;
        }
        if ((sp28 < -40.0f)) {
            player->unk_00C -= 2.0f;
        }
        if ((sp28 > 40.0f)) {
            player->unk_00C += 2.0f;
        }
    }

    //Prevent looking back
    if (player->unk_008 > 60.0f) {
        player->unk_008 = 60.0f;
    }
    if (player->unk_008 < -60.0f) {
        player->unk_008 = -60.0f;
    }
    if (player->unk_00C > 30.0f) {
        player->unk_00C = 30.0f;
    }
    if (player->unk_00C < -30.0f) {
        player->unk_00C = -30.0f;
    }
    player->flags_228 = 0;

    //Encourage not looking back
    if (player->unk_008 > 30.0f) {
        player->flags_228 |= PFLAG_228_0;
    }
    if (player->unk_008 < -30.0f) {
        player->flags_228 |= PFLAG_228_1;
    }
    if (player->unk_00C > 20.0f) {
        player->flags_228 |= PFLAG_228_3;
    }
    if (player->unk_00C < -20.0f) {
        player->flags_228 |= PFLAG_228_2;
    }

    // the B button recenters the view straight ahead
    if (gControllerPress[player->num].button & B_BUTTON) {
        player->unk_008 = 0.0f;
        player->unk_00C = 0.0f;
    }
    
    // Resets position
    if (gControllerHold[player->num].button & B_BUTTON) {
        if (D_i6_801A6B80 > ((player->pathHeight + player->pathFloor)/2) + player->yPathTarget + 50){
            D_i6_801A6B80 -= 100.0f;
        }

        else if (D_i6_801A6B80 < ((player->pathHeight + player->pathFloor)/2) + player->yPathTarget - 50){
            D_i6_801A6B80 += 100.0f;
        }

        if (D_i6_801A6B90 > player->xPathTarget + 50.0f){
            D_i6_801A6B90 -= 100.0f;
        }

        else if (D_i6_801A6B90 < player->xPathTarget - 50.0f){
            D_i6_801A6B90 += 100.0f;
        }
    }

    gPlayerTurnRate = 2.3f;
    gPlayerTurnStickMod = 0.68f;

    stickX = 0;
    stickY = 0;

    Math_SmoothStepToAngle(&player->aerobaticPitch, 0.0f, 0.1f, 5.0f, 0.01f);

    Matrix_RotateZ(gCalcMatrix, (-player->zRotBank) * M_DTOR, MTXF_NEW);

    sp68.z = 0.0f;
    sp68.x = stickX * 0.75f;
    sp68.y = stickY * 0.75f;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &sp5C);

    sp7C = sp5C.y;
    sp78 = (sp74 = 0.0f);

    sp84 = 0.1f;
    
    Math_SmoothStepToF(&player->rot.y, stickX * gPlayerTurnStickMod, sp84, gPlayerTurnRate, 0.03f);

    gPlayerTurnRate = 2.3f;
    sp84 = 0.1f;
    var_fa1 = -stickY * gPlayerTurnStickMod;


    Math_SmoothStepToF(&player->rot.x, var_fa1, sp84, gPlayerTurnRate, 0.03f);

    var_fv1 = 1.0f;
    var_fv0 = 4.0f;

    Matrix_RotateY(gCalcMatrix, (player->rot.y + 180.0f) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, -((player->rot.x + player->aerobaticPitch) * M_DTOR), MTXF_APPLY);

    sp68.x = 0.0f;
    sp68.y = 0.0f;
    sp68.z = player->baseSpeed;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &sp44);

    sp44.x *= 1.4f;
    sp44.y *= 1.4f;

    Matrix_RotateY(gCalcMatrix, player->yRot_114 * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, player->xRot_120 * M_DTOR, MTXF_APPLY);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp5C);

    sp68.x = 0.0f;
    sp68.y = 0.0f;
    sp68.z = -player->boostSpeed;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &sp50);

    // Keep up with Andross
    if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
        player->vel.z += D_Andross_801A7F58;
    }

    if (player->pos.y < (player->pathFloor + player->yPath + 40.0f)) {
        player->pos.y = player->pathFloor + player->yPath + 40.0f;
    }

    player->vel.x = (sp5C.x + sp50.x) * player->unk_150;
    player->vel.y = (sp5C.y + sp50.y) * player->unk_150;
    player->vel.z = sp5C.z + sp50.z;
    
    player->pos.z += player->vel.z;

    // Move Around
    if ((gControllerHold[player->num].button & U_JPAD) || (gControllerHold[player->num].button & U_CBUTTONS)) {
        if (player->pos.y < (player->pathHeight + player->yPath)) {
            D_i6_801A6B80 += 20.0f;
        }        
    }
    if ((gControllerHold[player->num].button & D_JPAD) || (gControllerHold[player->num].button & D_CBUTTONS)) {
        if (player->pos.y > (player->pathFloor + player->yPath + 40)) {
            D_i6_801A6B80 -= 20.0f;
        }
    }

    if ((gControllerHold[player->num].button & R_JPAD) || (gControllerHold[player->num].button & R_CBUTTONS)) {
        if (player->pos.x < (player->xPath + player->pathWidth)) {
            D_i6_801A6B90 += 20.0f;
        }
    }
    if ((gControllerHold[player->num].button & L_JPAD) || (gControllerHold[player->num].button & L_CBUTTONS)) {
        if (player->pos.x > (player->xPath - player->pathWidth)) {
            D_i6_801A6B90 -= 20.0f;
        }
    }

    //Additional path changing code
    if ((player->pathChangeTimer != 0)) {
        player->pathChangeTimer -= 2;
        if (gCurrentLevel == LEVEL_SECTOR_Y) {
            D_i6_801A6B80 = ((player->pathHeight + player->pathFloor)/2) + player->yPathTarget;
        } else {
            D_i6_801A6B90 = player->xPathTarget;
        }
    }

    //Updates XY
    Math_SmoothStepToF(&player->pos.x, D_i6_801A6B90, 0.5f, 25.0f, 0.00001f);
    Math_SmoothStepToF(&player->pos.y, D_i6_801A6B80, 0.5f, 25.0f, 0.00001f);
    
    //Updates rotation
    Math_SmoothStepToF(&player->unk_180, -player->unk_008 + 180, 0.5f, 3.0f, 0.00001f);
    Math_SmoothStepToF(&player->unk_17C, -player->unk_00C, 0.5f, 3.0f, 0.00001f);
    Turret_Shoot(player);
}

void Turret_Update360(Player* player) {
    f32 sp2C;
    f32 sp28;

    Play_dummy_800B41E0(player);
    Player_MoveArwing360(player);
    Player_Shoot(player);
    Player_CollisionCheck(player);
    Player_WaterEffects(player);
    Player_FloorCheck(player);
    Player_LowHealthAlarm(player);
    if ((player->shields <= 0) && (player->radioDamageTimer != 0)) {
        Player_Down(player);
        player->vel.y = 5.0f;
        if (gLevelType == LEVELTYPE_SPACE) {
            player->vel.y = 0.0f;
        }
        player->csTimer = 20;
        player->csEventTimer = 120;
        player->unk_000 = 0.0f;
        player->unk_004 = 1.0f;
        if (player->rot.y < 0.0f) {
            player->unk_004 = -1.0f;
        }
        player->rot.x = 0.0f;
        player->aerobaticPitch = 0.0f;
    }

    // The player follows the turret actor. Possibly the great fox
    player->pos.x = gActors[player->turretActor].obj.pos.x;
    player->pos.y = gActors[player->turretActor].obj.pos.y;
    player->pos.z = gActors[player->turretActor].obj.pos.z;
    player->unk_000 = gActors[player->turretActor].obj.rot.y;
    player->unk_004 = gActors[player->turretActor].obj.rot.x;
    player->rot.z = gActors[player->turretActor].obj.rot.z;

    // Animation for start of level
    if (player->turretState < 2) {
        if (player->turretState == 0) {
            player->turretRecoil = 200;
            player->turretState++;
        }
        gControllerLock = 10;
        if (player->turretRecoil == 0) {
            gControllerLock = 0;
            player->turretState++;
            gLevelStartStatusScreenTimer = 50;
        }
    }

    // Moves targeting cursor
    sp2C = (f32) gControllerPress[player->num].stick_x;
    sp28 = -(f32) gControllerPress[player->num].stick_y;
    Math_SmoothStepToF(&player->rot.y, -sp2C * 0.35000002f, 0.5f, 2.0f, 0.00001f);
    Math_SmoothStepToF(&player->rot.x, -sp28 * 0.3f, 0.5f, 2.0f, 0.00001f);
    /* player->trueZpos = player->pos.z;
    player->zPathVel = -gActors[player->turretActor].vel.z;
    player->zPath += player->zPathVel;

    gPathVelZ = player->zPathVel;
    gPathProgress = player->zPath; */
    Player_UpdatePath(player);

    // Moves the camera around unless locked in place with Z. Condition seems incorrect. 
    if (!(gControllerHold[player->num].button & Z_TRIG) && (sqrtf(SQ(sp2C) + SQ(sp28)) > 55.0f)) {
        if ((gControllerHold[player->num].button & R_CBUTTONS) || (sp2C > 40.0f)) {
            player->unk_008 += 2.0f;
        }
        if ((gControllerHold[player->num].button & L_CBUTTONS) || (sp2C < -40.0f)) {
            player->unk_008 -= 2.0f;
        }
        if ((gControllerHold[player->num].button & U_CBUTTONS) || (sp28 < -40.0f)) {
            player->unk_00C -= 2.0f;
        }
        if ((gControllerHold[player->num].button & D_CBUTTONS) || (sp28 > 40.0f)) {
            player->unk_00C += 2.0f;
        }
    }
    if (player->unk_008 > 30.0f) {
        player->unk_008 = 30.0f;
    }
    if (player->unk_008 < -30.0f) {
        player->unk_008 = -30.0f;
    }
    if (player->unk_00C > 30.0f) {
        player->unk_00C = 30.0f;
    }
    if (player->unk_00C < -30.0f) {
        player->unk_00C = -30.0f;
    }
    player->flags_228 = 0;

    if (player->unk_008 > 20.0f) {
        player->flags_228 |= PFLAG_228_0;
    }
    if (player->unk_008 < -20.0f) {
        player->flags_228 |= PFLAG_228_1;
    }
    if (player->unk_00C > 20.0f) {
        player->flags_228 |= PFLAG_228_3;
    }
    if (player->unk_00C < -20.0f) {
        player->flags_228 |= PFLAG_228_2;
    }

    // the B button recenters the view straight ahead
    if (gControllerPress[player->num].button & B_BUTTON) {
        player->unk_008 = player->unk_00C = 0.0f;
        
        /* D_i6_801A6B80 = 500.0f;
        D_i6_801A6B90 = 0.0f; */
    }
    
    // Resets position
    if (gControllerHold[player->num].button & B_BUTTON) {
         if (D_i6_801A6B80 > 550.0f){
            D_i6_801A6B80 -= 100.0f;
        }

        else if (D_i6_801A6B80 < 450.0f){
            D_i6_801A6B80 += 100.0f;
        }

        if (D_i6_801A6B90 > 50.0f){
            D_i6_801A6B90 -= 100.0f;
        }

        else if (D_i6_801A6B90 < -50.0f){
            D_i6_801A6B90 += 100.0f;
        }
    }
    
    Math_SmoothStepToF(&player->unk_180, player->unk_008, 0.5f, 3.0f, 0.00001f);
    Math_SmoothStepToF(&player->unk_17C, player->unk_00C, 0.5f, 3.0f, 0.00001f);
    Turret_Shoot(player);
}

void Turret_UpdateRailsCamera(Player* player) {
    Vec3f sp3C;
    Vec3f sp30;

    sp3C.x = 0.0f;
    sp3C.y = 0.0f;
    sp3C.z = 100.0f;
    Matrix_RotateY(gCalcMatrix, (player->unk_000 + (player->damageShake * 0.3f)) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, (player->unk_004 + (player->damageShake * 0.3f)) * M_DTOR, MTXF_APPLY);
    Matrix_RotateZ(gCalcMatrix, player->rot.z * M_DTOR, MTXF_APPLY);
    Matrix_RotateY(gCalcMatrix, player->unk_180 * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, player->unk_17C * M_DTOR, MTXF_APPLY);
    // unclear what values are being multiplied by 0.0f
    Matrix_RotateY(gCalcMatrix, (0.0f * player->unk_000) * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, (0.0f * player->unk_004) * M_DTOR, MTXF_APPLY);
    Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp30);
    player->cam.at.x = player->pos.x + sp30.x;
    player->cam.at.y = player->pos.y + sp30.y;
    player->cam.at.z = player->pos.z + gPathProgress + sp30.z;
    player->cam.eye.x = player->pos.x;
    player->cam.eye.y = player->pos.y;
    player->cam.eye.z = player->pos.z + gPathProgress;
}

void Turret_Update360Camera(Player* player) {
    Vec3f sp3C;
    Vec3f sp30;

    sp3C.x = 0.0f;
    sp3C.y = 0.0f;
    sp3C.z = 100.0f;
    Matrix_RotateY(gCalcMatrix, (player->unk_000 + (player->damageShake * 0.3f)) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, (player->unk_004 + (player->damageShake * 0.3f)) * M_DTOR, MTXF_APPLY);
    Matrix_RotateZ(gCalcMatrix, player->rot.z * M_DTOR, MTXF_APPLY);
    Matrix_RotateY(gCalcMatrix, player->unk_180 * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, player->unk_17C * M_DTOR, MTXF_APPLY);
    // unclear what values are being multiplied by 0.0f
    Matrix_RotateY(gCalcMatrix, (0.0f * player->unk_000) * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, (0.0f * player->unk_004) * M_DTOR, MTXF_APPLY);
    Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp30);
    player->cam.at.x = player->pos.x + sp30.x;
    player->cam.at.y = player->pos.y + sp30.y;
    player->cam.at.z = player->pos.z + gPathProgress + sp30.z;
    player->cam.eye.x = player->pos.x;
    player->cam.eye.y = player->pos.y;
    player->cam.eye.z = player->pos.z + gPathProgress;
}


void Turret_Draw(Player* player) {

    Matrix_Push(&gGfxMatrix);
    // Targeting cursor. At start of level it moves away from player as guns appear
    RCP_SetupDL_36();
    Matrix_Translate(gGfxMatrix, 0.0f, -100.0f, 0.0f, MTXF_APPLY);
    Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
    if (player->turretState < 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -5000.0f + (player->turretRecoil * 25), MTXF_APPLY);
    } else {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -5000.0f, MTXF_APPLY);
    }
    Matrix_Scale(gGfxMatrix, 12.0f, 12.0f, 1.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1024F60);
    Matrix_Pop(&gGfxMatrix);

    // Draws turret guns. They are 100 units to the left and right of the player and 100 units below
    RCP_SetupDL_27();
    if ((player->turretRecoil > 21) && (player->turretState >= 2)) {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 125, 255);
    } else if ((player->turretRecoil > 13) && (player->turretState >= 2)) {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 125, 255, 255);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 155, 155, 155, 255);
    }
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, -70.0f, -100.0f, -200.0f + player->turretRecoil, MTXF_APPLY);
    Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
    Matrix_RotateZ(gGfxMatrix, M_PI, MTXF_APPLY);
    Matrix_RotateY(gGfxMatrix, M_PI / 2, MTXF_APPLY);
    Matrix_Translate(gGfxMatrix, 150.0f /* D_i6_801A6B80 */, 0.0f, 0.0f, MTXF_APPLY);
    Matrix_Scale(gGfxMatrix, 5.0f, 4.0f, 4.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, Guns_GF_GUNS_mesh_mesh);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 70.0f, -100.0f, -200.0f + player->turretRecoil, MTXF_APPLY);
    Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
    // Matrix_RotateZ(gGfxMatrix, M_PI, MTXF_APPLY);
    Matrix_RotateY(gGfxMatrix, M_PI / 2, MTXF_APPLY);
    Matrix_Translate(gGfxMatrix, 150.0f /* D_i6_801A6B80 */, 0.0f, 0.0f, MTXF_APPLY);
    Matrix_Scale(gGfxMatrix, 5.0f, 4.0f, 4.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, Guns_GF_GUNS_mesh_mesh);
    Matrix_Pop(&gGfxMatrix);

    // Draws muzzle flashes. This suggests the guns were 188 long
    if ((player->turretRecoil > 20) && (player->turretState >= 2)) {
        RCP_SetupDL_64();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 128);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, -150.0f, -90.0f, -300.0f + player->turretRecoil, MTXF_APPLY);
        Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
        Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -188.0f, MTXF_APPLY);
        Matrix_Scale(gGfxMatrix, 2.5f, 2.5f, 2.5f, MTXF_APPLY);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, aOrbDL); // was D_1024AC0
        Matrix_Pop(&gGfxMatrix);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 150.0f, -90.0f, -300.0f + player->turretRecoil, MTXF_APPLY);
        Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
        Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -188.0f, MTXF_APPLY);
        Matrix_Scale(gGfxMatrix, 2.5f, 2.5f, 2.5f, MTXF_APPLY);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, aOrbDL); // D_1024AC0
        Matrix_Pop(&gGfxMatrix);
    }
}

// Old
/* void Turret_SetupShot(Player* player, PlayerShot* shot, f32 xOffset, f32 yOffset, f32 zOffset, s32 shotId, f32 speed) {
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;

    PlayerShot_Initialize(shot);
    Matrix_RotateY(gCalcMatrix, player->unk_000 * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, player->unk_004 * M_DTOR, MTXF_APPLY);
    Matrix_RotateZ(gCalcMatrix, player->rot.z * M_DTOR, MTXF_APPLY);
    Matrix_RotateY(gCalcMatrix, player->unk_180 * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, player->unk_17C * M_DTOR, MTXF_APPLY);
    sp4C.x = xOffset;
    sp4C.y = yOffset;
    sp4C.z = zOffset;
    Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp34);
    Matrix_RotateY(gCalcMatrix, player->unk_000 * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, player->unk_004 * M_DTOR, MTXF_APPLY);
    Matrix_RotateZ(gCalcMatrix, player->rot.z * M_DTOR, MTXF_APPLY);
    Matrix_RotateY(gCalcMatrix, player->unk_180 * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, player->unk_17C * M_DTOR, MTXF_APPLY);
    Matrix_RotateY(gCalcMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, player->rot.x * M_DTOR, MTXF_APPLY);
    sp4C.x = sp4C.y = 0.0f;
    sp4C.z = speed;
    Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp40);
    Matrix_GetYRPAngles(gCalcMatrix, &sp4C);
    shot->obj.status = SHOT_ACTIVE;

    shot->vel.x = sp40.x;
    shot->vel.y = sp40.y;
    shot->vel.z = sp40.z;

    shot->obj.pos.x = player->pos.x + sp34.x;
    shot->obj.pos.y = player->pos.y + sp34.y;
    shot->obj.pos.z = player->pos.z + sp34.z;

    shot->obj.rot.x = sp4C.x;
    shot->obj.rot.y = sp4C.y;
    shot->obj.rot.z = sp4C.z;

    shot->unk_48 = player->unk_17C;
    shot->unk_4C = player->unk_180;
    shot->unk_50 = player->unk_004;
    shot->unk_54 = player->unk_000;

    shot->obj.rot.z = player->rot.z;
    shot->unk_60 = 0;
    shot->obj.id = shotId;
    shot->timer = 40;
    shot->scale = 1.5f;

    shot->sourceId = player->num;
}

void Turret_GreatFoxLaser(Player* player, f32 xOffset) {
    s32 i;
    PlayerShot* shot;

    for (i = 0; i < ARRAY_COUNT(gPlayerShots); i++) {
        if (gPlayerShots[i].obj.status == SHOT_FREE) {
            Turret_SetupShot(player, &gPlayerShots[i], xOffset, -100.0f, 200.0f, PLAYERSHOT_GFOX_LASER, 100.0f);
            Play_PlaySfxFirstPlayer(gPlayerShots[i].sfxSource, NA_SE_TURRET_SHOT);
            break;
        }
    }
}

void Turret_Shoot(Player* player) {
    s32 i;

    if (gControllerPress[player->num].button & A_BUTTON) {
        player->shotTimer = 0;
    }
    // Fires two great fox lasers. Offsets match up with the possible guns in Draw.
    if (gControllerHold[player->num].button & A_BUTTON) {
        if (player->shotTimer == 0) {
            Turret_GreatFoxLaser(player, -100.0f);
            Turret_GreatFoxLaser(player, 100.0f);
            player->turretRecoil = 30;
        }
        player->shotTimer++;
        if (player->shotTimer >= 4) {
            player->shotTimer = 0;
        }
    }
    if (player->turretRecoil > 0) {
        player->turretRecoil -= 4;
    } else {
        player->turretRecoil = 0;
    }

    // Fires the lock on attack? The code is missing if so
    if (gControllerPress[player->num].button & R_TRIG) {
        player->turretLockOnCount = 0;
    }

    // Draws a textured line to each Event Actor in sequence as R is held. Some sort of charged lock on attack?
    for (i = 0; i < player->turretLockOnCount; i++) {
        if ((gActors[i].obj.status == OBJ_ACTIVE) && (gActors[i].obj.id == OBJ_ACTOR_EVENT)) {
            gTexturedLines[i].mode = 3;
            gTexturedLines[i].zScale = 1.0f;

            gTexturedLines[i].posAA.x = player->pos.x;
            gTexturedLines[i].posAA.y = player->pos.y;
            gTexturedLines[i].posAA.z = player->pos.z - 100.0f;

            gTexturedLines[i].timer = 2;

            gTexturedLines[i].prim.r = 255;
            gTexturedLines[i].prim.g = 255;
            gTexturedLines[i].prim.b = 255;
            gTexturedLines[i].prim.a = 255;

            gTexturedLines[i].posBB.x = gActors[i].obj.pos.x;
            gTexturedLines[i].posBB.y = gActors[i].obj.pos.y;
            gTexturedLines[i].posBB.z = gActors[i].obj.pos.z;
        }
    }

    if (gControllerHold[player->num].button & R_TRIG) {
        player->turretLockOnCount++;
        if (player->turretLockOnCount > ARRAY_COUNT(gActors)) {
            player->turretLockOnCount = ARRAY_COUNT(gActors);
        } else {
            player->turretLockOnCount = player->turretLockOnCount;
        }
    } else {
        player->turretLockOnCount = 0;
    }
}

void Turret_Update(Player* player) {
    f32 sp2C;
    f32 sp28;

    // The player follows the turret actor. Possibly the great fox
    player->pos.x = gActors[player->turretActor].obj.pos.x;
    player->pos.y = gActors[player->turretActor].obj.pos.y;
    player->pos.z = gActors[player->turretActor].obj.pos.z;
    player->unk_000 = gActors[player->turretActor].obj.rot.y;
    player->unk_004 = gActors[player->turretActor].obj.rot.x;
    player->rot.z = gActors[player->turretActor].obj.rot.z;

    // Disables controls for 50 frames. some sort of big charged attack?
    if (player->turretState < 2) {
        if (player->turretState == 0) {
            player->turretRecoil = 200;
            player->turretState++;
        }
        gControllerLock = 10;
        if (player->turretRecoil == 0) {
            gControllerLock = 0;
            player->turretState++;
            gLevelStartStatusScreenTimer = 50;
        }
    }

    // The control stick may have moved a targeting cursor
    sp2C = (f32) gControllerPress[player->num].stick_x;
    sp28 = -(f32) gControllerPress[player->num].stick_y;
    Math_SmoothStepToF(&player->rot.y, -sp2C * 0.35000002f, 0.5f, 2.0f, 0.00001f);
    Math_SmoothStepToF(&player->rot.x, -sp28 * 0.3f, 0.5f, 2.0f, 0.00001f);
    player->trueZpos = player->pos.z;
    player->zPathVel = -gActors[player->turretActor].vel.z;
    player->zPath += player->zPathVel;

    gPathVelZ = player->zPathVel;
    gPathProgress = player->zPath;

    // These appear to move the camera around unless locked in place with Z
    if (!(gControllerHold[player->num].button & Z_TRIG) && (sqrtf(SQ(sp2C) + SQ(sp28)) > 55.0f)) {
        if ((gControllerHold[player->num].button & R_CBUTTONS) || (sp2C > 40.0f)) {
            player->unk_008 += 2.0f;
        }
        if ((gControllerHold[player->num].button & L_CBUTTONS) || (sp2C < -40.0f)) {
            player->unk_008 -= 2.0f;
        }
        if ((gControllerHold[player->num].button & U_CBUTTONS) || (sp28 < -40.0f)) {
            player->unk_00C -= 2.0f;
        }
        if ((gControllerHold[player->num].button & D_CBUTTONS) || (sp28 > 40.0f)) {
            player->unk_00C += 2.0f;
        }
    }
    if (player->unk_008 > 30.0f) {
        player->unk_008 = 30.0f;
    }
    if (player->unk_008 < -30.0f) {
        player->unk_008 = -30.0f;
    }
    if (player->unk_00C > 30.0f) {
        player->unk_00C = 30.0f;
    }
    if (player->unk_00C < -30.0f) {
        player->unk_00C = -30.0f;
    }
    player->flags_228 = 0;

    if (player->unk_008 > 20.0f) {
        player->flags_228 |= PFLAG_228_0;
    }
    if (player->unk_008 < -20.0f) {
        player->flags_228 |= PFLAG_228_1;
    }
    if (player->unk_00C > 20.0f) {
        player->flags_228 |= PFLAG_228_3;
    }
    if (player->unk_00C < -20.0f) {
        player->flags_228 |= PFLAG_228_2;
    }

    // the B button recenters the view straight ahead
    if (gControllerPress[player->num].button & B_BUTTON) {
        player->unk_008 = player->unk_00C = 0.0f;
    }
    Math_SmoothStepToF(&player->unk_180, -player->unk_008, 0.5f, 3.0f, 0.00001f);
    Math_SmoothStepToF(&player->unk_17C, -player->unk_00C, 0.5f, 3.0f, 0.00001f);
    Turret_Shoot(player);
}

void Turret_UpdateCamera(Player* player) {
    Vec3f sp3C;
    Vec3f sp30;

    sp3C.x = 0.0f;
    sp3C.y = 0.0f;
    sp3C.z = 100.0f;
    Matrix_RotateY(gCalcMatrix, (player->unk_000 + (player->damageShake * 0.3f)) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, (player->unk_004 + (player->damageShake * 0.3f)) * M_DTOR, MTXF_APPLY);
    Matrix_RotateZ(gCalcMatrix, player->rot.z * M_DTOR, MTXF_APPLY);
    Matrix_RotateY(gCalcMatrix, player->unk_180 * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, player->unk_17C * M_DTOR, MTXF_APPLY);
    // unclear what values are being multiplied by 0.0f
    Matrix_RotateY(gCalcMatrix, (0.0f * player->unk_000) * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gCalcMatrix, (0.0f * player->unk_004) * M_DTOR, MTXF_APPLY);
    Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp30);
    player->cam.at.x = player->pos.x + sp30.x;
    player->cam.at.y = player->pos.y + sp30.y;
    player->cam.at.z = player->pos.z + gPathProgress + sp30.z;
    player->cam.eye.x = player->pos.x;
    player->cam.eye.y = player->pos.y;
    player->cam.eye.z = player->pos.z + gPathProgress;
}

void Turret_Draw(Player* player) {
    static f32 D_i6_801A6B80 = -100.0f;

    // Probably a Y-offset adjustment, for debug?
    if (gControllerHold[player->num].button & U_JPAD) {
        D_i6_801A6B80 += 10.0f;
    }
    if (gControllerHold[player->num].button & D_JPAD) {
        D_i6_801A6B80 -= 10.0f;
    }

    Matrix_Push(&gGfxMatrix);
    // Possibly the targeting cursor. During the big attack, it would come back to the player before moving outward
    RCP_SetupDL_36();
    Matrix_Translate(gGfxMatrix, 0.0f, -100.0f, 0.0f, MTXF_APPLY);
    Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
    if (player->turretState < 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -5000.0f + (player->turretRecoil * 25), MTXF_APPLY);
    } else {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -5000.0f, MTXF_APPLY);
    }
    Matrix_Scale(gGfxMatrix, 12.0f, 12.0f, 1.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    Matrix_Pop(&gGfxMatrix);

    // Likely displayed the turrets guns. They are 100 units to the left and right of the player and 100 units below
    RCP_SetupDL_27();
    if ((player->turretRecoil > 20) && (player->turretState >= 2)) {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 200, 0, 100, 255);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
    }
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, -100.0f, -100.0f, -200.0f + player->turretRecoil, MTXF_APPLY);
    Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 100.0f, -100.0f, -200.0f + player->turretRecoil, MTXF_APPLY);
    Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
    Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    Matrix_Pop(&gGfxMatrix);

    // Likely drew muzzle flashes. This suggests the guns were 188 long
    if ((player->turretRecoil > 20) && (player->turretState >= 2)) {
        RCP_SetupDL_64();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 128);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, -100.0f, -100.0f, -200.0f + player->turretRecoil, MTXF_APPLY);
        Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
        Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -188.0f, MTXF_APPLY);
        Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, MTXF_APPLY);
        Matrix_SetGfxMtx(&gMasterDisp);
        Matrix_Pop(&gGfxMatrix);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 100.0f, -100.0f, -200.0f + player->turretRecoil, MTXF_APPLY);
        Matrix_RotateY(gGfxMatrix, player->rot.y * M_DTOR, MTXF_APPLY);
        Matrix_RotateX(gGfxMatrix, -player->rot.x * M_DTOR, MTXF_APPLY);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -188.0f, MTXF_APPLY);
        Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, MTXF_APPLY);
        Matrix_SetGfxMtx(&gMasterDisp);
        Matrix_Pop(&gGfxMatrix);
    }
} */
