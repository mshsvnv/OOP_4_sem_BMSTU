#include "edge.h"

bugT readEdge(edgeT &curEdge, FILE *file) {
    
    bugT rc = OK;
    edgeT tempEdge;

    if (fscanf(file, "%d %d", &tempEdge.src, &tempEdge.dst) != 2 || tempEdge.src < 0 || tempEdge.dst < 0)
        rc = POINT_ERR;
    else 
        copyEdge(tempEdge, curEdge);

    return rc;
}

void copyEdge(const edgeT &src, edgeT &dst) {
    dst = src;
}

edgeT getEdgeByIndex(const edgeT *list, const int index) {
    return list[index];
}