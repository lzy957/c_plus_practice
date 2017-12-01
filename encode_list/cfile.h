#ifndef CFILE_H
#define CFILE_H
#include "clyrics.h"

class CFile
{
public:
    CFile();
    Clyrics clyrics;
    char* buffer;
    long ISize;
    void FileOpen(const char*filename);
    void FileLoad();
    void FileWrite();
};

#endif // CFILE_H
