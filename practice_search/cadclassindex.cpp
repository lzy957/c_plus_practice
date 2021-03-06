#include "cadclassindex.h"
#include "algorithm"
#include "iostream"
using namespace std;

CAdclassIndex::CAdclassIndex()
{

}

int CAdclassIndex::GetAdIndex(int (&a)[10],CDataSet fulldataset)
{
    sort(fulldataset.vdataset.begin(),fulldataset.vdataset.end(),comb);
    int size=fulldataset.vdataset.size();
    int j=1;
    a[0]=fulldataset.vdataset.at(0)->adclass;
    for(int i=0;i<size-1;i++)
    {
        if(fulldataset.vdataset.at(i)->adclass!=fulldataset.vdataset.at(i+1)->adclass)
        {
            a[j]=fulldataset.vdataset.at(i+1)->adclass;
            j++;
        }
    }
    return j;
}

bool comb(CRecord* record1,CRecord* record2)
{
    return record1->adclass<record2->adclass;
}

void CAdclassIndex::SetAdIndex(CDataSet fulldataset)
{
     int adclass[10]={0};
    int const num=this->GetAdIndex(adclass,fulldataset);
    for(int i=0;i<num;i++)
    {
        CDataSet* tempdataset=new CDataSet;
        this->adclassdataset.push_back(tempdataset);
    }
//    for(int i=0;i<num;i++)
//    {
//        CDataSet *member=new CDataSet;
//        this->adclassdataset.push_back(member);
//    }
//    CDataSet *temp;
//    this->adclassdataset.iterator:: k;
//    temp=*this->adclassdataset.begin();
    CDataSet tempdset[4];
    CRecord *temprecord=new CRecord;
    for(int i=0;i<fulldataset.vdataset.size();i++)
    {
        temprecord=fulldataset.vdataset.at(i);
        switch(temprecord->adclass)
        {
        case 1:
            (*(this->adclassdataset.begin()))->vdataset.push_back(temprecord);
        break;
        case 2:
            (*(++this->adclassdataset.begin()))->vdataset.push_back(temprecord);
        break;
        case 3:
        {
            (*(++(++this->adclassdataset.begin())))->vdataset.push_back(temprecord);
        }
            break;
        case 9:
            (*(++(++(++this->adclassdataset.begin()))))->vdataset.push_back(temprecord);
            break;
        }
    }
//    for(int i=0;i<num;i++)
//    {
//        CDataSet* temp=&tempdset[i];
//        this->adclassdataset.push_back(temp);
//    }
}

void CAdclassIndex::SearchAdIndex(CDataSet fulldataset)
{
    this->SetAdIndex(fulldataset);
    int iadclass=this->interface.InputAdclass();
//   int iadclass=1;
    list<CDataSet*>::iterator i;
    for(i=this->adclassdataset.begin();i!=this->adclassdataset.end();++i)
    {if(iadclass==(*i)->vdataset.at(0)->adclass)
            (*i)->Display();}
}
