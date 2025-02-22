/*******************************************************************************
 * Size: 16 px
 * Bpp: 8
 * Opts: --bpp 8 --size 16 --font D:/LVGL/assets/iconfont.ttf -o D:/LVGL/assets\ui_font_icfont16.c --format lvgl -r 0xe626 --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_ICFONT16
#define UI_FONT_ICFONT16 1
#endif

#if UI_FONT_ICFONT16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E626 "" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x23,
    0x7e, 0xc7, 0xd5, 0xd2, 0xc2, 0x88, 0x1f, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5,
    0x81, 0xd4, 0x6f, 0x17, 0x0, 0x0, 0x7, 0x41,
    0xa6, 0x85, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xab, 0x9b, 0x8, 0x0, 0x0, 0x0, 0x14,
    0x0, 0x0, 0x0, 0x48, 0xa0, 0x3, 0x0, 0x0,
    0x0, 0x0, 0x86, 0x99, 0x0, 0x0, 0x0, 0x0,
    0x17, 0x87, 0x0, 0x0, 0x0, 0x0, 0x32, 0x80,
    0x0, 0x0, 0x0, 0x20, 0xcf, 0x6, 0x0, 0x0,
    0x0, 0x0, 0x18, 0x88, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6a, 0x1f, 0x0, 0x0, 0x81, 0x68, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x18, 0x88, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xa, 0x79, 0x0, 0x0, 0xc9,
    0x13, 0x0, 0x0, 0x0, 0x0, 0x0, 0x18, 0x88,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x76, 0x0,
    0x0, 0xd7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x18, 0x93, 0x18, 0x18, 0x18, 0x18, 0xa, 0x0,
    0x75, 0x0, 0x0, 0xd6, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0x89, 0x8c, 0x8c, 0x8c, 0x8c,
    0x51, 0x0, 0x6e, 0x0, 0x0, 0xc7, 0xb, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6c, 0x0, 0x0, 0x8b,
    0x51, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x65, 0x0,
    0x0, 0x20, 0xbb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4d,
    0x29, 0x0, 0x0, 0x0, 0x8b, 0x70, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x19, 0x72, 0x0, 0x0, 0x0, 0x0, 0x3, 0xae,
    0x66, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x22, 0x81, 0x6, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0x86, 0xac, 0x3a, 0x0, 0x0, 0x0,
    0x0, 0x13, 0x70, 0x7c, 0x5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x25, 0x89, 0xaf,
    0xac, 0xa2, 0xa3, 0x85, 0x27, 0x0, 0x0, 0x0,
    0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 256, .box_w = 18, .box_h = 17, .ofs_x = -1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 58918, .range_length = 1, .glyph_id_start = 1,
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
const lv_font_t ui_font_icfont16 = {
#else
lv_font_t ui_font_icfont16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_ICFONT16*/

