#include "csearch.h"
#include "iostream"
using namespace std;
CSearch::CSearch()
{

}

void CSearch::GraphicsSearch(CRect wrect,CGeopoint pt,CCityList fulldataset)
{
//    Quadtree.QuadTreeBuild(4,wrect);
    Quadtree.QuadtreeBuild(fulldataset,wrect);
    quadnode_t* tempt=new quadnode_t();
    tempt=Quadtree.find(Quadtree.QuadTree.root,pt);
}
