#include <iostream>
#include "cfile.h"
#include "csearch.h"
#include "cadclassindex.h"
#include "cindex.h"

using namespace std;

int main()
{
    CFile cfile;
//    CSearch csearch;
    CIndex cindex;
    cfile.LoadFile("//Users//apple//Downloads//data.txt",cfile.cdataset); 
//    csearch.PinyinSearch(cfile.cdataset);
//    csearch.NameSearch(cfile.cdataset);
//    CAdclassIndex adindex;
//    int adclass[10]={0};
//    adindex.GetAdIndex(adclass,cfile.cdataset);
//    adindex.SetAdIndex(cfile.cdataset);
//    adindex.SearchAdIndex();
    cindex.SetPYIndex(cfile.cdataset);
    cindex.SearchPYIndex();
    cout << "Hello World!" << endl;
    return 0;
}
