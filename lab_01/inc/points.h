#ifndef __POINTS_H__
#define __POINTS_H__

#include "draw.h"
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

#endif // __POINTS_H__