#include <iostream>
#include "cgeofile.h"
#include "cindex.h"
#include "csearch.h"
using namespace std;

int main()
{
    CGeoFile file;
    file.FileOpen();
    // 名称搜索
    CIndex index;
    index.SearchNameIndex(file.Cityset);

    //空间搜索
//    CSearch spatialsearch;

//    CGeopoint pt;
//    pt.x=(*file.Cityset.CityList.begin())->x;
//    pt.y=(*file.Cityset.CityList.begin())->y;

//    spatialsearch.GraphicsSearch(file.map->wrect,pt,file.Cityset);

    cout << "Hello World!" << endl;
    return 0;
}
