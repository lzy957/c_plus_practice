#include "crect.h"


CRect::CRect()
{

}

void CRect::Split(CRect* box1,CRect* box2,CRect* box3,CRect* box4)
{
    unsigned int length;
    unsigned int width;
    length=(this->top - this->bottom)/2;
    width=(this->right - this->left)/2;
    box1->bottom=this->bottom+length;
    box1->top=this->top;
    box1->left=this->left;
    box1->right=this->left+width;
    box2->bottom=this->bottom;
    box2->top=this->top-length;
    box2->left=this->left;
    box2->right=this->left+width;
    box3->bottom=this->bottom;
    box3->top=this->top-length;
    box3->left=this->left+width;
    box3->right=this->right;
    box4->bottom=this->bottom+length;
    box4->top=this->top;
    box4->left=this->left+width;
    box4->right=this->right;
}

int CRect::quadrant(CRect rect,CGeopoint pt)
{
//    CRect sub[3];
//    rect.Split(sub,sub+1,sub+2,sub+3);
    int length=(rect.top-rect.bottom)/2;
    int width=(rect.right-rect.left)/2;
    if(pt.y>(rect.bottom+length)&&pt.y<rect.top)
    {
        if(pt.x>(rect.left+width)&&pt.x<rect.right)
            return 0;
        else if(pt.x<(rect.left+width)&&pt.x>rect.left)
            return 1;
    }
    else if(pt.y<(rect.bottom+length)&&pt.y>rect.bottom)
    {
        if(pt.x<(rect.left+width)&&pt.x>rect.left)
            return 2;
        else if(pt.x>(rect.left+width)&&pt.x<rect.right)
            return 3;
    }
}
