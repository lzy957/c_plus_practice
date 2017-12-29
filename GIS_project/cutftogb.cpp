//#include "cutftogb.h"

//CUTFtoGB::CUTFtoGB()
//{

//}

//void CUTFtoGB::utftogb2312(char in_utf8[])
//{
//    size_t ret;
//        char in_gb2312[] = "正在安装";
//        char *in;

//        size_t src_len = strlen(in_utf8);
//        //char szDest[64] = {'\0'};
//        char *szDest;
//        char *sout;
//        size_t dest_len = 64;
//    //    memset(szDest,'\0',64);

//        iconv_t conv;

//       conv = iconv_open("gbk","utf-8");
//    //    conv = iconv_open("utf-8","gbk");
//        if (conv == (iconv_t)-1)
//        {
//            perror("iconv_open:");
//            exit(0);
//        }

//            szDest=(char *)malloc(64);
//            if ( szDest == NULL) return -1;
//            memset(szDest,0,64);
//            sout = szDest;
//            in=in_utf8;
//        ret = iconv(conv,(const char**)&in,(size_t *)&src_len,(char **)&szDest,(size_t *)&dest_len);
//        if (ret == -1)
//        {
//            perror("iconv:");
//            exit(1);
//        }

//        printf("%s\r\n",sout);
//        iconv_close(conv);
//        if ( sout ) free( sout);

//}
