#ifndef __LV_8MS_UI_CB_H
#define __LV_8MS_UI_CB_H

#include "lvgl.h"

void qmsd_timer_cb(void);
#define BLOCKLY_lbl_1_EXTERNAL_EVENT_HANDLER
void qmsd_lbl_1_cb(lv_obj_t* obj,lv_event_t event);
#define BLOCKLY_slider_1_EXTERNAL_EVENT_HANDLER
void qmsd_slider_1_cb(lv_obj_t* obj,lv_event_t event);
#define BLOCKLY_arc_1_EXTERNAL_EVENT_HANDLER
void qmsd_arc_1_cb(lv_obj_t* obj,lv_event_t event);
#define BLOCKLY_switch_1_EXTERNAL_EVENT_HANDLER
void qmsd_switch_1_cb(lv_obj_t* obj,lv_event_t event);
#define BLOCKLY_msgbox_1_EXTERNAL_EVENT_HANDLER
void qmsd_msgbox_1_cb(lv_obj_t* obj,lv_event_t event);
#define BLOCKLY_button_1_EXTERNAL_EVENT_HANDLER
void qmsd_button_1_cb(lv_obj_t* obj,lv_event_t event);
#define BLOCKLY_gauge_1_EXTERNAL_EVENT_HANDLER
void qmsd_gauge_1_cb(lv_obj_t* obj,lv_event_t event);

#endif //__LV_8MS_UI_CB_H