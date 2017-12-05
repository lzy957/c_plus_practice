#include "cindex.h"
#include "algorithm"
#include "iostream"
using namespace std;
CIndex::CIndex()
{

}

void CIndex::SetPYIndex(CDataSet fulldataset)
{
    char Letters[13][2]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i=0;i<13;i++)
    {
        CPYIndex *pyset=new CPYIndex;
        pyset->SetPinyin(Letters[i]);
        pyset->ClassifyPy(fulldataset);
        this->vpyindex.push_back(pyset);
    }
}

void CIndex::SearchPYIndex()
{
    char py[20];
    cout<<"input pinyin:";
    cin>>py;
//    char py[20]="Guiyang";
    list<CPYIndex*>::iterator i;
    for(i=this->vpyindex.begin();i!=this->vpyindex.end();++i)
    {
        if((*i)->Letter[0]==py[0]||(*i)->Letter[1]==py[0])
            (*i)->SearchPy(py);
    }
}
