#ifndef CGEOPOINT_H
#define CGEOPOINT_H
#include "cgeometry.h"


class CGeopoint : public CGeometry
{
public:
    CGeopoint();
    int x;
    int y;
    void DataLoad();
    void Draw();
};

#endif // CGEOPOINT_H
