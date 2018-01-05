#include "cindex.h"
#include "iostream"
using namespace std;
CIndex::CIndex()
{

}

void CIndex::NameIndexset(CCityList fulldataset)
{
    char Letters[13][2]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i=0;i<13;i++)
    {
        CNameIndex* nameset=new CNameIndex;
        nameset->SetLetter(Letters[i]);
        nameset->NameClassify(fulldataset);
        this->Nameindex.push_back(nameset);
    }
}

void CIndex::SearchNameIndex(CCityList fulldataset)
{
    this->NameIndexset(fulldataset);
//    char py[20];
//    cout<<"input name:";
//    cin>>py;
    char* py=new char(20);
    py="北京";
    CChncity* tempt=new CChncity;
    tempt->name=py;
    char* output=new char[20];
    bool isutf8=tempt->cv->is_utf8_string(py);
    if (isutf8)
    {
            tempt->cv->pinyin_utf8(py, output,true,false,true);
            tempt->cv->sFirstLetter=output;
     }
    else
        tempt->cv->FirstLetter(py);
    list<CNameIndex*>::iterator i;
    for(i=this->Nameindex.begin();i!=this->Nameindex.end();++i)
    {
        if((*i)->Letter[0]==tempt->cv->sFirstLetter[0]||(*i)->Letter[1]==tempt->cv->sFirstLetter[0])
        {
            if(isutf8)
                (*i)->NameSearch(tempt->cv->sFirstLetter,isutf8);
            else
            (*i)->NameSearch(py,isutf8);
    }
//    for(i=this->Nameindex.begin();i!=this->Nameindex.end();++i)
//    {
//        if((*i)->Letter[0]==py[0]||(*i)->Letter[1]==py[0])
//            (*i)->NameSearch(py);
//    }
}
}
