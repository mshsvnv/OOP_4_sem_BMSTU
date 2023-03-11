#include <iostream>
#include "proc.h"
#include "model.h"
#include "file.h"

bugT performProc(procT &curProc) {
    
    static modelT curModel = initModel();

    bugT rc = OK;

    switch(curProc.action) {
        case LOAD:
            rc = loadModel(curModel, curProc.fileName);
            break;
        case DRAW:
            rc = drawModel(curModel, curProc.scene);
            break;
        case ROTATE:
            rc = rotateModel(curModel, curProc.rotation);
            break;
        case MOVE:
            rc = moveModel(curModel, curProc.movement);
            break;
        case SCALE:
            rc = scaleModel(curModel, curProc.scale);
            break;
        case DELETE:
            deleteModel(curModel);
            break;
        default:
            rc = UNKNOWN_COMMAND;
    }

    return rc;
}




