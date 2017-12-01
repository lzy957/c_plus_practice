#ifndef CADCLASSINDEX_H
#define CADCLASSINDEX_H
#include "cdataset.h"
#include <list>

bool comb(CRecord* record1,CRecord* record2);

class CAdclassIndex
{
public:
    CAdclassIndex();
    //int adclass;
    list<CDataSet*> adclassdataset;
    int GetAdIndex(int (&a)[10],CDataSet fulldataset);
    void SetAdIndex(CDataSet fulldataset);
    void SearchAdIndex();
};

#endif // CADCLASSINDEX_H
