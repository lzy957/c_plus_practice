#include <iostream>
#include "cfile.h"
#include "csearch.h"
#include "cadclassindex.h"

using namespace std;

int main()
{
    CFile cfile;
    CSearch csearch;
    cfile.LoadFile("//Users//apple//Downloads//data.txt",cfile.cdataset); 
//    csearch.PinyinSearch(cfile.cdataset);
//    csearch.NameSearch(cfile.cdataset);
    CAdclassIndex adindex;
    int adclass[10]={0};
    adindex.GetAdIndex(adclass,cfile.cdataset);
    for(int i=0;i<10;i++)
        cout<<adclass[i];
    adindex.SetAdIndex(cfile.cdataset);
    adindex.SearchAdIndex();
    cout << "Hello World!" << endl;
    return 0;
}
