#include "clyrics.h"
#include "algorithm"
//using namespace std;
Clyrics::Clyrics()
{

}


bool comp( Lyrics *alyrica, Lyrics *alyricsb)
{
    return alyrica->num<alyricsb->num;
}

void Clyrics::NumSort()
{
    this->listlyrics.sort(comp);
}

void Clyrics::Decode()
{
    int size=this->listlyrics.size();
    this->decodelyrics=(char*)malloc((sizeof(char))*size);
    list<Lyrics*> ::iterator i;
    char c;
    int k=0;
    for(i=this->listlyrics.begin();i!=this->listlyrics.end();++i)
    {
        *(this->decodelyrics+k)=(*i)->letter;
        k++;
    }
}
