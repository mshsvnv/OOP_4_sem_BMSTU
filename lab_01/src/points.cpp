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

    for (int i = 0; i < curPoints.amount; i++) {
        
        pointT curPoint;

        curPoint = getPointByIndex(curPoints.list, i);

        movePoint(curPoint, curMovement);
    }
}

void scalePoints(pointsT &curPoints, const scaleT &curScale) {

    movementT beforeMovement;
    movementT afterMovement;

    initBeforeMovement(beforeMovement, curScale.point);
    initAfterMovement(afterMovement, curScale.point);

    for (int i = 0; i < curPoints.amount; i++) {
        
        pointT curPoint;

        curPoint = getPointByIndex(curPoints.list, i);

        movePoint(curPoint, beforeMovement);
        scalePoint(curPoint, curScale);
        movePoint(curPoint, afterMovement);
    }
}

void rotatePoints(pointsT &curPoints, const rotationT &curRotation) {

    movementT beforeMovement;
    movementT afterMovement;

    initBeforeMovement(beforeMovement, curRotation.point);
    initAfterMovement(afterMovement, curRotation.point);

    for (int i = 0; i < curPoints.amount; i++) {
        
        pointT curPoint;

        curPoint = getPointByIndex(curPoints.list, i);

        movePoint(curPoint, beforeMovement);
        rotatePoint(curPoints.list[i], curRotation);
        movePoint(curPoint, afterMovement);
    }
}