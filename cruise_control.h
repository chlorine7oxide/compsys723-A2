#ifndef CRUISE_H
#define CRUISE_H

#include <stdbool.h>

float saturateThrottle(float throttleIn, bool* saturate);
float regulateThrottle(int isGoingOn, float cruiseSpeed, float vehicleSpeed);

#endif