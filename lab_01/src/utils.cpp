#include "utils.h"
#include "math.h"

void checkScale(scaleT &curScale) {

    if (abs(curScale.kx - 0) < ZERO_SCALE) 
        curScale.kx = ZERO_SCALE;

    if (abs(curScale.ky - 0) < ZERO_SCALE) 
        curScale.ky = ZERO_SCALE;

    if (abs(curScale.kz - 0) < ZERO_SCALE) 
        curScale.kz = ZERO_SCALE;
}