#include "draw.h"
#include "edge.h"
#include "utils.h"

void drawLines(const edgesT &curEdges, const pointsT &curPoints, sceneT &curScene) {

    for (int i = 0; i < curEdges.amount; i++) {

        edgeT tempEdge = getEdgeByIndex(curEdges.list, i);

        pointT first3D = getPointByIndex(curPoints.list, tempEdge.src);
        pointT second3D = getPointByIndex(curPoints.list, tempEdge.dst);

        point2DT first2D, second2D;

        convertPoint(first3D, first2D);
        convertPoint(second3D, second2D);

        drawLine(first2D, second2D, curScene);
    }
}

void drawLine(point2DT &firstPoint, point2DT &secondPoint, sceneT &curScene) {
    
    curScene.scene->addLine(firstPoint.x, firstPoint.y,
                            secondPoint.x, secondPoint.y, QPen(Qt::magenta));

}

