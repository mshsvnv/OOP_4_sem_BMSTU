#include <iostream>
#include <cstring>
#include "file.h"

bugT checkFileName(const char *fileName) {

    bugT rc = OK;

    if (strlen(fileName) >= MAX_NAME_LEN)
        rc = FILE_NAME_LEN;

    return rc;
}

bugT checkFileSize(FILE *file) {
    
    bugT rc = OK;

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fseek(file, 0, SEEK_SET);

    if (size == 0)
        rc = EMPTY_FILE;

    return rc;
}

bugT checkValidFile(const char *fileName) {

    bugT rc = OK;

    rc = checkFileName(fileName);

    FILE *file = fopen(fileName, "r");

    if (!file) 
        rc = INVALID_FILE;
    else
        rc = checkFileSize(file);

    if (rc != INVALID_FILE)
        fclose(file);

    return rc;
}
