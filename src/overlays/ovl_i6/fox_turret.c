#include "global.h"
#include "assets/ast_great_fox.h"
#include "assets/ast_corneria.h"
#include "fox_co.h"
#include "assets/ast_arwing.h"
#include "port/hooks/Events.h"

f32 turretDestY = 50.0f;
f32 turretDestX = 0.0f;
f32 turretDestZ = 0.0f;
f32 turret360Radius = 0.0f;
f32 turret360RadiusMod = 0.0f;
f32 turret360Speed = 0.0f;
f32 turret360SpeedMod = 0.0f;
f32 turret360Height = 0.0f;
f32 turret360HeightMod = 0.0f;
f32 turretXPositionMod = 0.0f;
f32 turretZPositionMod = 0.0f;

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

    // ???
    //PlayerShot_Initialize(shot);
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

    for (i = 0; i < ARRAY_COUNT(gPlayerShots) - 1; i++) {
        if (gPlayerShots[i].obj.status == SHOT_FREE) {
            Turret_SetupShot(player, &gPlayerShots[i], xOffset, -130.0f, 250.0f, PLAYERSHOT_GFOX_LASER, 100.0f);
            //Play_PlaySfxFirstPlayer(gPlayerShots[i].sfxSource, NA_SE_GREATFOX_SHOT_DEMO); //NA_SE_TURRET_SHOT
            if ((gCurrentLevel == LEVEL_AQUAS) || (gCurrentLevel == LEVEL_SOLAR) || ((gCurrentLevel == LEVEL_VENOM_ANDROSS) && (gLevelMode == LEVELMODE_ALL_RANGE))) {
                AUDIO_PLAY_SFX(NA_SE_MAR_TWIN_LASER, gPlayerShots[i].sfxSource, 0);                
            } else {
                AUDIO_PLAY_SFX(NA_SE_GREATFOX_SHOT_DEMO, gPlayerShots[i].sfxSource, 0);
            }
            break;
        }
    }
}

