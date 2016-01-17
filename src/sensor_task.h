#pragma once

#include <chevents.h>

extern event_source_t g_sensor_data_event;

// Values are in milli-g.
void sensors_get_accel(int *x, int *y, int *z);

void sensors_start();
