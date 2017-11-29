#ifndef CFILE_H
#define CFILE_H

#endif // CFILE_H
#include "clyrics.h"
class CFile
{
public:
    CFile();
    ~CFile();
    char *filename;
    int FileOpen(const char* filename,vector <Lyrics*> &Vlyrics);
    //int FileWrite(char* letters);
    int FileWrite(vector<Lyrics*> Vlyrics);

};
