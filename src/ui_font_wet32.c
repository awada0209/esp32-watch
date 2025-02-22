/*******************************************************************************
 * Size: 32 px
 * Bpp: 4
 * Opts: --bpp 4 --size 32 --font D:/LVGL/assets/iconfont.ttf -o D:/LVGL/assets\ui_font_wet32.c --format lvgl -r 0xe60a --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_WET32
#define UI_FONT_WET32 1
#endif

#if UI_FONT_WET32

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E60A "" */
    0x0, 0x0, 0x0, 0x0, 0x5, 0xb1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6f, 0xfd, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xff, 0xef, 0xd1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xf6, 0xc,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xef, 0x70, 0x1, 0xdf, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xc, 0xf9, 0x0, 0x0, 0x1e, 0xf6, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xc0,
    0x0, 0x0, 0x3, 0xff, 0x20, 0x0, 0x41, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0x20, 0x0, 0x0,
    0x0, 0x7f, 0x70, 0x5, 0xfd, 0x10, 0x0, 0x0,
    0x0, 0xc, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x3,
    0x0, 0x4f, 0xff, 0xd1, 0x0, 0x0, 0x0, 0x5f,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff,
    0x5a, 0xfc, 0x0, 0x0, 0x0, 0xdf, 0x50, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xf6, 0x0, 0xcf,
    0x80, 0x0, 0x4, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8f, 0xa0, 0x0, 0x1e, 0xf3, 0x0,
    0xa, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xfe, 0x10, 0x0, 0x5, 0xfc, 0x0, 0xf, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xf6, 0x0,
    0x0, 0x0, 0xcf, 0x40, 0x3f, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0,
    0x5f, 0xa0, 0x6f, 0x70, 0x45, 0x0, 0x0, 0x0,
    0x0, 0x4f, 0x90, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x8f, 0x50, 0xef, 0x0, 0x0, 0x0, 0x0, 0x8f,
    0x50, 0xea, 0x0, 0x0, 0xc, 0xf2, 0x9f, 0x40,
    0xfd, 0x0, 0x0, 0x0, 0x0, 0x9f, 0x42, 0xfb,
    0x0, 0x0, 0xa, 0xf3, 0x9f, 0x40, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0x50, 0xff, 0x40, 0x0,
    0xb, 0xf2, 0x7f, 0x60, 0xcf, 0x40, 0x0, 0x0,
    0x0, 0x5f, 0xa0, 0x6f, 0xff, 0x40, 0x1f, 0xf0,
    0x4f, 0xa0, 0x5f, 0xd1, 0x0, 0x0, 0x0, 0xe,
    0xf3, 0x5, 0xcd, 0x30, 0xaf, 0x90, 0xe, 0xf2,
    0xb, 0xfd, 0x50, 0x0, 0x0, 0x5, 0xff, 0x60,
    0x0, 0x2a, 0xfe, 0x10, 0x7, 0xfb, 0x0, 0xaf,
    0xff, 0xfe, 0x0, 0x0, 0x6f, 0xff, 0xcd, 0xff,
    0xd2, 0x0, 0x0, 0xcf, 0x90, 0x4, 0xbd, 0xeb,
    0x0, 0x0, 0x3, 0xaf, 0xff, 0xe7, 0x0, 0x0,
    0x0, 0x1e, 0xfb, 0x10, 0x0, 0x0, 0x0, 0x29,
    0x30, 0x0, 0x10, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xdf, 0xf8, 0x41, 0x1, 0x4a, 0xff, 0x70, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0xff,
    0xff, 0xff, 0xff, 0xe6, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x16, 0xac, 0xdc,
    0x95, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 512, .box_w = 28, .box_h = 28, .ofs_x = 2, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 58890, .range_length = 1, .glyph_id_start = 1,
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
const lv_font_t ui_font_wet32 = {
#else
lv_font_t ui_font_wet32 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 28,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_WET32*/

