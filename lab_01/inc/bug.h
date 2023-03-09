#ifndef __BUG_H__
#define __BUG_H__

enum bug {
    OK,
    NO_MODEL,
    EMPTY_FILE,
    MEMORY_ERR,
    UNKNOWN_COMMAND,
    POINTS_AMOUNT,
    EDGES_AMOUNT,
    POINT_ERR,
    EDGE_ERR
};

using bugT = enum bug;

void showBugMessage(bugT &bug);

#endif // __BUG_H__