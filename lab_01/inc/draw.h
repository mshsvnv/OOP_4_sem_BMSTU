#ifndef __DRAW_H__
#define __DRAW_H__

#include "point.h"
#include "points.h"
#include "edges.h"
#include "scene.h"

void drawLines(const edgesT &curEdges, const pointsT &curPoints, sceneT &curScene);

void drawLine(point2DT &firstPoint, point2DT &secondPoint, sceneT &curScene);

#endif // __DRAW_H__