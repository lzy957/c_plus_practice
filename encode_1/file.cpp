#include "cfile.h"
#include <iostream>
#include <fstream>
//#include <vector>
using namespace std;
CFile::CFile()
{

}

int CFile::FileOpen(const char *filename, vector <Lyrics *> &Vlyrics)
{
    long ISize;
    size_t result;
    char *buffer;
   // ifstream fin(cfile.filename,ios::binary);   // 二进制打开文件
    FILE *fp;
    fp=fopen(filename,"rb");
    if(!fp)
    {
        fputs("File cannot be opened.",stderr);
        return 0;
    }
    //获取文件大小
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
    Lyrics *tempt;
    int i=0;
    while(i<(ISize/5))
    {
        tempt=new Lyrics;
        tempt->letter=(char)*(buffer+i);
        tempt->num=*((int*)(buffer+5*i+1));
cout<<tempt->letter<<','<<tempt->num<<endl;
        Vlyrics.push_back(tempt);
        i++;
    }
    return 0;
}

int CFile::FileWrite(char* Letters)
{
/*
    FILE* fp=fopen("decode2.txt","wt+");
    if(fp==NULL)
    {
        perror("Open file decode2");
        exit(1);
    rewind(fp);
        fwrite(Letters,sizeof(char),2600,fp);
    //fprintf(fp,"%2056c",Letters);
    fclose(fp);
*/
    ofstream fout("decode3.txt",ios::out);
        if(!fout)
        {
            cout<<"File cannot be created."<<endl;
            return 0;
        }
        for(int i=0;i<1308;i++)
        {
            fout.write((char*)&Letters[i],sizeof(char));
        } 
      return 0;
}

/*
int CFile::FileWrite(vector<Lyrics*> Vlyrics)
{

    ofstream fout("decode4.txt",ios::out);
        if(!fout)
        {
            cout<<"File cannot be created."<<endl;
            return 0;
        }
//        int sizel=Vlyrics.size();
        for(int i=0;i<1308;i++)
        {
            fout.write((char*)&Vlyrics.at(i)->letter,sizeof(char));
        }

}
*/
