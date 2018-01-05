#ifndef CCHNCITY_H
#define CCHNCITY_H
#include <string>
#include "characonvert.h"
#include <QtOpenGL>
using namespace std;

class CChncity
{
public:
    CChncity();
    ~CChncity();

    string name;
    int x;
    int y;

    Characonvert* cv;
    void Display();

};

#endif // CCHNCITY_H
