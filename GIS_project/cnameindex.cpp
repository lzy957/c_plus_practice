#include "cnameindex.h"

CNameIndex::CNameIndex()
{

}

CNameIndex::~CNameIndex()
{

}

void CNameIndex::SetLetter(char linput[])
{
    this->Letter[0]=linput[0];
    this->Letter[1]=linput[1];
}

void CNameIndex::NameClassify(CCityList fulldataset)
{
//    list<CChncity*>::iterator i;
    fulldataset.GetFirstLetters();
    for(this->i=fulldataset.CityList.begin();this->i!=fulldataset.CityList.end();++this->i)
    {
        if((*i)->sFirstLetter.find(this->Letter[0])==0
                ||(*i)->sFirstLetter.find(this->Letter[1])==0)
            this->Citiescell.push_back(*i);

    }
}

void CNameIndex::NameSearch(string pinyin)
{
    for(this->i=this->Citiescell.begin();this->i!=this->Citiescell.end();++(this->i))
        if((*(this->i))->name.find(pinyin)==0)
            (*this->i)->Display();
}
