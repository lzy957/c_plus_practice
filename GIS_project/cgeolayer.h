#ifndef CGEOLAYER_H
#define CGEOLAYER_H
#include "cgeometry.h"
#include <list>
#include <string>
#include "clistsymbol.h"
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
    CSymbol* symbol;
//    void MatchSymbol();
//    bool isline;
//    float linewidth;
//    int lR,lG,lB;
//    bool isfilled;
//    int fR,fG,fB;
};

#endif // CGEOLAYER_H
