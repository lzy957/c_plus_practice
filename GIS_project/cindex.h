#ifndef CINDEX_H
#define CINDEX_H
#include "cnameindex.h"

class CIndex
{
public:
    CIndex();

    list<CNameIndex* > Nameindex;
    void NameIndexset(CCityList fulldataset);
    void SearchNameIndex(CCityList fulldataset);
};

#endif // CINDEX_H
