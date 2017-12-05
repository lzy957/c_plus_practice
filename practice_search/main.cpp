#include <iostream>
#include "cfile.h"
#include "csearch.h"
#include "cadclassindex.h"
#include "cindex.h"

using namespace std;

int main()
{
    CFile cfile;
    cfile.LoadFile("//Users//apple//Downloads//data.txt",cfile.cdataset); 

//    CSearch csearch;
//    csearch.Search(cfile.cdataset);  //遍历搜索、通过name或pinyin

//    CAdclassIndex adindex;
//    adindex.SearchAdIndex(cfile.cdataset);//索引adclass

    CIndex cindex;
    cindex.SetPYIndex(cfile.cdataset);
    cindex.SearchPYIndex();   //索引拼音首字母

    cout << "Hello World!" << endl;
    return 0;
}
