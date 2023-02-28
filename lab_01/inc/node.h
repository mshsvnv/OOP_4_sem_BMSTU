#ifndef __NODE_H__
#define __NODE_H__

#include "point.h"

struct node {
    int vertex;
    pointT point;
    
    struct node *next;
};
 
using nodeT = struct node;

// loadNode
// saveNode

// allocateNode
// deleteNode

// addNode

// moveNode
// rotateNode
// scaleNode

#endif // __NODE_H__