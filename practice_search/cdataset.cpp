#include "cdataset.h"

CDataSet::CDataSet()
{

}

CDataSet::~CDataSet()
{
//    int size=this->vdataset.size();
//    for(int i=0;i<size;i++)
//    delete(this->vdataset.at(i));
}

void CDataSet::Display()
{
    int size=this->vdataset.size();
    for(int i=0;i<size;i++)
        this->vdataset.at(i)->Display();
}
