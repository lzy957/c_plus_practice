#include "cfile.h"
#include "stdio.h"

CFile::CFile()
{

}

void CFile::FileOpen(const char *filename)
{
    size_t result;
    FILE *fp;
    fp=fopen(filename,"rb");
    if(!fp)
    {
        fputs("File cannot be opened.",stderr);
        exit(0);
    }

    //获取文件大小
    fseek(fp,0,SEEK_END);
    this->ISize=ftell(fp);
    rewind(fp);

    //分配内存空间
    this->buffer=(char*)malloc(sizeof(char)*this->ISize);
    if(this->buffer==NULL)
    {
        fputs("Memory error.",stderr);
        exit(1);
    }

    //将文件拷贝到buffer中
    result=fread(this->buffer,sizeof(char),this->ISize,fp);
    if(result!=this->ISize)
    {
        fputs("Reading error.",stderr);
        exit(2);
    }
    fclose(fp);
}

void CFile::FileLoad()
{
    Lyrics* temp;
    int i=0;
    while(i<this->ISize/5)
    {
        temp=new Lyrics;
        temp->letter=(char)*(this->buffer+i);
        temp->num=*((int*)(this->buffer+5*i+1));
        this->clyrics.listlyrics.push_back(temp);
        i++;
    }
}

void CFile::FileWrite()
{
    FILE* fp=fopen("decode_3.txt","wt+");
    if(fp==NULL)
    {
        perror("Open file decode2");
        exit(1);
    }
    rewind(fp);
        fwrite(this->clyrics.decodelyrics,sizeof(char),this->ISize/5,fp);
    fclose(fp);
}
