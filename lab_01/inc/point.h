#ifndef __POINT__
#define __POINT__

#include <iostream>
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

void scalePoint(pointT &curPoint, const scaleT &curScale);

void rotatePoint(pointT &curPoint, const rotationT &curRotation);

void rotatePointX(pointT &curPoint, const pointT &keyPoint, const double &alpha);

void rotatePointY(pointT &curPoint, const pointT &keyPoint, const double &angle);

void rotatePointZ(pointT &curPoint, const pointT &keyPoint, const double &angle);

#endif //__POINT__