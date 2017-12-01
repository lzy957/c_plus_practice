#include "cpyindex.h"

CPYIndex::CPYIndex()
{

}

void CPYIndex::SetPinyin(char linput[])
{
    this->Letter[0]=linput[0];
    this->Letter[1]=linput[1];
}

void CPYIndex::ClassifyPy(CDataSet fulldataset)
{
    int size=fulldataset.vdataset.size();
    for(int i=0;i<size;i++)
    {
        if(fulldataset.vdataset.at(i)->pinyi.find(this->Letter[0])==0
                ||fulldataset.vdataset.at(i)->pinyi.find(this->Letter[1])==0)
            this->lpyset.push_back(fulldataset.vdataset.at(i));
    }
}

void CPYIndex::SearchPy(string pinyin)
{
    list<CRecord*>::iterator i;
    for(i=this->lpyset.begin();i!=this->lpyset.end();++i)
        if((*i)->pinyi.find(pinyin)==0)
            (*i)->Display();
}
