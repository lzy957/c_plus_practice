#ifndef CCITYLIST_H
#define CCITYLIST_H
#include "cchncity.h"
#include <list>
using namespace std;

class CCityList
{
public:
    CCityList();
    ~CCityList();

    list<CChncity*> CityList;
    list<CChncity*>::iterator cityi;
    void GetFirstLetters();
    void Display();
};

#endif // CCITYLIST_H
