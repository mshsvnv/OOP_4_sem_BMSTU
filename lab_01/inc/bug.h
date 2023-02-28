#ifndef __BUG_H__
#define __BUG_H__

enum bug {
    OK,
    NO_INPUT_FILE,
    EMPTY_INPUT_FILE,
    VERTICES_AMOUNT,
    VERTEX_NUM,
    COORDS_VALUE,
    ANGLE_VALUE,
    // TODO
};

using bugT = enum bug;

void showBugMessage(bugT &bug);

#endif // __BUG_H__