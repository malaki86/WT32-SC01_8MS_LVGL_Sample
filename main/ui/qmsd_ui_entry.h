#ifndef QM_UI_ENTRY_H
#define QM_UI_ENTRY_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include "lvgl/lvgl.h"

LV_FONT_DECLARE(ali_font_16);
LV_FONT_DECLARE(ali_font_18);


/*
* declear screen_main
*/
extern lv_obj_t * screen_main;
extern lv_obj_t * lbl_1;
extern lv_obj_t * slider_1;
extern lv_obj_t * arc_1;
extern lv_obj_t * switch_1;
extern lv_obj_t * msgbox_1;
extern lv_obj_t * button_1;
extern lv_obj_t * gauge_1;
void screen_main_build(void);
void screen_main_show(void);
void screen_main_delete(void);

extern lv_obj_t * g_kb;
void qmsd_ui_entry(void);
void qmsd_ui_loop(void);
lv_obj_t *qmsd_get_screen(const char *name);
lv_obj_t *qmsd_get_widget(const char *w_name);
const char *qmsd_get_obj_name(lv_obj_t *obj);
lv_img_src_t *qmsd_get_img(const char *w_name);
int qmsd_gpio_app_init(void);
const char* qmsd_lang_trans(char* obj,const char* default_label);
void qmsd_call_ui_event_cb(const char *obj_name, lv_obj_t* obj,lv_event_t event);

void g_create_kb_ifneeded(void);
void g_show_kb(void);
#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*QM_UI_ENTRY_H*/