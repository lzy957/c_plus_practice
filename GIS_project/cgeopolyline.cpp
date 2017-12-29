#include "cgeopolyline.h"

CGeopolyline::CGeopolyline()
{

}

CGeopolyline::~CGeopolyline()
{
    list<CGeopoint*>::iterator i;
    for( i=this->Polyline.begin();i!=this->Polyline.end();++i)
        delete(*i);
}
