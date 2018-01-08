#include <iostream>
#include <QApplication>
#include "cgeofile.h"
#include "cindex.h"
#include "csearch.h"
#include "cmyopenglwidgt.h"
#include "mainwindow.h"
#include "cgeofile.h"
using namespace std;

int main(int argc,char* argv[])
{
    // 名称搜索
//CGeoFile file;
//file.FileOpen();

    //空间搜索
//    CSearch spatialsearch;

//    CGeopoint pt;
//    pt.x=(*file.Cityset.CityList.begin())->x;
//    pt.y=(*file.Cityset.CityList.begin())->y;

//    spatialsearch.GraphicsSearch(file.map->wrect,pt,file.Cityset);
    //OpenGL图形绘制

    QApplication app(argc,argv);
    MainWindow w;
    w.show();

    cout << "Hello World!" << endl;
//    return 0;
    return app.exec();
}
