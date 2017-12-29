#include "cgeomap.h"

CGeomap::CGeomap()
{

}

CGeomap::~CGeomap()
{
    list<CGeolayer*>::iterator i;
    for(i=this->Geolayers.begin();i!=this->Geolayers.end();++i)
        delete(*i);
}
