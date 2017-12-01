#include <iostream>
#include "cfile.h"
using namespace std;

int main()
{
    CFile cfile;
    cfile.FileOpen("//Users//apple//Downloads//practise_1//Encode3.da");
    cfile.FileLoad();
    cfile.clyrics.NumSort();
    cfile.clyrics.Decode();
    cfile.FileWrite();
    cout << "Hello World!" << endl;
    return 0;
}
