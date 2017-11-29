#include <iostream>
#include "clyrics.h"
#include <algorithm>
#include "cfile.h"

using namespace std;

int main()
{
    Clyrics clyri;
    CFile cfile;
    cfile.FileOpen("//Users//apple//Downloads//practise_1//Encode2.da",clyri.Vlyrics);
    int size=clyri.Vlyrics.size();
    cout<<size<<endl;
    char *letters=new char[size];
        letters=clyri.Decode();
    sort(clyri.Vlyrics.begin(),clyri.Vlyrics.end(),comp);
    for(int j=0;j<size;j++)
        cout<<clyri.Vlyrics.at(j)->letter;
    cfile.FileWrite(letters);
//    cfile.FileWrite(clyri.Vlyrics);
    cout << "Hello World!" << endl;
        return 0;
}




