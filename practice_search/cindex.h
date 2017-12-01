#ifndef CINDEX_H
#define CINDEX_H
#include "cpyindex.h"
#include <list>
class CIndex
{
public:
    CIndex();
    list<CPYIndex* > vpyindex;
    void SetPYIndex(CDataSet fulldataset);
    void SearchPYIndex();
};

#endif // CINDEX_H
