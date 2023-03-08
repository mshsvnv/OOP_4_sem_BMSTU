#ifndef __UTILS_H__
#define __UTILS_H__

#define ZERO_SCALE 1E-8

struct point {
    double x;
    double y;
    double z;
};

using pointT = struct point;

struct move {
    double dx;
    double dy;
    double dz;
};

struct rotate {
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

using movementT = struct move;
using rotationT = struct rotate;
using scaleT = struct scale;

void checkScale(scaleT &curScale);

#endif // __UTILS_H__