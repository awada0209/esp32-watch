// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: s3

#include "ui.h"

void ui_timeall_screen_init(void)
{
    ui_timeall = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_timeall, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label1 = lv_label_create(ui_timeall);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, -34);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "20:32");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &ui_font_alibaba42, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_timeall);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -2);
    lv_obj_set_y(ui_Label3, 0);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "2024/07/06");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x785AC0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &ui_font_alibaba20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_timeall);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -3);
    lv_obj_set_y(ui_Label4, 35);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    //
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x2D7734), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &ui_font_Alibaba32, LV_PART_MAIN | LV_STATE_DEFAULT);

}
