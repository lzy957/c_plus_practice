#ifndef CGEOMAP_H
#define CGEOMAP_H
#include "crect.h"
#include <list>
#include "cgeolayer.h"
using namespace std;

class CGeomap
{
public:
    CGeomap();
    ~CGeomap();
    CRect wrect;
    int layernum;
    list<CGeolayer*> Geolayers;
};

#endif // CGEOMAP_H
