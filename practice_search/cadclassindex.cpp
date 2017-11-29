#include "cadclassindex.h"
#include "algorithm"
using namespace std;

CAdclassIndex::CAdclassIndex()
{

}

void CAdclassIndex::GetAdIndex(int (&a)[10],CDataSet fulldataset)
{
    sort(fulldataset.vdataset.begin(),fulldataset.vdataset.end(),comb);
    int size=fulldataset.vdataset.size();
    int j=1;
    a[0]=fulldataset.vdataset.at(0)->adclass;
    for(int i=0;i<size-1;i++)
    {
        if(fulldataset.vdataset.at(i)->adclass!=fulldataset.vdataset.at(i+1)->adclass)
        {
            a[j]=fulldataset.vdataset.at(i+1)->adclass;
            j++;
        }
    }
}

bool comb(CRecord* record1,CRecord* record2)
{
    return record1->adclass<record2->adclass;
}
