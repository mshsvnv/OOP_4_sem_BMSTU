#ifndef __ACT_H__
#define __ACT_H__

#include "bug.h"
#include "scene.h"
// #include "utils.h"

#define FILE_NAME_LEN 200

enum actT{
    LOAD,
    SAVE,
    DRAW,
    ROTATE,
    MOVE,
    SCALE,
    EXIT
};

struct proc {

    actT action;

    union {
        char fileName[FILE_NAME_LEN];

        sceneT scene;
        scaleT scale;
        movementT movement;
        rotationT rotation;
    };
};

using procT = struct proc; 

bugT performProc(procT &curProc);

#endif // __ACT_H__