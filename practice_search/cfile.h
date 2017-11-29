#ifndef CFILE_H
#define CFILE_H
#include "cdataset.h"

class CFile
{
public:
    CFile();
    ~CFile();
    CDataSet cdataset;
    int LoadFile(const char *filename,CDataSet &cdataset);
};

#endif // CFILE_H
