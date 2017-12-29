//#include "character_encode.h"

//character_encode::character_encode()
//{

//}

//void character_encode::UnicodeToUTF_8(char* pOut, wchar_t* pText)
//{
//    // 注意 WCHAR高低字的顺序,低字节在前，高字节在后
//    char* pchar = (char *)pText;

//    pOut[0] = (0xE0 | ((pchar[1] & 0xF0) >> 4));
//    pOut[1] = (0x80 | ((pchar[1] & 0x0F) << 2)) + ((pchar[0] & 0xC0) >> 6);
//    pOut[2] = (0x80 | (pchar[0] & 0x3F));

//    return;
//}

//void character_encode::UnicodeToGB2312(char* pOut, wchar_t uData)
//{
//    WideCharToMultiByte(CP_ACP, NULL, &uData, 1, pOut, sizeof(wchar_t), NULL, NULL);
//    return;
//}

//void character_encode::Gb2312ToUnicode(wchar_t* pOut, char *gbBuffer)
//{
//    MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, gbBuffer, 2, pOut, 1);
//    return;
//}

//void character_encode::GB2312ToUTF_8(string& pOut, char *pText, int pLen)
//{
//    char buf[4];
//    int nLength = pLen * 3;
//    char* rst = new char[nLength + 1];

//    memset(buf, 0, 4);
//    memset(rst, 0, nLength);

//    int i = 0;
//    int j = 0;
//    while (i < pLen)
//    {
//        //如果是英文直接复制就可以
//        if (*(pText + i) >= 0)
//        {
//            rst[j++] = pText[i++];
//        }
//        else
//        {
//            wchar_t pbuffer;
//            Gb2312ToUnicode(&pbuffer, pText + i);

//            UnicodeToUTF_8(buf, &pbuffer);

//            unsigned short int tmp = 0;
//            tmp = rst[j] = buf[0];
//            tmp = rst[j + 1] = buf[1];
//            tmp = rst[j + 2] = buf[2];

//            j += 3;
//            i += 2;
//        }
//    }
//    rst[j] = '\0';

//    //返回结果
//    pOut = rst;
//    delete[] rst;

//    return;
//}

//std::string character_encode::to_utf8(const wchar_t *buffer, int len)
//{
//    int nChars = ::WideCharToMultiByte(
//        CP_UTF8,
//        0,
//        buffer,
//        len,
//        NULL,
//        0,
//        NULL,
//        NULL);
//    if (nChars == 0)return"";

//    string newbuffer;
//    newbuffer.resize(nChars);
//    ::WideCharToMultiByte(
//        CP_UTF8,
//        0,
//        buffer,
//        len,
//        const_cast<char*>(newbuffer.c_str()),
//        nChars,
//        NULL,
//        NULL);

//    return newbuffer;
//}

//std::string character_encode::to_utf8(const std::wstring& str)
//{
//    return to_utf8(str.c_str(), (int)str.size());
//}

//char* character_encode::UTF_8ToGB2312(const char* utf8)
//{
//    int len = MultiByteToWideChar(CP_UTF8, 0, utf8, -1, NULL, 0);
//    wchar_t* wstr = new wchar_t[len+1];
//    memset(wstr, 0, len+1);
//    MultiByteToWideChar(CP_UTF8, 0, utf8, -1, wstr, len);
//    len = WideCharToMultiByte(CP_ACP, 0, wstr, -1, NULL, 0, NULL, NULL);
//    char* str = new char[len+1];
//    memset(str, 0, len+1);
//    WideCharToMultiByte(CP_ACP, 0, wstr, -1, str, len, NULL, NULL);
//    if(wstr) delete[] wstr;
//    return str;
//}

