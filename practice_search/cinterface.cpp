#include "cinterface.h"
using namespace std;
CInterface::CInterface()
{
    this->viable=new char[20];
    this->py=new char[50];
}

CInterface::~CInterface()
{
//    if(this->viable!=NULL)
//        delete(this->viable);
//    if(this->py!=NULL)
//        delete(this->py);
}

char* CInterface::SearchPara()
{
    cout<<"choose a way to search:";
    cin>>this->viable;
    return this->viable;
}

char* CInterface::Input()
{
    this->SearchPara();
    cout<<"input "<<this->viable<<":";
    cin>>this->py;
//    this->py="北京";
    return this->py;
}

int CInterface::InputAdclass()
{
    int iadclass;
    cout<<"input adclass:";
    cin>>iadclass;
    return iadclass;
}
