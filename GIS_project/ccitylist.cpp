#include "ccitylist.h"

CCityList::CCityList()
{

}

CCityList::~CCityList()
{
//    for( this->cityi=this->CityList.begin();this->cityi!=this->CityList.end();++this->cityi)
//        delete(*this->cityi);
}

void CCityList::Display()
{
    for( this->cityi=this->CityList.begin();this->cityi!=this->CityList.end();++this->cityi)
        (*this->cityi)->Display();
}

void CCityList::GetFirstLetters()
{
    for( this->cityi=this->CityList.begin();this->cityi!=this->CityList.end();++this->cityi)
        (*this->cityi)->FirstLetter();
}