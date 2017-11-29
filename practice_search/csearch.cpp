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
    for(int i=0;i++;i<size)
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
//            cout<<"FID:"<<cdataset.vdataset.at(i)->fid<<endl;
            cout<<"AREA:"<<cdataset.vdataset.at(i)->area<<endl;
            cout<<"PERIMETER:"<<cdataset.vdataset.at(i)->perimeter<<endl;
            cout<<"RES2_4M:"<<cdataset.vdataset.at(i)->RES2_4M<<endl;
            cout<<"RES2_4M_ID:"<<cdataset.vdataset.at(i)->RES2_4M_ID<<endl;
            cout<<"GBCODE:"<<cdataset.vdataset.at(i)->gbcode<<endl;
            cout<<"NAME:"<<cdataset.vdataset.at(i)->name<<endl;
            cout<<"ADCODE93:"<<cdataset.vdataset.at(i)->adcode_E93<<endl;
            cout<<"ADCODE99:"<<cdataset.vdataset.at(i)->adcode_E99<<endl;
            cout<<"ADCLASS:"<<cdataset.vdataset.at(i)->adclass<<endl;
            cout<<"PINYIN:"<<cdataset.vdataset.at(i)->pinyi<<endl;
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
//            cout<<"FID:"<<cdataset.vdataset.at(i)->fid<<endl;
            cout<<"AREA:"<<cdataset.vdataset.at(i)->area<<endl;
            cout<<"PERIMETER:"<<cdataset.vdataset.at(i)->perimeter<<endl;
            cout<<"RES2_4M:"<<cdataset.vdataset.at(i)->RES2_4M<<endl;
            cout<<"RES2_4M_ID:"<<cdataset.vdataset.at(i)->RES2_4M_ID<<endl;
            cout<<"GBCODE:"<<cdataset.vdataset.at(i)->gbcode<<endl;
            cout<<"NAME:"<<cdataset.vdataset.at(i)->name<<endl;
            cout<<"ADCODE93:"<<cdataset.vdataset.at(i)->adcode_E93<<endl;
            cout<<"ADCODE99:"<<cdataset.vdataset.at(i)->adcode_E99<<endl;
            cout<<"ADCLASS:"<<cdataset.vdataset.at(i)->adclass<<endl;
            cout<<"PINYIN:"<<cdataset.vdataset.at(i)->pinyi<<endl;
        }
        else
            continue;
    }
}
