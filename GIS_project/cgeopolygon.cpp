#include "cgeopolygon.h"

CGeopolygon::CGeopolygon()
{

}

CGeopolygon::~CGeopolygon()
{
    list<CGeopoint*>::iterator i;
    for( i=this->Polygon.begin();i!=this->Polygon.end();++i)
        delete(*i);
}
