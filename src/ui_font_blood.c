/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: --bpp 4 --size 16 --font D:/LVGL/assets/111.ttf -o D:/LVGL/assets\ui_font_blood.c --format lvgl -r 0xe630 --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_BLOOD
#define UI_FONT_BLOOD 1
#endif

#if UI_FONT_BLOOD

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E630 "" */
    0x0, 0x0, 0x1d, 0x50, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbc, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6, 0xe0, 0x8c, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0x40, 0xc, 0x70, 0x0, 0x0, 0x0,
    0x0, 0xb9, 0x0, 0x3, 0xf2, 0x0, 0x0, 0x0,
    0x5, 0xe1, 0x0, 0x0, 0x9b, 0x0, 0x0, 0x0,
    0xd, 0x60, 0x0, 0x0, 0xe, 0x40, 0x0, 0x0,
    0x4e, 0x0, 0x0, 0x0, 0x7, 0xb0, 0x0, 0x0,
    0xa7, 0x0, 0x0, 0x0, 0x2, 0x50, 0x0, 0x0,
    0xe2, 0x0, 0x0, 0x7, 0xfe, 0xe5, 0x0, 0x0,
    0xf1, 0x0, 0x0, 0x4e, 0x20, 0x5f, 0x10, 0x0,
    0xc5, 0x0, 0x0, 0x98, 0x0, 0xd, 0x50, 0x0,
    0x7c, 0x0, 0x0, 0xb6, 0x0, 0xc, 0x68, 0x9a,
    0xd, 0x90, 0x0, 0xa8, 0x0, 0xe, 0x43, 0x1a,
    0x1, 0xcc, 0x63, 0x4e, 0x20, 0x7d, 0x3, 0x91,
    0x0, 0x6, 0xbd, 0x16, 0xdf, 0xc2, 0xa, 0xb9
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 256, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 58928, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_blood = {
#else
lv_font_t ui_font_blood = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_BLOOD*/

