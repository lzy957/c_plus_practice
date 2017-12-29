#ifndef CRECT_H
#define CRECT_H
#include "cgeopoint.h"

class CRect
{
public:
    CRect();
    int right;
    int left;
    int top;
    int bottom;
    void Split(CRect* box1,CRect* box2,CRect* box3,CRect* box4);
    int quadrant(CRect rect,CGeopoint pt);
};

#endif // CRECT_H
