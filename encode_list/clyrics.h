#ifndef CLYRICS_H
#define CLYRICS_H
#include <list>
using namespace std;

struct Lyrics
{
    char letter;
    int num;
};
bool comp( Lyrics *alyrica, Lyrics *alyricsb);

class Clyrics
{
public:
    Clyrics();
    list<Lyrics*> listlyrics;
    char* decodelyrics;
    void NumSort();
    void Decode();
};

#endif // CLYRICS_H
