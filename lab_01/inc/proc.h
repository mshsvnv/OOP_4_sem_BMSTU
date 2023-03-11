#ifndef __PROC_H__
#define __PROC_H__

#include "bug.h"
#include "scene.h"
#include "utils.h"
#include "file.h"

enum actT{
    LOAD,
    SAVE,
    DRAW,
    ROTATE,
    MOVE,
    SCALE,
    DELETE
};

struct proc {

    actT action;

    union {
        char fileName[MAX_NAME_LEN];

        sceneT scene;
        scaleT scale;
        movementT movement;
        rotationT rotation;
    };
};

using procT = struct proc; 

bugT performProc(procT &curProc);

#endif // __PROC_H__