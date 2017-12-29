#include "cquadtreept.h"

CQuadTreept::CQuadTreept()
{
//    this->QuadTree=new quadtree_t();
}

CQuadTreept::~CQuadTreept()
{
    if(this->QuadTree.root!=nullptr)
    {
        for(int n=0;n<this->QuadTree.depth;n++)
        {
            for(int k=0;k<this->QuadTree.depth;k++)
            {
                quadnode_t* tp=this->QuadTree.root;
                quadnode_t* tc=new quadnode_t;
                if(tp->sub!=nullptr)
                {
                    tc=tp->sub[n];
                }
                else
                    delete(tc);
                tp=tp->sub[n];
            }

        }
    }
}

void CQuadTreept::QuadTreeBuild (int depth,CRect rect)
{
    this->QuadTree.depth = depth;

/*创建分支，root树的根，depth深度，rect根节点代表的矩形区域*/
    this->QuadCreateBranch (this->QuadTree.root, depth, rect );
}

void CQuadTreept::QuadCreateBranch (quadnode_t* &n,int depth,CRect rect )
{
    if ( depth )
    {
//        quadnode_t* tempt=new quadnode_t;
        n = new quadnode_t;    //开辟新节点
//        n ->rect = rect; //将该节点所代表的矩形区域存储到该节点中
        n->rect=rect;
        CRect subrect[4];
        rect.Split(subrect, subrect+1, subrect+2, subrect+3);
        //将rect划成四份 rect[UR], rect[UL], rect[LL], rect[LR];

        /*创建各孩子分支*/
        this->QuadCreateBranch ( n->sub[UR], depth-1, subrect [UR] );
        this->QuadCreateBranch ( n->sub[UL], depth-1, subrect [UL] );
        this->QuadCreateBranch ( n->sub[LL], depth-1, subrect [LL] );
        this->QuadCreateBranch ( n->sub[LR], depth-1, subrect [LR] );
   }
   }

void CQuadTreept::QuadtreeBuild(CCityList fulldataset,CRect rect)
  {
//     this->QuadTree = {};
    this->QuadTree.root=new quadnode_t;
    this->QuadTree.root->rect=rect;
     list<CChncity*>::iterator i;
     for (i=fulldataset.CityList.begin();i!=fulldataset.CityList.end();++i)      //遍历所有对象
    {
      this->QuadInsert(*i, this->QuadTree.root);//将i对象插入四叉树
    }
         //剔除多余的节点；       //执行完上面循环后，四叉树中可能有数据为空的叶子节点需要剔除
  }

void CQuadTreept::QuadInsert(CChncity* &i,quadnode_t* &n)      //该函数插入后四叉树中的每个节点所存储的对象数量不是1就是0
  {
    int length=(n->rect.top-n->rect.bottom)/2;
    int width=(n->rect.right-n->rect.left)/2;
     if(n->sub!=nullptr)//（节点n有孩子）
     {
         CRect subrect[4];
         n->rect.Split(subrect, subrect+1, subrect+2, subrect+3);
         //将rect划成四份 rect[UR], rect[UL], rect[LL], rect[LR];

         if(i->y>(n->rect.bottom+length)&&i->y<n->rect.top)
         {
             if(i->x>(n->rect.left+width)&&i->x<n->rect.right)
             {
                 n->sub[UR]=new quadnode_t;
                 n->sub[UR]->rect=subrect[UR];
                 this->QuadInsert(i,n->sub[UR]);
             }
             else if(i->x<(n->rect.left+width)&&i->x>n->rect.left)
             {
                 n->sub[UL]=new quadnode_t;
                 n->sub[UL]->rect=subrect[UL];
                 this->QuadInsert(i,n->sub[UL]);
             }
         }
         else if(i->y<(n->rect.bottom+length)&&i->y>n->rect.bottom)
         {
             if(i->x<(n->rect.left+width)&&i->x>n->rect.left)
             {
                 n->sub[LL]=new quadnode_t;
                 n->sub[LL]->rect=subrect[LL];
                 this->QuadInsert(i,n->sub[LL]);
             }
             else if(i->x>(n->rect.left+width)&&i->x<n->rect.right)
             {
                 n->sub[LR]=new quadnode_t;
                 n->sub[LR]->rect=subrect[LR];
                 this->QuadInsert(i,n->sub[LR]);
             }
         }
//    通过划分区域判断i应该放置于n节点的哪一个孩子节点c；
    }
     else if(*(n->lst_obj_cities.begin())!=NULL)  //（节点n存储了一个对象）
     {
         this->QuadCreateBranch(n,1,n->rect);  //为n节点创建四个孩子；
         if(i->y>(n->rect.bottom+length)&&i->y<n->rect.top)
         {
             if(i->x>(n->rect.left+width)&&i->x<n->rect.right)
                 this->QuadInsert(i,n->sub[UR]);
             else if(i->x<(n->rect.left+width)&&i->x>n->rect.left)
                 this->QuadInsert(i,n->sub[UL]);
         }
         else if(i->y<(n->rect.bottom+length)&&i->y>n->rect.bottom)
         {
             if(i->x<(n->rect.left+width)&&i->x>n->rect.left)
                 this->QuadInsert(i,n->sub[LL]);
             else if(i->x>(n->rect.left+width)&&i->x<n->rect.right)
                 this->QuadInsert(i,n->sub[LR]);
         }
    //将n节点中的对象移到它应该放置的孩子节点中；
    //通过划分区域判断i应该放置于n节点的哪一个孩子节点c；
 }
//     else if((*n->lst_obj_cities.begin())==nullptr)//（n节点数据为空）
     else
 {
         CChncity* temp=new CChncity;
         temp=i;
    n->lst_obj_cities.push_back(temp);//将i存储到节点n中；
 }
     this->QuadTree.depth++;
  }

quadnode_t* CQuadTreept::find (quadnode_t* n,CGeopoint pt)
  {
    quadnode_t* temp;
    list<CChncity*>::iterator i;
    for(i=n->lst_obj_cities.begin();i!=n->lst_obj_cities.end();++i)
    {
        if(((*i)->x==pt.x)&&((*i)->y==pt.y))  //(n节点所存的对象位置为 pos所指的位置 )
            return n;
        if(n->rect.quadrant(n->rect,pt)==0) //( pos位于第一象限 )
            temp = find ( n->sub[UR], pt );
        else if(n->rect.quadrant(n->rect,pt)==1) //( pos位于第二象限)
            temp = find ( n->sub[UL], pt );
        else if(n->rect.quadrant(n->rect,pt)==2) //( pos位于第三象限 )
            temp = find ( n->sub[LL], pt );
        else  //pos 位于第四象限
            temp = find ( n->sub[LR], pt );
        return temp;
//      if((n->lst_obj_cities->x==pt.x)&&(n->lst_obj_cities->y==pt.y))  //(n节点所存的对象位置为 pos所指的位置 )
//          return n;
//      if(n->rect.quadrant(n->rect,pt)==0) //( pos位于第一象限 )
//          temp = find ( n->sub[UR], pt );
//      else if(n->rect.quadrant(n->rect,pt)==1) //( pos位于第二象限)
//          temp = find ( n->sub[UL], pt );
//      else if(n->rect.quadrant(n->rect,pt)==2) //( pos位于第三象限 )
//          temp = find ( n->sub[LL], pt );
//      else  //pos 位于第四象限
//          temp = find ( n->sub[LR], pt );
//      return temp;
    }
  }
