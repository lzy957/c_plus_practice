#ifndef CGEOFILE_H
#define CGEOFILE_H
#include "cgeomap.h"
#include "cgeopoint.h"
#include "cgeopolyline.h"
#include "cgeopolygon.h"
#include <list>
#include "clistsymbol.h"
#include "ccitylist.h"

using namespace std;

class CGeoFile
{
public:
    CGeoFile();
    ~CGeoFile();
    void FileOpen(const char* filename);
    void SybFileOpen(const char* filename);
//    list<CGeomap*> maps;
    CGeomap* map;
    CListSymbol* Symbolset;
    void CityFileOpen(const char* filename);
    CCityList Cityset;
};

#endif // CGEOFILE_H
