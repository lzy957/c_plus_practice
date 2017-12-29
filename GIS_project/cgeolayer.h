#ifndef CGEOLAYER_H
#define CGEOLAYER_H
#include "cgeometry.h"
#include <list>
#include <string>
using namespace std;

class CGeolayer
{
public:
    CGeolayer();
    ~CGeolayer();
    list<CGeometry*> Geoobjects;
    int namesize;
    string layername;
    int objectnum;
//    bool isline;
//    float linewidth;
//    int lR,lG,lB;
//    bool isfilled;
//    int fR,fG,fB;
};

#endif // CGEOLAYER_H
