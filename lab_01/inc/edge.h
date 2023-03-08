#ifndef __EDGE_H__
#define __EDGE_H__

#include <iostream>
#include "bug.h"

struct edge {
    int src;
    int dst;
};

using edgeT = struct edge;

bugT readEdge(edgeT &curEdge, FILE *file);

edgeT getEdgeByIndex(const edgeT *list, const int index);

#endif // __EDGE_H__