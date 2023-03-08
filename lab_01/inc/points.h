#ifndef __POINTS_H__
#define __POINTS_H__

#include "utils.h"
#include "bug.h"

struct points {
    int amount;
    pointT *list;
};

using pointsT = struct points;

void initPoints(pointsT &curPoints);

void deletePoints(pointsT &curPoints);

bugT readPoints(pointsT &curPoints, FILE *file);

bugT readAmountPoints(int &amount, FILE *file);

bugT allocatePoints(pointsT &curPoints);

bugT readAllPoints(pointsT &curPoints, FILE *file);

void movePoints(pointsT &curPoints, const movementT &curMovement);

void scalePoints(pointsT &curPoints, const scaleT &curScale);

void rotatePoints(pointsT &curPoints, const rotationT &curScale);

#endif // __POINTS_H__