#include "global.h"
#include "hit64.h"

// gHit64SelfDestruct

void Hit64_Main(void) {
    if (CVarGetInteger("gHit64SelfDestruct", 0) == 1) {
        Player* player = &gPlayer[0];

        if (gControllerPress[0].button & D_JPAD) {
            player->shields = 0;
            Player_ApplyDamage(player, 0, 10000);
        }
    }
}
