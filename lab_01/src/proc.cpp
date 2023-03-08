#include <iostream>
#include "proc.h"

#include "model.h"

bugT performProc(procT &curProc) {
    
    static modelT curModel = initModel();

    bugT rc = OK;

    switch(curProc.action) {
        case LOAD:
            rc = loadModel(curModel, curProc.fileName);
            break;
        // case SAVE:
        //     break;
        case DRAW:
            drawModel(curModel, curProc.scene);
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
        // case EXIT:
        //     break;
        default:
            rc = UNKNOWN_COMMAND;
    }

    return rc;
}




