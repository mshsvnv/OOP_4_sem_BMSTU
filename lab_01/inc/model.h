#ifndef __MODEL_H__
#define __MODEL_H__

#include <iostream>
using namespace std;

#include "points.h"
#include "edges.h"
#include "bug.h"

struct model {
    pointsT points;
    edgesT edges;  
};

using modelT = struct model;

modelT &initModel(void);

bugT loadModel(modelT &model, const char *fileName);

bugT readModel(modelT &model, FILE *file);

void deleteModel(modelT &model);

void copyModel(modelT &permModel, const modelT &tempModel);

void drawModel(const modelT &curModel, sceneT &curScene);

bugT moveModel(modelT &curModel, const movementT &curMovemnet);

bugT scaleModel(modelT &curModel, const scaleT &curScale);

#endif // __MODEL_H__