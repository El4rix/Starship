#include "sf64dma.h"

#define NO_SEGMENT \
    { NULL, NULL }

#define OVERLAY_OFFSETS(file)                                                                                   \
    NO_OVERLAY

#define NO_OVERLAY                                        \
    {                                                     \
        { NULL, NULL }, { NULL, NULL }, { NULL, NULL }, { \
            NULL, NULL                                    \
        }                                                 \
    }

#define ROM_SEGMENT(file) \
    NO_SEGMENT

Scene sNoOvl_Logo[1] = {
    { NO_OVERLAY,
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ NO_SEGMENT,
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_logo) } },
};

Scene sOvlending_Ending[6] = {
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ ROM_SEGMENT(ast_ending_award_front),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ ROM_SEGMENT(ast_ending_award_back),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ ROM_SEGMENT(ast_ending_expert),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_ending),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_ending),
        /* 0x8 */ ROM_SEGMENT(ast_ending_expert),
        /* 0x9 */ ROM_SEGMENT(ast_font_3d),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlmenu_Title[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_title),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlmenu_Option[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_map),
        /* 0x7 */ ROM_SEGMENT(ast_vs_menu),
        /* 0x8 */ ROM_SEGMENT(ast_option),
        /* 0x9 */ ROM_SEGMENT(ast_font_3d),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlmenu_Map[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_map),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ ROM_SEGMENT(ast_font_3d),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlmenu_GameOver[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ ROM_SEGMENT(ast_andross),
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli1_Corneria[1] = {
    { OVERLAY_OFFSETS(ovl_i1),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_corneria),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli2_Meteo[2] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_meteo),
        /* 0x7 */ ROM_SEGMENT(ast_warp_zone),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_meteo),
        /* 0x7 */ ROM_SEGMENT(ast_warp_zone),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli5_Titania[6] = {
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_1),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ ROM_SEGMENT(ast_8_ti),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ ROM_SEGMENT(ast_8_ti),
        /* 0x9 */ ROM_SEGMENT(ast_9_ti),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ ROM_SEGMENT(ast_8_ti),
        /* 0x9 */ ROM_SEGMENT(ast_9_ti),
        /* 0xA */ ROM_SEGMENT(ast_A_ti),
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_titania),
        /* 0x7 */ ROM_SEGMENT(ast_7_ti_2),
        /* 0x8 */ ROM_SEGMENT(ast_8_ti),
        /* 0x9 */ ROM_SEGMENT(ast_9_ti),
        /* 0xA */ ROM_SEGMENT(ast_A_ti),
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli2_SectorX[2] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_sector_x),
        /* 0x7 */ ROM_SEGMENT(ast_warp_zone),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_sector_x),
        /* 0x7 */ ROM_SEGMENT(ast_warp_zone),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli4_SectorZ[1] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_sector_z),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Aquas[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_blue_marine),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_aquas),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Area6[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_area_6),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli4_Fortuna[2] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_fortuna),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_fortuna),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Unk4[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_area_6),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli6_SectorY[1] = {
    { OVERLAY_OFFSETS(ovl_i6),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_sector_y),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Solar[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_solar),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli3_Zoness[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_zoness),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli1_Venom1[1] = {
    { OVERLAY_OFFSETS(ovl_i1),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_venom_1),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ ROM_SEGMENT(ast_ve1_boss),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli6_Andross[1] = {
    { OVERLAY_OFFSETS(ovl_i6),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_venom_2),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ ROM_SEGMENT(ast_andross),
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli6_Venom2[2] = {
    { OVERLAY_OFFSETS(ovl_i6),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_venom_2),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
    { OVERLAY_OFFSETS(ovl_i6),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_venom_2),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli2_Setup20[1] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_ve1_boss),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli4_Bolse[1] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_bolse),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
};

Scene sOvli4_Katina[1] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_katina),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
};

Scene sOvli5_Macbeth[2] = {
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_macbeth),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_allies),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i5),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_landmaster),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_macbeth),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_great_fox),
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvli1_Training[1] = {
    { OVERLAY_OFFSETS(ovl_i1),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_arwing),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ ROM_SEGMENT(ast_training),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_star_wolf) } },
};

Scene sOvli2_Versus[2] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_planet),
        /* 0x3 */ ROM_SEGMENT(ast_versus),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_planet),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_vs_menu),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_common),
        /* 0x2 */ ROM_SEGMENT(ast_bg_space),
        /* 0x3 */ ROM_SEGMENT(ast_versus),
        /* 0x4 */ ROM_SEGMENT(ast_enmy_space),
        /* 0x5 */ ROM_SEGMENT(ast_text),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_vs_menu),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

Scene sOvlUnused_Unk[1] = {
    { OVERLAY_OFFSETS(ovl_unused),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ NO_SEGMENT,
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};
