#include "crecord.h"
#include <iostream>
using namespace std;

CRecord::CRecord()
{

}

void CRecord::Display()
{
    cout<<"AREA:"<<this->area<<endl;
    cout<<"PERIMETER:"<<this->perimeter<<endl;
    cout<<"RES2_4M:"<<this->RES2_4M<<endl;
    cout<<"RES2_4M_ID:"<<this->RES2_4M_ID<<endl;
    cout<<"GBCODE:"<<this->gbcode<<endl;
    cout<<"NAME:"<<this->name<<endl;
    cout<<"ADCODE93:"<<this->adcode_E93<<endl;
    cout<<"ADCODE99:"<<this->adcode_E99<<endl;
    cout<<"ADCLASS:"<<this->adclass<<endl;
    cout<<"PINYIN:"<<this->pinyi<<endl;
}
