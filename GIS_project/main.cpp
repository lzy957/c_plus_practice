#include <iostream>
#include "cgeofile.h"
#include "cindex.h"
#include "csearch.h"
using namespace std;

int main()
{
    CGeoFile file;
    file.FileOpen("//Users//apple//Downloads//面向对象的 GIS//practise_3//data//china.dat");
    file.SybFileOpen("//Users//apple//Downloads//面向对象的 GIS//practise_3//data//china.opt");
    file.CityFileOpen("//Users//apple//Downloads//面向对象的 GIS//practise_3//data//chnCity.txt");
//    CIndex index;
//    index.SearchNameIndex(file.Cityset);
    CSearch spatialsearch;
    CGeopoint pt;
    pt.x=(*file.Cityset.CityList.begin())->x;
    pt.y=(*file.Cityset.CityList.begin())->y;
    spatialsearch.GraphicsSearch(file.map->wrect,pt,file.Cityset);
    cout << "Hello World!" << endl;
    return 0;
}
