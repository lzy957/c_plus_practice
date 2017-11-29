#ifndef CLYRICS_H
#define CLYRICS_H

#include <vector>
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
    vector <Lyrics *> Vlyrics;
    char* Decode();
};
#endif // CLYRICS_H
