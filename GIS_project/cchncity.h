#ifndef CCHNCITY_H
#define CCHNCITY_H
#include <string>
using namespace std;

static   bool   In(wchar_t   start,   wchar_t   end,   wchar_t   code);
class CChncity
{
public:
    CChncity();
    string name;
    string sFirstLetter;
    int x;
    int y;
    void Display();
    char convert(wchar_t n);
//    string getChineseSpell();
    void FirstLetter();
    void UTF_FirstLetter();

};

#endif // CCHNCITY_H
