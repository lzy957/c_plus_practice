#ifndef CCHNCITY_H
#define CCHNCITY_H
#include <string>
#include "characonvert.h"
#include <QtOpenGL>
#include "cproject.h"
using namespace std;

class CChncity
{
public:
    CChncity();
    ~CChncity();

    string name;
    int x;
    int y;
//    CProject pro;

    Characonvert* cv;
    void Display();
    void Draw(CProject* proj);
    void Mark(CProject* proj);
};

#endif // CCHNCITY_H
