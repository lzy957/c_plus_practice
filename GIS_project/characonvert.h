#ifndef CHARACONVERT_H
#define CHARACONVERT_H
#include "iconv.h"
#include <string>
#include <stdio.h>
//#define OUTLEN 255

using namespace std;

static bool In(wchar_t start,wchar_t end,wchar_t code);


class Characonvert
{
public:
    Characonvert();

    string sFirstLetter;
    char convert(wchar_t n);
    void FirstLetter(string name);

};


#endif // CHARACONVERT_H
