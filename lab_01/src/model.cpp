#include <iostream>

#include "scene.h"
#include "model.h"
#include "draw.h"

modelT &initModel(void) {
    
    static modelT model;

    initEdges(model.edges);

    initPoints(model.points);

    return model;   
}

bugT loadModel(modelT &curModel, const char *fileName) {

    bugT rc = OK;

    modelT tempModel;

    FILE *file = fopen(fileName, "r");
    
    if (!file)
        rc = NO_INPUT_FILE;

    if (rc == OK)
        rc = readModel(tempModel, file);

    cout << rc << endl;

    if (rc == OK)
        copyModel(curModel, tempModel);
    else
        deleteModel(tempModel);

    fclose(file);

    return rc;
}

bugT readModel(modelT &curModel, FILE *file) {

    bugT rc = OK;

    rc = readEdges(curModel.edges, file);

    if (rc == OK)
        rc = readPoints(curModel.points, file);

    return rc;
}

void deleteModel(modelT &curModel) {

    deletePoints(curModel.points);

    deleteEdges(curModel.edges);
    
    return;
}

void copyModel(modelT &permModel, const modelT &tempModel) {
    permModel = tempModel;
}

void drawModel(const modelT &curModel, sceneT &curScene) {

    drawLines(curModel.edges, curModel.points, curScene);
    
    return;
}

bugT moveModel(modelT &curModel, const movementT &curMovement) {

    bugT rc = OK;

    if (curModel.edges.amount == 0)
        rc = NO_MODEL;
    else {
        movePoints(curModel.points, curMovement);
    }

    return rc;
}

bugT scaleModel(modelT &curModel, const scaleT &curScale) {
    
    bugT rc = OK;

    if (curModel.edges.amount == 0)
        rc = NO_MODEL;
    else {
        scalePoints(curModel.points, curScale);
    }

    return rc;
}

bugT rotateModel(modelT &curModel, const rotationT &curRotation) {

    bugT rc = OK;

    if (curModel.edges.amount == 0)
        rc = NO_MODEL;
    else {
        rotatePoints(curModel.points, curRotation);
    }

    return rc;
}
