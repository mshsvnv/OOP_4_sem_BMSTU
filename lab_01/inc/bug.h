#ifndef __BUG_H__
#define __BUG_H__

enum bug {
    OK,
    NO_MODEL,
    MEMORY_ERR,
    UNKNOWN_COMMAND,
    NO_INPUT_FILE,
    POINTS_AMOUNT,
    EDGES_AMOUNT,
    POINT_ERR,
    EDGE_ERR
};

using bugT = enum bug;

void showBugMessage(bugT &bug);

#endif // __BUG_H__