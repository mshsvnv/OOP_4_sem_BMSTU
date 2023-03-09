#ifndef __UTILS_H__
#define __UTILS_H__

#include <iostream>

#define ZERO_SCALE 1E-8

struct point {
    double x;
    double y;
    double z;
};

using pointT = struct point;

struct movement {
    double dx;
    double dy;
    double dz;
};

struct rotation {
    pointT keyPoint;

    double oX;
    double oY;
    double oZ;
};

struct scale {
    pointT keyPoint;

    double kx;
    double ky;
    double kz;
};

using movementT = struct movement;
using rotationT = struct rotation;
using scaleT = struct scale;

void checkScale(scaleT &curScale);

double getRadians(const double &angle);

long fileSize(FILE *file);

#endif // __UTILS_H__