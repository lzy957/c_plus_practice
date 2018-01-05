#include "characonvert.h"

Characonvert::Characonvert()
{
 this->sFirstLetter="";
}

bool In(wchar_t start, wchar_t end, wchar_t code)
{
    if   (code>=start&&code<=end)
    {
        return   true;
    }
    return   false;
}

char Characonvert:: convert(wchar_t n)
{
    if   (In(0xB0A1,0xB0C4,n))   return   'A';
    if   (In(0XB0C5,0XB2C0,n))   return   'B';
    if   (In(0xB2C1,0xB4ED,n))   return   'C';
    if   (In(0xB4EE,0xB6E9,n))   return   'D';
    if   (In(0xB6EA,0xB7A1,n))   return   'E';
    if   (In(0xB7A2,0xB8c0,n))   return   'F';
    if   (In(0xB8C1,0xB9FD,n))   return   'G';
    if   (In(0xB9FE,0xBBF6,n))   return   'H';
    if   (In(0xBBF7,0xBFA5,n))   return   'J';
    if   (In(0xBFA6,0xC0AB,n))   return   'K';
    if   (In(0xC0AC,0xC2E7,n))   return   'L';
    if   (In(0xC2E8,0xC4C2,n))   return   'M';
    if   (In(0xC4C3,0xC5B5,n))   return   'N';
    if   (In(0xC5B6,0xC5BD,n))   return   'O';
    if   (In(0xC5BE,0xC6D9,n))   return   'P';
    if   (In(0xC6DA,0xC8BA,n))   return   'Q';
    if   (In(0xC8BB,0xC8F5,n))   return   'R';
    if   (In(0xC8F6,0xCBF0,n))   return   'S';
    if   (In(0xCBFA,0xCDD9,n))   return   'T';
    if   (In(0xCDDA,0xCEF3,n))   return   'W';
    if   (In(0xCEF4,0xD188,n))   return   'X';
    if   (In(0xD1B9,0xD4D0,n))   return   'Y';
    if   (In(0xD4D1,0xD7F9,n))   return   'Z';
    return   '\0';
}

void Characonvert::FirstLetter(string name)
{
//    string   sChinese   =   "我爱中国";   //   输入的字符串

       char chr[3];
       wchar_t wchr=0;

       char* buff = new char[name.length()/2];
       memset(buff, 0x00, sizeof(char)*name.length()/2+1);

       for(int i=0,j=0;i<(name.length()/2);++i)
       {
           memset(chr,0x00,sizeof(chr));
           chr[0]   =   name[j++];
           chr[1]   =   name[j++];
           chr[2]   =   '\0';

           //   单个字符的编码   如：'我'   =   0xced2
           wchr   =   0;
           wchr   =   (chr[0]   &   0xff)   <<   8;   //高字节
           wchr   |=   (chr[1]   &   0xff);           //低字节
           buff[i]   =   convert(wchr);
       }
       this->sFirstLetter=buff;
       }




