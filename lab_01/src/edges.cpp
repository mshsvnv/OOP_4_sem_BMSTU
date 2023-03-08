#include <iostream>

#include "edges.h"

void initEdges(edgesT &curEdges) {
    
    curEdges.amount = 0;
    curEdges.list = nullptr;
}

void deleteEdges(edgesT &curEdges) {

    if (curEdges.list != nullptr) {
        std::cout << "here" << std::endl;
        delete curEdges.list;
    }

    initEdges(curEdges);
}

bugT readEdges(edgesT &curEdges, FILE *file) {
    
    bugT rc = OK;

    rc = readAmountEdges(curEdges.amount, file);

    if (rc == OK)
        rc = allocateEdges(curEdges);

    if (rc == OK) 
        rc = readAllEdges(curEdges, file);

    if (rc != OK)
        deleteEdges(curEdges);

    return rc;
}

bugT readAmountEdges(int &amount, FILE *file) {

    bugT rc = OK;

    int temp = 0;

    if (fscanf(file, "%d", &temp) != 1 || temp <= 0)
        rc = EDGES_AMOUNT;
    else
        amount = temp;

    return rc;
}

bugT allocateEdges(edgesT &curEdges) {

    bugT rc = OK;

    edgeT *buffer = new edgeT[curEdges.amount];

    if (buffer == nullptr)
        rc = MEMORY_ERR;
    else
        curEdges.list = buffer;

    return rc;
}

bugT readAllEdges(edgesT &curEdges, FILE *file) {

    bugT rc = OK;

    for (int i = 0; i < curEdges.amount; i++) {

        rc = readEdge(curEdges.list[i], file);

        if (rc != OK)
            break;
    }

    return rc;
}
