#include <iostream>
#include "points.h"
#include "point.h"

void initPoints(pointsT &curPoints) {
    
    curPoints.amount = 0;
    curPoints.list = nullptr;
}

void deletePoints(pointsT &curPoints) {

    if (curPoints.list != nullptr) 
        delete [] curPoints.list;

    initPoints(curPoints);
}

bugT readPoints(pointsT &curPoints, FILE *file) {
    
    bugT rc = OK;

    rc = readAmountPoints(curPoints.amount, file);

    if (rc == OK) 
        rc = allocatePoints(curPoints);

    if (rc == OK)
        rc = readAllPoints(curPoints, file);

    if (rc != OK)
        deletePoints(curPoints);

    return rc;
}

bugT readAmountPoints(int &amount, FILE *file) {

    bugT rc = OK;

    int temp = 0;

    if (fscanf(file, "%d", &temp) != 1 || temp <= 0) 
        rc = POINTS_AMOUNT;
    else    
        amount = temp;
    
    return rc;
}

bugT allocatePoints(pointsT &curPoints) {

    bugT rc = OK;

    pointT *buffer = new pointT[curPoints.amount];

    if (buffer == nullptr) 
        rc = MEMORY_ERR;
    else    
        curPoints.list = buffer;
    
    return rc;
}

bugT readAllPoints(pointsT &curPoints, FILE *file) {

    bugT rc = OK;
    
    for (int i = 0; i < curPoints.amount; i++) {

        rc = readPoint(curPoints.list[i], file);

        if (rc != OK)
            break;
    }

    return rc;
}

void movePoints(pointsT &curPoints, const movementT &curMovement) {

    for (int i = 0; i < curPoints.amount; i++)
        movePoint(curPoints.list[i], curMovement);
}

void scalePoints(pointsT &curPoints, const scaleT &curScale) {

    for (int i = 0; i < curPoints.amount; i++)
        scalePoint(curPoints.list[i], curScale);
}

void rotatePoints(pointsT &curPoints, const rotationT &curRotation) {

    for (int i = 0; i < curPoints.amount; i++)
        rotatePoint(curPoints.list[i], curRotation);
}