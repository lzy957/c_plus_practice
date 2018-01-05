#include "cgeolayer.h"

CGeolayer::CGeolayer()
{
    this->layername=new char(20);
    symbol=new CSymbol;
}

CGeolayer::~CGeolayer()
{
    list<CGeometry*>::iterator i;
    for(i=this->Geoobjects.begin();i!=this->Geoobjects.end();++i)
        delete(*i);
}
