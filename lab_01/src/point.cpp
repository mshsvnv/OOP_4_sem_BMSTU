#include "point.h"
#include "scene.h"

bugT readPoint(pointT &curPoint, FILE *file) {
    
    bugT rc = OK;

    pointT tempPoint;

    if (fscanf(file, "%lf %lf %lf", &tempPoint.x, &tempPoint.y, &tempPoint.z) != 3) 
        rc = POINT_ERR;
    else
        copyPoint(tempPoint, curPoint);

    return rc;
}

void convertPoint(const pointT &point3D, point2DT &point2D) {

    point2D.x = point3D.x;
    point2D.y = point3D.y;

    point2D.x += WIDTH / 2;
    point2D.y  = HEIGHT / 2 - point2D.y;
}

void copyPoint(const pointT &src, pointT &dst) {

    dst.x = src.x;
    dst.y = src.y;
    dst.z = src.z;
}

pointT getPointByIndex(const pointT *list, const int index) {
    return list[index];
}

void movePoint(pointT &curPoint, const movementT &curMovement) {
    
    curPoint.x += curMovement.dx;
    curPoint.y += curMovement.dy;
    curPoint.z += curMovement.dz;
}

void scalePoint(pointT &curPoint, const scaleT &curScale) {

    curPoint.x = curScale.keyPoint.x + (curPoint.x - curScale.keyPoint.x) * curScale.kx;
    curPoint.y = curScale.keyPoint.y + (curPoint.y - curScale.keyPoint.y) * curScale.ky;
    curPoint.z = curScale.keyPoint.z + (curPoint.z - curScale.keyPoint.z) * curScale.kz;
}