void Turret_Shoot(Player* player) {
    s32 i;
    s32 j;

    if ((gControllerPress[player->num].button & A_BUTTON) && !((gControllerHold[player->num].button & R_TRIG) && (player->turretLockOnCount == ARRAY_COUNT(gActors))))  {
        player->shotTimer = 8;
    }
    // Fires two great fox lasers. Offsets match up with the possible guns in Draw.
    if ((gControllerHold[player->num].button & A_BUTTON) && !((gControllerHold[player->num].button & R_TRIG) && (player->turretLockOnCount == ARRAY_COUNT(gActors))))  {

        if (gLaserStrength[0] > 2) {
            gLaserStrength[0] = 2;
        }
        if (gLaserStrength[0] < 0) {
            gLaserStrength[0] = 0;
        }
        
        if (player->shotTimer == 0) {
            Turret_GreatFoxLaser(player, -120.0f);
            Turret_GreatFoxLaser(player, 120.0f);
            player->turretRecoil = 30;
        }

        switch (gLaserStrength[0]) {
            case LASERS_SINGLE:
                player->shotTimer++;
                break;

            case LASERS_TWIN:
                player->shotTimer += 2;
                break;

            case LASERS_HYPER:
                player->shotTimer += 3;
                break;
        }

        if (player->shotTimer >= 12) {
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
        if ((gActors[i].obj.status == OBJ_ACTIVE) /* && (gActors[i].obj.id == OBJ_ACTOR_EVENT) */) {
            gTexturedLines[i].mode = 3;
            gTexturedLines[i].xyScale = 0.2f;
            gTexturedLines[i].zScale = 1.0f;

            /* gTexturedLines[i].posAA.x = player->pos.x;
            gTexturedLines[i].posAA.y = player->pos.y; //0.0f
            gTexturedLines[i].posAA.z = player->pos.z - 10.0f; //100 */

            gTexturedLines[i].posAA.z = player->trueZpos - (300.0f * COS_DEG(gPlayer[0].unk_180 + gPlayer[0].unk_000 + 180));
            gTexturedLines[i].posAA.x = player->pos.x - (300.0f * SIN_DEG(gPlayer[0].unk_180 + gPlayer[0].unk_000 + 180));
            gTexturedLines[i].posAA.y = player->pos.y; //0.0f

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
    for (j = 1; j < player->turretLockOnCount; j++) {
        if ((gBosses[j].obj.status == OBJ_ACTIVE) /* && (gActors[i].obj.id == OBJ_ACTOR_EVENT) */) {
            gTexturedLines[j + 4].mode = 3;
            gTexturedLines[j + 4].xyScale = 0.2f;
            gTexturedLines[j + 4].zScale = 1.0f;

            /* gTexturedLines[j + 3].posAA.x = player->pos.x;
            gTexturedLines[j + 3].posAA.y = player->pos.y; //0.0f
            gTexturedLines[j + 3].posAA.z = player->pos.z - 10.0f; //100 */

            gTexturedLines[j + 4].posAA.z = player->trueZpos - (300.0f * COS_DEG(gPlayer[0].unk_180 + gPlayer[0].unk_000 + 180));
            gTexturedLines[j + 4].posAA.x = player->pos.x - (300.0f * SIN_DEG(gPlayer[0].unk_180 + gPlayer[0].unk_000 + 180));
            gTexturedLines[j + 4].posAA.y = player->pos.y; //0.0f

            gTexturedLines[j + 4].timer = 2;

            gTexturedLines[j + 4].prim.r = 255;
            gTexturedLines[j + 4].prim.g = 255;
            gTexturedLines[j + 4].prim.b = 255;
            gTexturedLines[j + 4].prim.a = 255;

            gTexturedLines[j + 4].posBB.x = gBosses[j].obj.pos.x;
            gTexturedLines[j + 4].posBB.y = gBosses[j].obj.pos.y;
            gTexturedLines[j + 4].posBB.z = gBosses[j].obj.pos.z;
        }
    }

    if ((gControllerHold[player->num].button & R_TRIG)) {
        //TurretLaserChargeSpawn();
        player->turretLockOnCount++;
        if (player->turretLockOnCount > ARRAY_COUNT(gActors)) {
            player->turretLockOnCount = ARRAY_COUNT(gActors);
            //func_effect_80081BEC(player->pos.x, player->pos.y, player->trueZpos - 500.0f, 1.0f, 9);
            if ((gBombCount[0] > 0) || (gCurrentLevel == LEVEL_AQUAS)) {
                Player_SetupArwingShot(player, &gPlayerShots[ARRAY_COUNT(gPlayerShots) - 1], 0.0f, 0.0f, PLAYERSHOT_BOMB, 0.0f);
                PlayerShot_SetBombLight(player);
                AUDIO_PLAY_SFX(NA_SE_MISSILE_ALARM, gDefaultSfxSource, 4);
            }
        } else {
            player->turretLockOnCount = player->turretLockOnCount;
        }
        if ((player->turretLockOnCount == ARRAY_COUNT(gActors)) && (gControllerPress[player->num].button & A_BUTTON) && (gBombCount[0] > 0)) {
            player->turretLockOnCount = 0;
            Player_SmartBomb(player);
            if (gCurrentLevel == LEVEL_AQUAS) {
                gBombCount[0]++;
            }
        }
    } else {
       player->turretLockOnCount = 0;
       Audio_KillSfxBySourceAndId(gDefaultSfxSource, NA_SE_EN_A6BOSS_CHARGE);
    }
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
    Player_ArwingBrake(player);
    Turret_Shoot(player);
    Player_CollisionCheck(player);
    Player_DamageEffects(player);
    Player_WaterEffects(player);
    Player_FloorCheck(player);
    Player_LowHealthAlarm(player);

    switch (player->form) {
        case FORM_LANDMASTER:
            player->wingPosition = 1;
            if (player->zRotBank > 0) {
                player->unk_188 += 1.5f;
                player->zRotBank -= player->unk_188;
                if (player->zRotBank <= 0.0f) {
                    player->zRotBank = 0.0f;
                    if (player->unk_188 > 3.0f) {
                        player->unk_188 *= -0.4f;
                        player->zRotBank -= player->unk_188;
                    }
                }
            }
            if (player->zRotBank < 0.0f) {
                player->unk_188 += 1.5f;
                player->zRotBank += player->unk_188;
                if (player->zRotBank >= 0.0f) {
                    player->zRotBank = 0.0f;
                    if (player->unk_188 > 3.0f) {
                        player->unk_188 *= -0.4f;
                        player->zRotBank += player->unk_188;
                    }
                }
            }
            if (player->grounded) {
                turretDestY += 100.0f;
                Player_ApplyDamage(player, 1, 21);
                if (player->baseSpeed != 0.0f) {
                    func_tank_80043B18(player);
                }
                if (player->rollState != 0.0f) {
                    func_tank_80043B18(player);
                }
            }
            // Has to do with broken texture scrolling? Fixed elsewhere.
            /* if (player->baseSpeed > 0.0f) {
                Lib_Texture_Scroll(D_landmaster_3002E80, 32, 32, 0);
                if ((gCurrentLevel == LEVEL_TITANIA) && !gBossActive) {
                    func_tank_80043280(D_landmaster_3005EA8, D_TI_6009BB8, gGameFrameCount * -55.0f);
                }
                if ((gCurrentLevel == LEVEL_MACBETH) && (player->state == PLAYERSTATE_LEVEL_COMPLETE)) {
                    // Using D_TI_6009BB8 since it's the same texture, D_Tex_800DACB8 might be imported incorrectly.
                    func_tank_80043280(D_landmaster_3005EA8, D_TI_6009BB8, gGameFrameCount * -55.0f);
                }
            }
            if (player->baseSpeed > 10.0f) {
                Lib_Texture_Scroll(D_landmaster_3002E80, 32, 32, 0);
                if ((gCurrentLevel == LEVEL_TITANIA) && !gBossActive) {
                    func_tank_80043280(D_landmaster_3005EA8, D_TI_6009BB8, gGameFrameCount * -55.0f);
                }
            } */
            if (gCurrentLevel != LEVEL_MACBETH) {
                Player_CollisionCheck(player);
            } else {
                func_tank_800481F4(player);
            }
            if (gCurrentLevel == LEVEL_TITANIA) {
                func_tank_80046358(player);
                func_tank_80046260(player);
            }
            break;

        case FORM_BLUE_MARINE:
            break;
    }

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

    if (gCurrentLevel == LEVEL_AQUAS) {
        Aquas_801A99D4(player);
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
    if ((gControllerHold[player->num].button & B_BUTTON) && (gCurrentLevel != LEVEL_TITANIA) && (gCurrentLevel != LEVEL_MACBETH) && !((gCurrentLevel == LEVEL_VENOM_ANDROSS) && (!gBossActive))) {
        if ((turretDestY > ((player->pathHeight + player->pathFloor)/2) + player->yPathTarget + 50) && (gCurrentLevel != LEVEL_SOLAR)){
            turretDestY -= 100.0f;
        }

        else if ((turretDestY < ((player->pathHeight + player->pathFloor)/2) + player->yPathTarget - 50) && (gCurrentLevel != LEVEL_SOLAR)){
            turretDestY += 100.0f;
        }

        if (turretDestX > player->xPathTarget + 50.0f){
            turretDestX -= 100.0f;
        }

        else if (turretDestX < player->xPathTarget - 50.0f){
            turretDestX += 100.0f;
        }
    }

    /* gPlayerTurnRate = 2.3f;
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
    player->vel.z = sp5C.z + sp50.z; */

    // Correct for Tank collision sending you backwards
    if ((player->form == FORM_LANDMASTER) && (player->baseSpeed != 15)) {
        Math_SmoothStepToF(&player->baseSpeed, 15, 0.1f, 1.0f, 0.00001f);
    }

    player->vel.z = -player->baseSpeed - player->boostSpeed;

    // Keep up with Andross
    if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
        player->vel.z += D_Andross_801A7F58;
    }

    // Stop for Bacoon
    if ((gCurrentLevel == LEVEL_AQUAS) && (gBossActive) && (fabsf(gBosses[0].obj.pos.z - gPlayer[0].trueZpos) <= 3000.0f)) {
        player->vel.z = 0;
    }

    if (player->vel.z > 0) {
        player->vel.z = 0;
    }

    player->pos.z += player->vel.z;

    // Move Around
    if ((gControllerHold[player->num].button & U_JPAD) || (gControllerHold[player->num].button & U_CBUTTONS)) {
        if (player->pos.y < (player->pathHeight + player->yPath)) {
            turretDestY += 30.0f;
        }        
    }
    if ((gControllerHold[player->num].button & D_JPAD) || (gControllerHold[player->num].button & D_CBUTTONS)) {
        if (player->pos.y > (player->pathFloor + player->yPath + 40)) {
            turretDestY -= 30.0f;
        }
    }

    if ((gControllerHold[player->num].button & R_JPAD) || (gControllerHold[player->num].button & R_CBUTTONS)) {
        if (player->pos.x < (player->xPath + player->pathWidth)) {
            turretDestX += 30.0f;
            if ((gCallTimer != 0) && (gControllerHold[player->num].button & R_CBUTTONS)) {
                turretDestX -= 90.0f;
            }
        }
    }
    if ((gControllerHold[player->num].button & L_JPAD) || (gControllerHold[player->num].button & L_CBUTTONS)) {
        if (player->pos.x > (player->xPath - player->pathWidth)) {
            turretDestX -= 30.0f;
        }
    }

    //Additional path changing code
    if ((player->pathChangeTimer > 0)) {
        player->pathChangeTimer -= 2;
        if ((gCurrentLevel == LEVEL_SECTOR_Y) || (gCurrentLevel == LEVEL_MACBETH)) {
            turretDestY = ((player->pathHeight + player->pathFloor)/2) + player->yPathTarget;
        } else {
            turretDestX = player->xPathTarget;
        }
    }

    //Updates XY
    Math_SmoothStepToF(&player->pos.x, turretDestX, 0.15f, 20.0f, 0.00001f);
    Math_SmoothStepToF(&player->pos.y, turretDestY, 0.15f, 20.0f, 0.00001f);
    
    //Updates rotation
    Math_SmoothStepToF(&player->unk_180, -player->unk_008 + 180, 0.5f, 3.0f, 0.00001f);
    Math_SmoothStepToF(&player->unk_17C, -player->unk_00C, 0.5f, 3.0f, 0.00001f);
    Turret_Shoot(player);

    if ((gBossActive) && (gCurrentLevel == LEVEL_TITANIA)) {
        if (turretDestY > 200) {
            Math_SmoothStepToF(&turretDestY, 200, 0.5f, 5.0f, 0.00001f);
        }
    }
}

void Turret_Update360(Player* player) {
    f32 sp2C;
    f32 sp28;

    //Player_MoveArwing360(player);
    //Player_Shoot(player);
    /* if (((gCurrentLevel == LEVEL_KATINA) || (gCurrentLevel == LEVEL_BOLSE)) && (player->pos.x > 50) && (player->pos.x < -50) && (player->pos.z > 50) && (player->pos.z < -50)) {
        Player_CollisionCheck(player);
    } */
    if (gGameFrameCount > 50) {
        Player_CollisionCheck(player);
    }
    Player_FloorCheck(player);
    Player_LowHealthAlarm(player);

    // Kill
    if ((player->shields <= 0) || (player->damage >= player->shields)/*  && (player->radioDamageTimer != 0) */) {
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

    // Moves the camera around unless locked in place with Z. Condition seems incorrect. 
    if (!(gControllerHold[player->num].button & Z_TRIG) && (sqrtf(SQ(sp2C) + SQ(sp28)) > 55.0f)) {
        if ((sp2C > 40.0f)) {
            player->unk_008 += 3.0f;
        }
        if ((sp2C < -40.0f)) {
            player->unk_008 -= 3.0f;
        }
        if ((sp28 < -40.0f)) {
            player->unk_00C -= 2.0f;
        }
        if ((sp28 > 40.0f)) {
            player->unk_00C += 2.0f;
        }
    }

    //Correct over-rotating
    if (player->unk_008 > 180) {
        player->unk_008 -= 360;
        player->unk_180 += 360;
    }
    if (player->unk_008 < -180) {
        player->unk_008 += 360;
        player->unk_180 -= 360;
    }
    //player->unk_180 = -player->unk_008 + 180

    /* 0 = 180
    90 = 90
    180 = 0
    -180 = 360 */

    //Prevent looking down or up
    if (player->unk_00C > 50.0f) {
        player->unk_00C = 50.0f;
    }
    if (player->unk_00C < -50.0f) {
        player->unk_00C = -50.0f;
    }

    //Encourage not looking down or up
    player->flags_228 = 0;
    if (player->unk_00C > 25.0f) {
        player->flags_228 |= PFLAG_228_3;
    }
    if (player->unk_00C < -25.0f) {
        player->flags_228 |= PFLAG_228_2;
    }

    // the B button recenters the view
    if (gControllerPress[player->num].button & B_BUTTON) {
        player->unk_00C = 0.0f;
        if (gCurrentLevel != LEVEL_SECTOR_Z) {
            player->unk_008 = 0.0f;
        }
    }

    // Quick look around
    if ((gControllerPress[player->num].button & R_JPAD) || ((gControllerPress[player->num].button & R_CBUTTONS) && (gCallTimer == 0))) {
        if (gCurrentLevel == LEVEL_SECTOR_Z) {
            player->unk_008 += 45.0f;
            player->unk_180 -= 30.0f;
        } else {
            player->unk_008 += 90.0f;
            player->unk_180 -= 30.0f;
        }
    }
    if ((gControllerPress[player->num].button & L_JPAD) || (gControllerPress[player->num].button & L_CBUTTONS)) {
        if (gCurrentLevel == LEVEL_SECTOR_Z) {
            player->unk_008 -= 45.0f;
            player->unk_180 += 30.0f;
        } else {
            player->unk_008 -= 90.0f;
            player->unk_180 += 30.0f;
        }
    }

    // Change Orbit Radius
    if (turret360Speed != 0) {
        if ((turret360RadiusMod > (1000 - turret360Radius)) && ((gControllerHold[player->num].button & U_JPAD) || (gControllerHold[player->num].button & U_CBUTTONS))) {
            if ((player->unk_008 > -60) && (player->unk_008 < 60)) {
                turret360RadiusMod -= 30.0f;
                turret360SpeedMod += 0.005f;
                if (gCurrentLevel == LEVEL_BOLSE) {
                    turret360SpeedMod += 0.002f;
                }
            } else {
                turret360RadiusMod += 30.0f;
                turret360SpeedMod -= 0.005f;
                if (gCurrentLevel == LEVEL_BOLSE) {
                    turret360SpeedMod -= 0.002f;
                }
            }
            
        }
        if ((turret360RadiusMod < (turret360Radius + 2000)) && ((gControllerHold[player->num].button & D_JPAD) || (gControllerHold[player->num].button & D_CBUTTONS))) {
            if ((player->unk_008 > -60) && (player->unk_008 < 60)) {
                turret360RadiusMod += 30.0f;
                turret360SpeedMod -= 0.005f;
                if (gCurrentLevel == LEVEL_BOLSE) {
                    turret360SpeedMod -= 0.002f;
                }
            } else {
                turret360RadiusMod -= 30.0f;
                turret360SpeedMod += 0.005f;
                if (gCurrentLevel == LEVEL_BOLSE) {
                    turret360SpeedMod += 0.002f;
                }
            }
        }
    }
    
    // Resets position
    /* if (gControllerHold[player->num].button & B_BUTTON) {
        if (turretDestY > ((player->pathHeight + player->pathFloor)/2) + player->yPathTarget + 50){
            turretDestY -= 100.0f;
        }

        else if (turretDestY < ((player->pathHeight + player->pathFloor)/2) + player->yPathTarget - 50){
            turretDestY += 100.0f;
        }

        if (turretDestX > player->xPathTarget + 50.0f){
            turretDestX -= 100.0f;
        }

        else if (turretDestX < player->xPathTarget - 50.0f){
            turretDestX += 100.0f;
        }
    } */

    // Move Around
    /* if ((gControllerHold[player->num].button & U_JPAD) || (gControllerHold[player->num].button & U_CBUTTONS)) {
        if (player->pos.y < (player->pathHeight + player->yPath)) {
            turretDestY += 20.0f;
        }        
    }
    if ((gControllerHold[player->num].button & D_JPAD) || (gControllerHold[player->num].button & D_CBUTTONS)) {
        if (player->pos.y > (player->pathFloor + player->yPath + 40)) {
            turretDestY -= 20.0f;
        }
    }

    if ((gControllerHold[player->num].button & R_JPAD) || (gControllerHold[player->num].button & R_CBUTTONS)) {
        if (player->pos.x < (player->xPath + player->pathWidth)) {
            turretDestX += 20.0f;
        }
    }
    if ((gControllerHold[player->num].button & L_JPAD) || (gControllerHold[player->num].button & L_CBUTTONS)) {
        if (player->pos.x > (player->xPath - player->pathWidth)) {
            turretDestX -= 20.0f;
        }
    } */

    //Fortuna, Venom II, Corneria: 3000, 0.5, 350

    if ((sCoGrangaLimbs <= 3) || (gCurrentLevel != LEVEL_CORNERIA)) {
        turret360Radius = 3000;
    }
    /* if ((sCoGrangaLimbs <= 3) && (gCurrentLevel == LEVEL_CORNERIA)) {
        turret360RadiusMod = 0;
        turret360SpeedMod = 0;
    } */
    turret360Speed = 1.0f;
    turret360Height = 450;

    switch (gCurrentLevel) {
        case LEVEL_SECTOR_Y:
            turret360Height = 500;
            break;
        case LEVEL_SECTOR_Z:
            turret360Radius = 0;
            turret360Speed = 0;
            turret360Height = 300;
            break;
        case LEVEL_BOLSE:
            turret360Height = 500;
            break;
        case LEVEL_VENOM_ANDROSS:
            turret360Radius = 0;
            turret360Speed = 0;
            turret360Height = (player->pathHeight + player->pathFloor)/2;
            break;
    }

    // Center to Granga if he falls
    if ((sCoGrangaLimbs > 3) && (gCurrentLevel == LEVEL_CORNERIA)) {
        Math_SmoothStepToF(&turretZPositionMod, gBosses[0].obj.pos.z, 0.5f, 25.0f, 0.00001f);
        Math_SmoothStepToF(&turretXPositionMod, gBosses[0].obj.pos.x, 0.5f, 25.0f, 0.00001f);
        //Math_SmoothStepToF(&turret360Radius, 1500, 0.5f, 25.0f, 0.00001f);
    } else {
        turretXPositionMod = 0;
        turretZPositionMod = 0;
    }

    //Updates XYZ
    Math_SmoothStepToF(&player->pos.y, turret360Height + turret360RadiusMod / 10, 0.5f, 25.0f, 0.00001f);
    player->trueZpos = player->pos.z = (turret360Radius + turret360RadiusMod) * COS_DEG(turret360Speed * player->unk_000) + turretZPositionMod;
                       player->pos.x = (turret360Radius + turret360RadiusMod) * SIN_DEG(turret360Speed * player->unk_000) + turretXPositionMod;

    //Updates rotation
    Math_SmoothStepToF(&player->unk_180, -player->unk_008 + 180, 0.5f, 3.0f, 0.00001f);
    Math_SmoothStepToF(&player->unk_17C, -player->unk_00C, 0.5f, 3.0f, 0.00001f);
    
    //Rotates along path
    if ((gCurrentLevel != LEVEL_SECTOR_Z) && (gCurrentLevel != LEVEL_VENOM_ANDROSS)) {
        player->unk_000 += (0.5 * (turret360Speed + turret360SpeedMod));
    }

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
    player->camRoll = 0;
}

void Turret_Cutscene_AllRangeMode(Player* player) {
    s32 pad;
    Vec3f sp70;
    Vec3f sp64;
    ActorTeamBoss* actor;
    f32 var_s1;
    f32 var_s2;
    f32 var_s3;
    f32 D_demo_800CA080[] = { -400.0f, 0.0f, 400.0f };
    f32 D_demo_800CA08C[] = { 0.0f, 200.0f, 0.0f };
    s32 i;
    s32 pad1;
    s32 pad2;

    gCsFrameCount++;

    Math_SmoothStepToAngle(&player->aerobaticPitch, 0.0f, 0.1f, 20.0f, 0.0f);    

    if (gCsFrameCount == 37) {
        gChangeTo360 = true;
        if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
            Radio_PlayMessage(gMsg_ID_19466, RCID_FOX);
            AUDIO_PLAY_BGM(NA_BGM_ANDROSS_BRAIN);
        } else if (gCurrentLevel != LEVEL_TRAINING) {
            Radio_PlayMessage(gMsg_ID_20180, RCID_FOX);
            if (gCurrentLevel == LEVEL_SECTOR_Y) {
                Audio_PlaySequence(SEQ_PLAYER_BGM, gBossBgms[gCurrentLevel], 0, 2);
            } else {
                AUDIO_PLAY_BGM(gBossBgms[gCurrentLevel]);
            }
        }
    }

    if (gCsFrameCount > 70) {
        player->draw = true;
    } else {
        player->draw = false;
    }

    Math_SmoothStepToF(&player->rot.x, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->rot.y, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->rot.z, 0.0f, 0.1f, 1.0f, 0.0f);
    Math_SmoothStepToF(&player->zRotBank, 0.0f, 0.1f, 5.0f, 0.0f);
    Math_SmoothStepToF(&player->camRoll, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->boostSpeed, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToF(&player->camDist, 0.0f, 0.1f, 3.0f, 0.0f);

    switch (player->csState) {
        case 0:
            Audio_PlayVoice(0);
            D_ctx_80177A48[0] = 0.005f;
            D_ctx_80177A48[1] = 0.0f;
            D_ctx_80177A48[2] = 60.0f;
            D_ctx_80177A48[3] = 0.0f;
            player->arwing.drawFace = true;
            player->csState++;
            gCsFrameCount = 0;
            /* fallthrough */
        case 1:
            if (player->pos.y < 350.0f) {
                Math_SmoothStepToF(&player->pos.y, 350.0f, 0.1f, D_ctx_80177A48[3], 0.0f);
            }

            Math_SmoothStepToF(&D_ctx_80177A48[3], 10.0f, 1.0f, 1.0f, 0.0f);
            Math_SmoothStepToF(&D_ctx_80177A48[1], 360.0f, 0.05f, 1.5f, 0.0f);
            Math_SmoothStepToF(&D_ctx_80177A48[2], -70.0f, 0.1f, 0.7f, 0.0f);

            if (D_ctx_80177A48[1] > 220.0f) {
                player->wingPosition = 2;
            }

            if ((gCsFrameCount > 135) && (gCsFrameCount < 180)) {
                Math_SmoothStepToF(&D_ctx_801779A8[player->num], 30.0f, 1.0f, 10.0f, 0.0f);
            }

            if (gCsFrameCount == 138) {
                AUDIO_PLAY_SFX(NA_SE_WING_OPEN, player->sfxSource, 0);
            }

            if (gCsFrameCount == 190) {
                AUDIO_PLAY_SFX(NA_SE_WING_OPEN_END, player->sfxSource, 0);
            }

            if (D_ctx_80177A48[1] > 350.0f) {
                player->state = PLAYERSTATE_ACTIVE;
                player->draw = false;
                player->unk_014 = 0.0f;
                player->unk_018 = 0.1f;
                player->unk_194 = 10.0f;
                player->unk_190 = 10.0f;

                AUDIO_PLAY_SFX(NA_SE_ARWING_BOOST, player->sfxSource, 0);

                D_ctx_801779A8[player->num] = 70.0f;

                if ((gCurrentLevel != LEVEL_VENOM_ANDROSS) && (gCurrentLevel != LEVEL_TRAINING)) {
                    D_hud_800D1970 = 0;
                    for (i = 0, actor = &gActors[2]; i < 3; i++, actor++) {
                        Actor_Initialize(actor);
                        actor->obj.status = OBJ_INIT;
                        actor->obj.id = OBJ_ACTOR_TEAM_BOSS;
                        actor->obj.pos.x = D_demo_800CA080[i] + player->pos.x;
                        actor->obj.pos.y = D_demo_800CA08C[i] + player->pos.y;
                        actor->obj.pos.z = player->trueZpos - 1000.0f;
                        actor->rot_0F4.y = 180.0f;
                        Object_SetInfo(&actor->info, actor->obj.id);
                    }
                }
            }

            Matrix_RotateY(gCalcMatrix, D_ctx_80177A48[1] * M_DTOR, MTXF_NEW);
            Matrix_RotateX(gCalcMatrix, D_ctx_80177A48[2] * M_DTOR, MTXF_APPLY);

            sp70.x = 0.0f;
            sp70.y = 0.0f;
            sp70.z = 200.0f;

            Matrix_MultVec3f(gCalcMatrix, &sp70, &sp64);

            if ((gCurrentLevel == LEVEL_CORNERIA) || (gCurrentLevel == LEVEL_VENOM_ANDROSS)) {
                sp64.x *= -1.0f;
            }

            if (gCsFrameCount < 60) {
                sp64.y = -80;
            } else if (gCsFrameCount < 140) {
                Math_SmoothStepToF(&sp64.y, 25.0f, 1.0f, 1.0f, 0.0f);
            } else if (gCsFrameCount > 230) {
                sp64.y = 0;
            }

            Math_SmoothStepToF(&D_ctx_80177A48[0], 0.1f, 1.0f, 0.005f, 0.0f);
            Math_SmoothStepToF(&player->cam.eye.x, player->pos.x + sp64.x, D_ctx_80177A48[0], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.eye.y, player->pos.y + sp64.y, D_ctx_80177A48[0], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.eye.z, player->trueZpos + gPathProgress + sp64.z - 1200, D_ctx_80177A48[0], 500.0f,
                               0.0f);
            Math_SmoothStepToF(&player->cam.at.x, player->pos.x, D_ctx_80177A48[0], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.at.y, player->pos.y, D_ctx_80177A48[0], 500.0f, 0.0f);
            Math_SmoothStepToF(&player->cam.at.z, player->trueZpos + gPathProgress - 1200, D_ctx_80177A48[0], 500.0f, 0.0f);
            break;
    }
    Matrix_RotateY(gCalcMatrix, (player->rot.y + 180.0f) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, -(player->rot.x * M_DTOR), MTXF_APPLY);

    sp70.x = 0.0f;
    sp70.y = 0.0f;
    sp70.z = player->baseSpeed + player->boostSpeed;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);

    player->vel.x = sp64.x;
    player->vel.z = sp64.z;
    player->vel.y = sp64.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->trueZpos = player->pos.z + player->camDist;
    player->cam.at.z += player->vel.z;
    player->cam.eye.z += player->vel.z;

    player->bankAngle = player->rot.z + player->zRotBank + player->zRotBarrelRoll;
    player->bobPhase += 10.0f;
    player->yBob = -SIN_DEG(player->bobPhase) * 0.3f;
    player->rockPhase += 8.0f;
    player->rockAngle = SIN_DEG(player->rockPhase);

    Player_FloorCheck(player);
}

void Turret_Cutscene_LevelStart(Player* player) {
    gCsFrameCount++;
    if (gLevelMode == LEVELMODE_ON_RAILS) {
        switch (gCurrentLevel) {
            case LEVEL_CORNERIA:
                Turret_Corneria_LevelStart(player);
                Player_FloorCheck(player);
                break;

            case LEVEL_METEO:
                Meteo_LevelStart(player);
                break;

            case LEVEL_SECTOR_X:
                SectorX_LevelStart(player);
                break;

            case LEVEL_TITANIA:
                Titania_LevelStart(player);
                Player_FloorCheck(player);
                break;

            case LEVEL_ZONESS:
                Zoness_LevelStart(player);
                break;

            case LEVEL_MACBETH:
                Turret_Macbeth_LevelStart(player);
                break;

            case LEVEL_SECTOR_Y:
                SectorY_801A0AC0(player);
                break;

            case LEVEL_SOLAR:
                Solar_LevelStart(player);
                break;

            case LEVEL_VENOM_1:
                Venom1_LevelStart(player);
                Player_FloorCheck(player);
                break;

            case LEVEL_AQUAS:
                Turret_Aquas_CsLevelStart(player);
                break;

            case LEVEL_AREA_6:
                Area6_LevelStart(player);
                break;
        }
        func_demo_8004990C(player);
    } else {
        switch (gCurrentLevel) {
            case LEVEL_FORTUNA:
                AllRange_FortunaIntro(player);
                Player_FloorCheck(player);
                break;

            case LEVEL_VENOM_2:
                Venom2_LevelStart(player);
                Player_FloorCheck(player);
                break;

            case LEVEL_BOLSE:
                Bolse_LevelStart(player);
                Player_FloorCheck(player);
                break;

            case LEVEL_KATINA:
                Katina_LevelStart(player);
                Player_FloorCheck(player);
                break;

            case LEVEL_SECTOR_Z:
                Turret_SectorZ_LevelStart(player);

            default:
                break;
        }
    }
}

void Turret_Cutscene_LevelComplete(Player* player) {
    s32 sp24;
    s32 sp20;
    s32 btn;

    gCsFrameCount++;

    switch (player->form) {
        case FORM_ARWING:
            if ((gCurrentLevel == LEVEL_VENOM_ANDROSS) || ((gCurrentLevel == LEVEL_VENOM_2) && (gLevelPhase == 1))) {
                Andross_80193C4C(player);
            } else if (gCurrentLevel == LEVEL_SECTOR_X) {
                if (gLevelPhase == 0) {
                    SectorX_LevelComplete(player);
                } else {
                    Cutscene_WarpZoneComplete(player);
                }
            } else if (gCurrentLevel == LEVEL_AREA_6) {
                Area6_LevelComplete(player);
            } else if (gCurrentLevel == LEVEL_FORTUNA) {
                Cutscene_FortunaComplete(player);
                Player_FloorCheck(player);
            } else if (gCurrentLevel == LEVEL_BOLSE) {
                Bolse_LevelComplete(player);
                Player_FloorCheck(player);
            } else if (gCurrentLevel == LEVEL_SECTOR_Z) {
                SectorZ_LevelComplete(player);
            } else if (gCurrentLevel == LEVEL_KATINA) {
                Katina_LevelComplete(player);
                Player_FloorCheck(player);
            } else if (gCurrentLevel == LEVEL_SECTOR_Y) {
                SectorY_LevelComplete(player);
                Player_FloorCheck(player);
            } else if (gCurrentLevel == LEVEL_SOLAR) {
                Solar_LevelComplete(player);
                Player_FloorCheck(player);
            } else if (gCurrentLevel == LEVEL_ZONESS) {
                Zoness_LevelComplete(player);
                Player_FloorCheck(player);
            } else if (gCurrentLevel == LEVEL_VENOM_2) {
                Turret_Venom2_LevelComplete(player);
                Player_FloorCheck(player);
            } else if (gCurrentLevel == LEVEL_METEO) {
                if (gLevelPhase == 0) {
                    Meteo_LevelComplete(player);
                } else {
                    Cutscene_WarpZoneComplete(player);
                }
            } else if ((gCurrentLevel == LEVEL_CORNERIA) && (gLevelMode == LEVELMODE_ALL_RANGE)) {
                Turret_Corneria_LevelComplete1(player);
                Player_FloorCheck(player);
            } else {
                if (gCsFrameCount == 170) {
                    AUDIO_PLAY_BGM(NA_BGM_COURSE_CLEAR);
                }
                Turret_Cutscene_CoComplete2(player);
                Player_FloorCheck(player);
            }
            Player_UpdateArwingRoll(player);
            break;

        case FORM_LANDMASTER:
            sp20 = gInputPress->button;
            sp24 = gInputHold->button;
            gInputPress->button = 0;
            btn = gInputPress->button;
            gInputHold->button = gInputPress->button;
            gInputPress->stick_y = btn;
            gInputPress->stick_x = btn;

            if (gCurrentLevel == LEVEL_TITANIA) {
                Turret_Titania_LevelComplete(player);
            } else if (gMissionStatus != MISSION_COMPLETE) {
                Turret_Macbeth_LevelComplete2(player);
            } else {
                Turret_Macbeth_LevelComplete1(player);
            }

            func_tank_80046358(player);
            gInputPress->button = sp20;
            gInputHold->button = sp24;
            break;

        case FORM_BLUE_MARINE:
            if (gCurrentLevel == LEVEL_AQUAS) {
                Aquas_CsLevelComplete(player);
            }
            break;
    }
}

void Turret_Draw(Player* player) {
    FrameInterpolation_RecordOpenChild("Reticle", 0);
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
    Matrix_Translate(gGfxMatrix, 150.0f, 0.0f, 0.0f, MTXF_APPLY);
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
    Matrix_Translate(gGfxMatrix, 150.0f, 0.0f, 0.0f, MTXF_APPLY);
    Matrix_Scale(gGfxMatrix, 5.0f, 4.0f, 4.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, Guns_GF_GUNS_mesh_mesh);
    Matrix_Pop(&gGfxMatrix);
    FrameInterpolation_RecordCloseChild();

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
