#ifndef __MODEL_H__
#define __MODEL_H__

#include "point.h"
#include "node.h"

struct model {
    int numVertices;
    nodeT **vertices;
};

using modelT = struct model;

// loadModel
// saveModel

// allocateModel
// deleteModel

// moveModel
// rotateModel
// scaleModel

#endif // __MODEL_H__