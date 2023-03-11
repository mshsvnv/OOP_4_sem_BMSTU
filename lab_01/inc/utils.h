#ifndef __UTILS_H__
#define __UTILS_H__

#include <iostream>

#define ZERO_SCALE 1E-8

struct keyPoint {
    double x;
    double y;
    double z;
};

using keyPointT = struct keyPoint;

struct movement {
    double dx;
    double dy;
    double dz;
};

struct rotation {
    keyPointT point;

    double oX;
    double oY;
    double oZ;
};

struct scale {
    keyPointT point;

    double kx;
    double ky;
    double kz;
};

using movementT = struct movement;
using rotationT = struct rotation;
using scaleT = struct scale;

void checkScale(scaleT &curScale);

double getRadians(const double &angle);

void initBeforeMovement(movementT &curMovement, const keyPointT &point);

void initAfterMovement(movementT &curMovement, const keyPointT &point);

#endif // __UTILS_H__