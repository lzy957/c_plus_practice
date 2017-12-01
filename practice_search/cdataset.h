#ifndef CDATASET_H
#define CDATASET_H
#include "crecord.h"
#include <vector>

using namespace std;

class CDataSet
{
public:
    CDataSet();
    ~CDataSet();
    vector<CRecord*> vdataset;
    void Display();
};

#endif // CDATASET_H
