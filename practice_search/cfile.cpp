#include "cfile.h"
#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;

CFile::CFile()
{

}

CFile::~CFile()
{
    int size=this->cdataset.vdataset.size();
    for(int i=0;i++;i<size)
    delete(this->cdataset.vdataset.at(i));
}
int CFile::LoadFile(const char *filename,CDataSet &cdataset)
{
    ifstream fp(filename);
    /*FILE *fp;
    fp=fopen(filename,"r");
    long ISize;
    size_t result;
    char *buffer;
    if(!fp)
    {
        fputs("File cannot be opened.",stderr);
        return 0;
    }
    fseek(fp,0,SEEK_END);
    ISize=ftell(fp);
    rewind(fp);
    //分配内存空间
    buffer=(char*)malloc(sizeof(char)*ISize);
    if(buffer==NULL)
    {
        fputs("Memory error.",stderr);
        return 0;
    }
    //将文件拷贝到buffer中
    result=fread(buffer,sizeof(char),ISize,fp);
    if(result!=ISize)
    {
        fputs("Reading error.",stderr);
        return 0;
    }
    fclose(fp);
    CRecord* record=new CRecord();
    string temp;
    while (!feof(fp))
    {
       fscanf(fp,"%s",temp);
       record->fid=strchr(temp,',');
    }*/
    if(!fp)
    {
        fputs("File cannot be opened.",stderr);
        return 0;
    }
    string title;
    getline(fp,title);
    string temp;
    char* temp1=new char[50];
    int length;
    while(getline(fp,temp))
    {
        CRecord* record=new CRecord();
//        int pos1=temp.find(',',0);
//        strcpy(temp1,temp.substr(0,pos1-1).data());
//        record->fid=atoi(temp1);
        int pos1=0;
        int pos2=temp.find(',',0);
        length=pos2-pos1-1;
        strcpy(temp1,temp.substr(pos1+1,length).data());
        record->area=double (stof(temp1));
        pos1=temp.find(',',pos2+1);
        length=pos1-pos2-1;
        strcpy(temp1,temp.substr(pos2+1,length).data());
        record->perimeter=double(stof(temp1));
        pos2=temp.find(',',pos1+1);
        length=pos2-pos1-1;
        strcpy(temp1,temp.substr(pos1+1,length).data());
        record->RES2_4M=temp1;
        pos1=temp.find(',',pos2+1);
        length=pos1-pos2-1;
        strcpy(temp1,temp.substr(pos2+1,length).data());
        record->RES2_4M_ID=temp1;
        pos2=temp.find(',',pos1+1);
        length=pos2-pos1-1;
        strcpy(temp1,temp.substr(pos1+1,length).data());
        record->gbcode=temp1;
        pos1=temp.find(',',pos2+1);
        length=pos1-pos2-1;
        strcpy(temp1,temp.substr(pos2+1,length).data());
        record->name=temp1;
        pos2=temp.find(',',pos1+1);
        length=pos2-pos1-1;
        strcpy(temp1,temp.substr(pos1+1,length).data());
        record->adcode_E93=temp1;
        pos1=temp.find(',',pos2+1);
        length=pos1-pos2-1;
        strcpy(temp1,temp.substr(pos2+1,length).data());
        record->adcode_E99=temp1;
        pos2=temp.find(',',pos1+1);
        length=pos2-pos1-1;
        strcpy(temp1,temp.substr(pos1+1,length).data());
        record->adclass=atoi(temp1);
        pos1=temp.find(',',pos2+1);
        length=pos1-pos2-1;
        strcpy(temp1,temp.substr(pos2+1,length-2).data());
        temp1=strtok(temp1,"\r");
        record->pinyi=temp1;
        cdataset.vdataset.push_back(record);
    }
   fp.close();
   delete(temp1);

   return 0;
}
