#include "csearch.h"
#include <iostream>
#include "cdataset.h"
using namespace std;

CSearch::CSearch()
{

}

CSearch::~CSearch()
{
    int size=this->cdataset.vdataset.size();
    for(int i=0;i<size;i++)
    delete(this->cdataset.vdataset.at(i));
}

void CSearch::PinyinSearch(CDataSet cdataset)
{
    char *py=new char[50];
    cout<<"input pinyin:";
    cin>>py;
    int size=cdataset.vdataset.size();
    for(int i=0;i<size;i++)
    {
        if(strcmp(py,(cdataset.vdataset.at(i)->pinyi).data())==0)
        {
            cdataset.vdataset.at(i)->Display();
        }
        else
            continue;
    }

}

void CSearch::NameSearch(CDataSet cdataset)
{
    char *py=new char[50];
    cout<<"input name:";
    cin>>py;
    int size=cdataset.vdataset.size();
    for(int i=0;i<size;i++)
    {
        if(strcmp(py,(cdataset.vdataset.at(i)->name).data())==0)
        {
            cdataset.vdataset.at(i)->Display();
        }
        else
            continue;
    }
}
