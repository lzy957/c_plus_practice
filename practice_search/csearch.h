#ifndef CSEARCH_H
#define CSEARCH_H
#include "cdataset.h"
#include "cinterface.h"

class CSearch
{
public:
    CSearch();
    ~CSearch();
    CDataSet cdataset;
    char* py;
    CInterface interface;
    void Search(CDataSet cdataset);
    void PinyinSearch(CDataSet cdataset);
    void NameSearch(CDataSet cdataset);
};

#endif // CSEARCH_H
