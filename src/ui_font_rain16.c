/*******************************************************************************
 * Size: 16 px
 * Bpp: 8
 * Opts: --bpp 8 --size 16 --font D:/LVGL/assets/iconfont.ttf -o D:/LVGL/assets\ui_font_rain16.c --format lvgl -r 0xe60f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_RAIN16
#define UI_FONT_RAIN16 1
#endif

#if UI_FONT_RAIN16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E60F "" */
    0x0, 0x0, 0x0, 0x7, 0x68, 0xb1, 0xba, 0x85,
    0x1a, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x12, 0xcc, 0xff, 0xff, 0xff, 0xff,
    0xee, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xa9, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe9, 0xc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x16, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x86, 0x38, 0xd, 0x0, 0x0, 0x0,
    0x0, 0x3a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf3, 0x74, 0x0, 0x0,
    0x0, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x64, 0x0,
    0x17, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x0,
    0x63, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd,
    0x6a, 0xff, 0xff, 0xff, 0xee, 0xff, 0xff, 0xff,
    0x7d, 0xd, 0xb, 0xe9, 0xff, 0xff, 0xfa, 0x3,
    0x2a, 0xff, 0xff, 0xff, 0x14, 0x16, 0x1f, 0x69,
    0x1, 0x0, 0x0, 0xe7, 0xff, 0xff, 0xaa, 0x0,
    0x0, 0x88, 0xff, 0xff, 0x2, 0x4a, 0x41, 0xfb,
    0x83, 0x0, 0x55, 0xe7, 0xff, 0xdf, 0x1a, 0x0,
    0x0, 0x0, 0x53, 0xaa, 0x95, 0xff, 0xbc, 0xc0,
    0xc0, 0x94, 0xff, 0x6a, 0x7f, 0x12, 0x0, 0x0,
    0x0, 0x0, 0x28, 0x0, 0xa6, 0xee, 0x9, 0x1c,
    0xc, 0x21, 0xfd, 0x41, 0x2, 0x27, 0x0, 0x0,
    0x0, 0x3a, 0xf1, 0x16, 0x6, 0x11, 0x0, 0xb5,
    0x8c, 0x0, 0x15, 0x0, 0x69, 0xd7, 0x1, 0x0,
    0x0, 0x79, 0xff, 0x48, 0x0, 0x0, 0x1, 0xf4,
    0xcc, 0x0, 0x0, 0x0, 0xa8, 0xfe, 0x19, 0x0,
    0x0, 0xb, 0x4e, 0x2, 0x0, 0x0, 0x0, 0x35,
    0x26, 0x0, 0x0, 0x0, 0x1a, 0x41, 0x0, 0x0
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
        .range_start = 58895, .range_length = 1, .glyph_id_start = 1,
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
    .bpp = 8,
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
const lv_font_t ui_font_rain16 = {
#else
lv_font_t ui_font_rain16 = {
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



#endif /*#if UI_FONT_RAIN16*/

