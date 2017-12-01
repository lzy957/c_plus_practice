#ifndef CRECORD_H
#define CRECORD_H
#include <string>;
using namespace std;

class CRecord
{
public:
    CRecord();
//    int fid;
    double area;
    double perimeter;
    string RES2_4M;
    string RES2_4M_ID;
    string gbcode;
    string name;
    string adcode_E93;
    string adcode_E99;
    int adclass;
    string pinyi;
    void Display();
};

#endif // CRECORD_H
