#ifndef CADCLASSINDEX_H
#define CADCLASSINDEX_H
#include "cdataset.h"
#include <list>
#include"cinterface.h"

bool comb(CRecord* record1,CRecord* record2);

class CAdclassIndex
{
public:
    CAdclassIndex();
    //int adclass;
    CInterface interface;
    list<CDataSet*> adclassdataset;
    int GetAdIndex(int (&a)[10],CDataSet fulldataset);
    void SetAdIndex(CDataSet fulldataset);
    void SearchAdIndex(CDataSet fulldataset);
};

#endif // CADCLASSINDEX_H
