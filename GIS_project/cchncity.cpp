#include "cchncity.h"
#include "iostream"
#include "strings.h"

using namespace std;

CChncity::CChncity()
{
    this->cv=new Characonvert;
}

CChncity::~CChncity()
{
//    if(cv!=0x00)
//    {
//        delete []cv;
//        cv=0x00;
//    }
}
void CChncity::Display()
{
    cout<<"City name："<<this->name<<endl;
    cout<<"coordination x:"<<this->x<<endl;
    cout<<"coordination y:"<<this->y<<endl;
}

