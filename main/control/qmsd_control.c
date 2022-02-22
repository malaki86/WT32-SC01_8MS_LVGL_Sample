#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lvgl.h"

int qmsd_ctrl_event_send(int32_t event_id, void *event_data, size_t event_data_size, int32_t ticks_to_wait)
{
    return 0;
}

int qmsd_ctrl_event_isr_send(int32_t event_id, void *event_data, size_t event_data_size, void *task_unblocked)
{
    return 0;
}

void qmsd_control_init(void)
{

}
