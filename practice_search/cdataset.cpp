#include "cdataset.h"

CDataSet::CDataSet()
{

}

CDataSet::~CDataSet()
{
    int size=this->vdataset.size();
    for(int i=0;i++;i<size)
    delete(this->vdataset.at(i));
}
