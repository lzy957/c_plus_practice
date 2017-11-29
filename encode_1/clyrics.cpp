#include "clyrics.h"
#include <algorithm>
using namespace std;
Clyrics::Clyrics()
{

}

//void DataLoad(char * buffer,Clyrics clyri)
//{
//    char l='a';int n=0;
//    Lyrics lyricstruct={l,n};
//    int i=0;
//    while(!buffer)
//    {
//        l=*(buffer+i);
//        n=*(int*)(buffer+5*i+1);
//      //  lyricstruct->letter=*(buffer+i);
//      //  lyricstruct->num=*(int*)(buffer+5*i+1);
//        i++;
//        clyri.Vlyrics.push_back(lyricstruct);
//    }
//    //delete(lyricstruct);
//}


char* Clyrics:: Decode()
{
    const int size=Vlyrics.size();
 //   char* Letters = new char[size];
    char* Letters=NULL;
    char* tc;
    Letters=(char*)malloc((sizeof(char))*size);
    tc=Letters;
    int i;
    Lyrics temp;
    for(i=0;i<size;i++)
    {
        temp.letter=Vlyrics.at(i)->letter;
        *tc++=temp.letter;
        char c=Letters[i];
    }
    //delete(tc);
    return Letters;
}

bool comp( Lyrics *alyrica, Lyrics *alyricsb)
{
    return alyrica->num<alyricsb->num;
}
