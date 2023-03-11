#include "point.h"
#include "scene.h"
#include "math.h"

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
    dst = src;
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

    curPoint.x = curPoint.x * curScale.kx;
    curPoint.y = curPoint.y * curScale.ky;
    curPoint.z = curPoint.z * curScale.kz;
}

void rotatePoint(pointT &curPoint, const rotationT &curRotation) {

    rotatePointX(curPoint, curRotation.oX);
    rotatePointY(curPoint, curRotation.oY);
    rotatePointZ(curPoint, curRotation.oZ);
}

void rotatePointX(pointT &curPoint, const double &angle) {

    pointT oldPoint;
    double alpha = getRadians(angle);

    copyPoint(curPoint, oldPoint);

    double sinT = sin(alpha);
    double cosT = cos(alpha);

    curPoint.y = oldPoint.y * cosT + oldPoint.z * sinT;
    curPoint.z = -oldPoint.y * sinT + oldPoint.z * cosT;
}

void rotatePointY(pointT &curPoint, const double &angle) {

    pointT oldPoint;
    double alpha = getRadians(angle);

    copyPoint(curPoint, oldPoint);

    double sinT = sin(alpha);
    double cosT = cos(alpha);

    curPoint.x = oldPoint.x * cosT + oldPoint.z * sinT;
    curPoint.z = -oldPoint.x * sinT + oldPoint.z * cosT;
}

void rotatePointZ(pointT &curPoint, const double &angle) {

    pointT oldPoint;
    double alpha = getRadians(angle);

    copyPoint(curPoint, oldPoint);

    double sinT = sin(alpha);
    double cosT = cos(alpha);

    curPoint.x = oldPoint.x * cosT + oldPoint.y * sinT;
    curPoint.y = -oldPoint.x * sinT + oldPoint.y * cosT;
}