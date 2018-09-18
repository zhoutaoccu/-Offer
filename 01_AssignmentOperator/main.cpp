//==================================================================
// 《剑指Offer——名企面试官精讲典型编程题》代码
// 作者：周涛
//==================================================================

// 面试题1：赋值运算符重载（=）
// 题目：CMyString类型声明，添加赋值运算符函数

#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX 100+10

class CMyString {
public:
    CMyString(const char* pData = nullptr);//析构函数声明
    CMyString(const CMyString& str);
    ~CMyString(void);

    CMyString& operator = (const CMyString& str);
    void Print();
private:
    char* m_pData;
};

CMyString::CMyString(const char* pData) {
    //m_pData = pData; 实数才能直接赋值
    if (pData == nullptr) {
        m_pData = new char;
        m_pData[0]='\0';
    }
    else{
        m_pData = new char[strlen(pData) + 1];
        strcpy(m_pData,pData);
    }
}

CMyString::CMyString(const CMyString& str) {
    //m_pData = str.m_pData; 实数才能直接赋值，字符串指针要申请空间，然后strcpy
    m_pData = new char[strlen(str.m_pData) + 1];
    strcpy(m_pData, str.m_pData);
}

CMyString::~CMyString(void) {
    delete[] m_pData;
}

void CMyString::Print() {
    printf("%s\n",m_pData);
}

CMyString& CMyString::operator = (const CMyString& str) {
    //if (this == &str)//看是否是同一字符
    //    return *this;//如果已经相等就不用赋值，直接返回当前值
    //delete[] m_pData;//释放字符动态数组
    //m_pData = nullptr;
    ////m_pData = new char[strlen(str.m_pData) + 1];
    //m_pData = new char[sizeof(str.m_pData) / sizeof(char) + 1];

    //strcpy(m_pData, str.m_pData);

    //return *this;//记得返回当前被赋值

    //考虑内存不足，无法申请的情况，保证异常安全性原则。如果内存不足，就不执行赋值了
    if (this != &str) {
        CMyString strTemp(str);//如果申请成功，说明还有内存,它的内存申请和释放依靠构造函数和析构函数
        char* pTemp = strTemp.m_pData;
        strTemp.m_pData = m_pData;
        m_pData = pTemp;
    }
    return *this;
}

int main()
{
    const char* test_str = "abs";
    CMyString str1(test_str), str2, str3;
    str1.Print();
    str1 = str1;
    str2 = str1;
    str3 = str2 = str1;
    str1.Print();
    str2.Print();
    str3.Print();

    return 0;
}
