#ifndef __EDGES_H__ 
#define __EDGES_H__

#include "edge.h"
#include "bug.h"

struct edges {
    int amount;
    edgeT *list;
};

using edgesT = struct edges;

void initEdges(edgesT &curEdges);

void deleteEdges(edgesT &curEdges);

bugT readEdges(edgesT &curEdges, FILE *file);

bugT readAmountEdges(int &amount, FILE *file);

bugT allocateEdges(edgesT &curEdges);

bugT readAllEdges(edgesT &curEdges, FILE *file);

#endif // __EDGES_H__ 