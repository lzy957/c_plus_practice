#ifndef CQUADTREEPT_H
#define CQUADTREEPT_H
#include "crect.h"
#include "ccitylist.h"
#include "cgeopoint.h"

/* 一个矩形区域的象限划分：:

       UL(1)   |    UR(0)
     ----------|-----------
       LL(2)   |    LR(3)
以下对该象限类型的枚举
*/
typedef enum
{
    UR = 0,
    UL = 1,
    LL = 2,
    LR = 3
}QuadrantEnum;

///* 矩形结构 */
//typedef struct quadrect_t
//{
//    double  left,
//            top,
//            right,
//            bottom;
//}quadrect_t;

/* 四叉树节点类型结构 */
typedef struct quadnode_t
{
    CRect rect;          //节点所代表的矩形区域
    list<CChncity*> lst_obj_cities;
    struct  quadnode_t* sub[4]; //指向节点的四个孩子
}quadnode_t;

/* 四叉树类型结构 */
typedef struct quadtree_t
{
    quadnode_t  *root;
    int         depth;           // 四叉树的深度
}quadtree_t;

class CQuadTreept
{
public:
    CQuadTreept();
    ~CQuadTreept();
    quadtree_t QuadTree;
    void QuadTreeBuild (int depth,CRect rect);
    void QuadtreeBuild(CCityList fulldataset,CRect rect);
    void QuadInsert(CChncity* &i,quadnode_t* &n);
    void QuadCreateBranch(quadnode_t* &n,int depth,CRect rect);
    quadnode_t* find (quadnode_t* n,CGeopoint pt);

};

#endif // CQUADTREEPT_H
