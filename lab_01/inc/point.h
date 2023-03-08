#ifndef __POINT__
#define __POINT__

#include "bug.h"
#include "utils.h"

struct point2D {
    double x;
    double y;
};

using point2DT = struct point2D;

bugT readPoint(pointT &curPoint, FILE *file);

void convertPoint(const pointT &point3D, point2DT &point2D);

void copyPoint(const pointT &src, pointT &dst);

pointT getPointByIndex(const pointT *list, const int index);

void movePoint(pointT &curPoint, const movementT &curMovement);

#endif //__POINT__