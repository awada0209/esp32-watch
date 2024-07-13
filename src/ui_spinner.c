#include "ui.h"

void ui_spinner_screen_init(void)
{
    ui_spinner = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_spinner,LV_OBJ_FLAG_SCROLLABLE);

    spinner = lv_spinner_create(lv_scr_act(),1000,60);
    lv_obj_set_size(spinner,100,100);
    lv_obj_center(spinner);
    lv_obj_set_x(spinner, 0);
    lv_obj_set_y(spinner, -4);
    lv_obj_set_align(spinner, LV_ALIGN_CENTER);
    lv_obj_clear_flag(spinner, LV_OBJ_FLAG_CLICKABLE);      /// Flags

    lv_obj_set_style_arc_color(spinner, lv_color_hex(0x1AD15C), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(spinner, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
}