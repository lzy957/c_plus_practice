#ifndef CINTERFACE_H
#define CINTERFACE_H
#include "iostream"

class CInterface
{
public:
    CInterface();
    ~CInterface();
    char* viable;
    char* py;
    char* SearchPara();
    char* Input();
    int InputAdclass();
};

#endif // CINTERFACE_H
