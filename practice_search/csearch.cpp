#include "csearch.h"
#include <iostream>
#include "cdataset.h"

using namespace std;

CSearch::CSearch()
{
    this->py=new char[50];
}

CSearch::~CSearch()
{
    int size=this->cdataset.vdataset.size();
    if(size!=0)
    {
        for(int i=0;i<size;i++)
            delete(this->cdataset.vdataset.at(i));
    }
    if(this->py!=NULL)
        this->py=NULL;
}


void CSearch::Search(CDataSet cdataset)
{
    this->py=this->interface.Input();
    if(strcmp("name",this->interface.viable)==0)
        this->NameSearch(cdataset);
    else if(strcmp("pinyin",this->interface.viable)==0)
        this->PinyinSearch(cdataset);
}

void CSearch::PinyinSearch(CDataSet cdataset)
{
    int size=cdataset.vdataset.size();
    for(int i=0;i<size;i++)
    {
        if(strcmp(this->py,(cdataset.vdataset.at(i)->pinyi).data())==0)
        {
            cdataset.vdataset.at(i)->Display();
        }
        else
            continue;
    }

}

void CSearch::NameSearch(CDataSet cdataset)
{
    int size=cdataset.vdataset.size();
    for(int i=0;i<size;i++)
    {
        if(strcmp(this->py,(cdataset.vdataset.at(i)->name).data())==0)
        {
            cdataset.vdataset.at(i)->Display();
        }
        else
            continue;
    }
}
