#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_main;
lv_obj_t* lbl_1;
lv_obj_t* slider_1;
lv_obj_t* arc_1;
lv_obj_t* switch_1;
lv_obj_t* msgbox_1;
lv_obj_t* button_1;
lv_obj_t* gauge_1;


    void qmsd_lbl_1_create()
{
	lbl_1 = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lbl_1,LV_LABEL_LONG_BREAK);
	lv_obj_set_size(lbl_1, 393, 40);
//set label style
	lv_obj_set_style_local_bg_color(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x4a, 0x90, 0xe2));
	lv_obj_set_style_local_bg_opa(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,255);
	lv_obj_set_style_local_radius(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,10);
	lv_obj_set_style_local_border_color(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x00, 0x00, 0x00));
	lv_obj_set_style_local_border_width(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,4);
	lv_obj_set_style_local_text_font(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_18);

	lv_label_set_text(lbl_1, "Hello world!");
	lv_label_set_align(lbl_1, LV_LABEL_ALIGN_CENTER);
#ifdef BLOCKLY_lbl_1_EVENT_HANDLER
	lv_obj_set_event_cb(lbl_1, __qmsd_lbl_1_cb);
#endif
	if(lbl_1->coords.x2-lbl_1->coords.x1<393)
	{
		int x_offset=(393-(lbl_1->coords.x2-lbl_1->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lbl_1->coords.y2-lbl_1->coords.y1<40)
	{
		int y_offset=(40-(lbl_1->coords.y2-lbl_1->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lbl_1,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	    lv_obj_set_pos(lbl_1, 43, 12);

}
    void qmsd_slider_1_create()
{
	slider_1 = lv_slider_create(screen_main, NULL);
	lv_obj_set_size(slider_1, 185, 28);
    lv_obj_set_pos(slider_1, 17, 65);
	lv_slider_set_value(slider_1, 0, LV_ANIM_OFF);
	lv_obj_t * slider_1_label = lv_label_create(screen_main, NULL);
	lv_label_set_text(slider_1_label, "Slider");
	lv_obj_align(slider_1_label, slider_1, LV_ALIGN_OUT_LEFT_MID, -30, 0);
	
	//lv_obj_add_style(slider_1_label, LV_LABEL_PART_MAIN, &style_label_slider_1_label);

	//set slider bg style
	lv_obj_set_style_local_bg_color(slider_1,LV_SLIDER_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xd4, 0xd7, 0xd9));
	lv_obj_set_style_local_bg_grad_color(slider_1,LV_SLIDER_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xd4, 0xd7, 0xd9));
	lv_obj_set_style_local_border_color(slider_1,LV_SLIDER_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xd4, 0xd7, 0xd9));
	lv_obj_set_style_local_radius(slider_1,LV_SLIDER_PART_BG,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);

	//set slider indic style
    lv_obj_set_style_local_bg_color(slider_1,LV_SLIDER_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xd4, 0xd7, 0xd9));
	lv_obj_set_style_local_bg_grad_color(slider_1,LV_SLIDER_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xd4, 0xd7, 0xd9));
	lv_obj_set_style_local_radius(slider_1,LV_SLIDER_PART_INDIC,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);
    lv_obj_set_style_local_shadow_color(slider_1,LV_SLIDER_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xd4, 0xd7, 0xd9));
	lv_obj_set_style_local_shadow_width(slider_1,LV_SLIDER_PART_INDIC,LV_STATE_DEFAULT,5);

	//set slider knob style
    lv_obj_set_style_local_bg_color(slider_1,LV_SLIDER_PART_KNOB,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x01, 0xa2, 0xb1));
	lv_obj_set_style_local_bg_grad_color(slider_1,LV_SLIDER_PART_KNOB,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x01, 0xa2, 0xb1));
	lv_obj_set_style_local_radius(slider_1,LV_SLIDER_PART_KNOB,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);
    lv_obj_set_style_local_bg_opa(slider_1,LV_SLIDER_PART_KNOB,LV_STATE_DEFAULT,LV_OPA_70);

	lv_obj_set_style_local_outline_width(slider_1,LV_SLIDER_PART_BG,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_outline_width(slider_1,LV_SLIDER_PART_BG,LV_STATE_FOCUSED,0);
#ifdef BLOCKLY_slider_1_EVENT_HANDLER
	lv_obj_set_event_cb(slider_1, __qmsd_slider_1_cb);
#endif
}
    void qmsd_arc_1_create()
{
    arc_1 = lv_arc_create(screen_main, NULL);
    lv_obj_set_size(arc_1, 100, 100);
    lv_obj_set_pos(arc_1, 59, 106);
    //set indic style
    lv_obj_set_style_local_line_color(arc_1,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x01, 0xa2, 0xb1));
    lv_obj_set_style_local_line_width(arc_1,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,10);
    //set main part style
    lv_obj_set_style_local_line_color(arc_1,LV_ARC_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xD4, 0xD7, 0xD9));
    lv_obj_set_style_local_line_width(arc_1,LV_ARC_PART_BG,LV_STATE_DEFAULT,10);
    lv_obj_set_style_local_bg_color(arc_1,LV_ARC_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xFF, 0xFF, 0xFF));
    lv_obj_set_style_local_pad_all(arc_1,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_bg_opa(arc_1,LV_ARC_PART_BG,LV_STATE_DEFAULT,255);

    lv_arc_set_bg_angles(arc_1, 149, 398);
    lv_arc_set_angles(arc_1, 149, 398);
}
    void qmsd_switch_1_create()
{
    switch_1 = lv_switch_create(screen_main, NULL);
    lv_obj_set_size(switch_1, 100, 40);
    lv_obj_set_pos(switch_1, 240, 65);
    if(0 == 0) {
    lv_switch_off(switch_1, LV_ANIM_OFF);
    } else {
    lv_switch_on(switch_1, LV_ANIM_OFF);
    }
    //set switch bg style
    lv_obj_set_style_local_bg_color(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xd4, 0xd7, 0xd9));
    lv_obj_set_style_local_bg_grad_color(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xd4, 0xd7, 0xd9));
    lv_obj_set_style_local_pad_top(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_bottom(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_left(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_right(switch_1,LV_SWITCH_PART_BG,LV_STATE_DEFAULT,0);
    //set switch indic style
    lv_obj_set_style_local_bg_color(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_bg_grad_color(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_radius(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);
    lv_obj_set_style_local_pad_top(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_bottom(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_left(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_pad_right(switch_1,LV_SWITCH_PART_INDIC,LV_STATE_DEFAULT,0);
    //set switch knob style
    lv_obj_set_style_local_radius(switch_1,LV_SWITCH_PART_KNOB,LV_STATE_DEFAULT,LV_RADIUS_CIRCLE);
#ifdef BLOCKLY_switch_1_EVENT_HANDLER
    lv_obj_set_event_cb(switch_1, __qmsd_switch_1_cb);
#endif
}
    static void mbox_msgbox_1_event_cb(lv_obj_t *obj, lv_event_t evt)
{
    if(evt == LV_EVENT_DELETE ) {
        lv_obj_del_async(lv_obj_get_parent(obj));
        obj = NULL; 
    } else if(evt == LV_EVENT_VALUE_CHANGED) {
        lv_msgbox_start_auto_close(obj, 0);
    }
}
void qmsd_msgbox_1_create()
{
    msgbox_1 = lv_msgbox_create(screen_main, NULL);
    lv_msgbox_set_text(msgbox_1, "This is a message box");
    static const char * msgbox_1_btns[] ={
"Ok",
"Cancel",
""};
    lv_msgbox_add_btns(msgbox_1, msgbox_1_btns);
    lv_obj_align(msgbox_1, NULL, LV_ALIGN_CENTER, 0, 0);

/*
设置字体颜色
*/

    lv_obj_set_style_local_text_color(msgbox_1,LV_MSGBOX_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x42, 0x45, 0x49));
    lv_obj_set_style_local_text_color(msgbox_1,LV_MSGBOX_PART_BTN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x42, 0x45, 0x49));
    lv_obj_set_style_local_text_color(msgbox_1,LV_MSGBOX_PART_BTN_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x42, 0x45, 0x49));
    lv_obj_set_style_local_text_font(msgbox_1,LV_MSGBOX_PART_BG,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_style_local_text_font(msgbox_1,LV_MSGBOX_PART_BTN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_style_local_text_font(msgbox_1,LV_MSGBOX_PART_BTN_BG,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_style_local_bg_color(msgbox_1,LV_MSGBOX_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x9b, 0x9b, 0x9b));
    lv_obj_set_style_local_bg_color(msgbox_1,LV_MSGBOX_PART_BTN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x9b, 0x9b, 0x9b));
    lv_obj_set_style_local_bg_color(msgbox_1,LV_MSGBOX_PART_BTN_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x9b, 0x9b, 0x9b));

/**
结束设置字体颜色
*/

    lv_obj_set_event_cb(msgbox_1, mbox_msgbox_1_event_cb);
#ifdef BLOCKLY_msgbox_1_EVENT_HANDLER
    lv_obj_set_event_cb(msgbox_1, __qmsd_msgbox_1_cb);
#endif
}
    void qmsd_button_1_create()
{
    button_1 = lv_btn_create(screen_main, NULL);
    lv_obj_t * button_1_label;
    button_1_label = lv_label_create(button_1, NULL);
    lv_label_set_text(button_1_label, qmsd_lang_trans("button_1","Push Me"));
    lv_obj_set_style_local_text_font(button_1_label,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
    lv_obj_set_size(button_1, 100, 40);
    lv_obj_set_pos(button_1, 340, 247);
#ifdef BLOCKLY_button_1_EVENT_HANDLER
    lv_obj_set_event_cb(button_1, __qmsd_button_1_cb);
#endif


    static lv_style_t _sty_button_1;
    lv_style_init(&_sty_button_1);
//设置正常样式
    //color part
//radius part
//opa part
//border part
//padding part
//text part
lv_style_set_text_color(&_sty_button_1,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x31, 0x40, 0x4f));
//image style
//line style

//设置正常样式结束

//设置按下样式
    //color part
lv_style_set_bg_color(&_sty_button_1,LV_STATE_PRESSED,LV_COLOR_MAKE(0x01, 0xa2, 0xb1));
//radius part
//opa part
//border part
//padding part
//text part
lv_style_set_text_color(&_sty_button_1,LV_STATE_PRESSED,LV_COLOR_MAKE(0x31, 0x40, 0x4f));
//image style
//line style

//设置按下样式结束

//设置禁用样式
    //color part
//radius part
//opa part
//border part
//padding part
//text part
lv_style_set_text_color(&_sty_button_1,LV_STATE_DISABLED,LV_COLOR_MAKE(0x88, 0x88, 0x88));
//image style
//line style

//设置禁用样式结束
    lv_obj_add_style(button_1, LV_BTN_PART_MAIN, &_sty_button_1);
    lv_obj_set_style_local_outline_width(button_1,LV_BTN_PART_MAIN,LV_STATE_DEFAULT,0);
	lv_obj_set_style_local_outline_width(button_1,LV_BTN_PART_MAIN,LV_STATE_FOCUSED,0);
}
    void qmsd_gauge_1_create()
{
    gauge_1 = lv_gauge_create(screen_main, NULL);
    lv_obj_set_size(gauge_1, 100, 100);
    lv_obj_set_pos(gauge_1, 340, 120);
    static lv_color_t gauge_1_needle_colors[] = {LV_COLOR_MAKE(0x46, 0x4b, 0x5b)};
    lv_gauge_set_needle_count(gauge_1, 1, gauge_1_needle_colors);
    
    //set main part style
	lv_obj_set_style_local_scale_end_color(gauge_1,LV_GAUGE_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x01, 0xa2, 0xb1));
    lv_obj_set_style_local_text_color(gauge_1,LV_GAUGE_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x88, 0x88, 0x88));
    lv_obj_set_style_local_line_color(gauge_1,LV_GAUGE_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x88, 0x88, 0x88));
    lv_obj_set_style_local_bg_color(gauge_1,LV_GAUGE_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_bg_opa(gauge_1,LV_GAUGE_PART_MAIN,LV_STATE_DEFAULT,255);
    lv_obj_set_style_local_line_width(gauge_1,LV_GAUGE_PART_MAIN,LV_STATE_DEFAULT,3);
    lv_obj_set_style_local_pad_left(gauge_1,LV_GAUGE_PART_MAIN,LV_STATE_DEFAULT,10);
    lv_obj_set_style_local_pad_inner(gauge_1,LV_GAUGE_PART_MAIN,LV_STATE_DEFAULT,8);
    //set major part style
    lv_obj_set_style_local_scale_end_color(gauge_1,LV_GAUGE_PART_MAJOR,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x01, 0xa2, 0xb1));
    lv_obj_set_style_local_text_color(gauge_1,LV_GAUGE_PART_MAJOR,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x88, 0x88, 0x88));
    lv_obj_set_style_local_line_color(gauge_1,LV_GAUGE_PART_MAJOR,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x88, 0x88, 0x88));
    lv_obj_set_style_local_bg_color(gauge_1,LV_GAUGE_PART_MAJOR,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));
    lv_obj_set_style_local_bg_opa(gauge_1,LV_GAUGE_PART_MAJOR,LV_STATE_DEFAULT,255);
    lv_obj_set_style_local_line_width(gauge_1,LV_GAUGE_PART_MAJOR,LV_STATE_DEFAULT,3);
    lv_obj_set_style_local_pad_left(gauge_1,LV_GAUGE_PART_MAJOR,LV_STATE_DEFAULT,10);
    lv_obj_set_style_local_pad_inner(gauge_1,LV_GAUGE_PART_MAJOR,LV_STATE_DEFAULT,8);
    //set needle style
    lv_obj_set_style_local_bg_color(gauge_1,LV_GAUGE_PART_NEEDLE,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x46, 0x4b, 0x5b));

    lv_gauge_set_range(gauge_1, 0, 100);
    lv_gauge_set_critical_value(gauge_1, 80);
    lv_gauge_set_value(gauge_1, 0, 0);
}

void screen_main_build(void)
{
    if(screen_main) return;
    screen_main = lv_obj_create(NULL, NULL);
    lv_obj_set_style_local_bg_color(screen_main,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xd0, 0x02, 0x1b));

    qmsd_lbl_1_create();
    qmsd_slider_1_create();
    qmsd_arc_1_create();
    qmsd_switch_1_create();
    qmsd_msgbox_1_create();
    qmsd_button_1_create();
    qmsd_gauge_1_create();
}

void screen_main_show(void)
{
    if(!screen_main)
    {
        screen_main_build();
    }
#ifdef BLOCKLY_screen_main_SCREEN_INIT
    __qmsd_screen_main_init();
#endif
    lv_scr_load(screen_main);
}

void screen_main_delete(void)
{
    if(screen_main)
    {
        lv_obj_del(screen_main);
        screen_main = NULL;
    }
}
