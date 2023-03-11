#ifndef __FILE_H__
#define __FILE_H__

#include "bug.h"

#define MAX_NAME_LEN 200

bugT checkFileName(const char *fileName);

bugT checkFileSize(FILE *file);

bugT checkValidFile(const char *fileName);

#endif // __FILE_H__