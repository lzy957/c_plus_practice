#ifndef CADCLASSINDEX_H
#define CADCLASSINDEX_H
#include "cdataset.h"

bool comb(CRecord* record1,CRecord* record2);

class CAdclassIndex
{
public:
    CAdclassIndex();
    int adclass;
    CDataSet adclassdataset;
    void GetAdIndex(int (&a)[10],CDataSet fulldataset);
};

#endif // CADCLASSINDEX_H
