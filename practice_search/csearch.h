#ifndef CSEARCH_H
#define CSEARCH_H
#include "cdataset.h"

class CSearch
{
public:
    CSearch();
    ~CSearch();
    CDataSet cdataset;
    void PinyinSearch(CDataSet cdataset);
    void NameSearch(CDataSet cdataset);
};

#endif // CSEARCH_H
