#ifndef CPYINDEX_H
#define CPYINDEX_H
#include<string>
#include "cdataset.h"
#include <list>
class CPYIndex
{
public:
    CPYIndex();
    char Letter[2];
    list<CRecord *> lpyset;
    void SetPinyin(char linput[]);
    void ClassifyPy(CDataSet fulldataset);
    void SearchPy(string pinyin);
};

#endif // CPYINDEX_H
