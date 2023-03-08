#include "edge.h"

bugT readEdge(edgeT &curEdge, FILE *file) {
    
    bugT rc = OK;

    int tempSrc = 0, tempDst = 0;

    if (fscanf(file, "%d %d", &tempSrc, &tempDst) != 2 || tempSrc < 0 || tempDst < 0) {
        rc = POINT_ERR;
    }
    else {
        curEdge.src = tempSrc;
        curEdge.dst = tempDst;
    }

    return rc;
}

edgeT getEdgeByIndex(const edgeT *list, const int index) {
    return list[index];
}