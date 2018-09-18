//==================================================================
// ����ָOffer�����������Թپ������ͱ���⡷����
// ���ߣ�����
//==================================================================

// ������1����ֵ��������أ�=��
// ��Ŀ��CMyString������������Ӹ�ֵ���������

#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX 100+10

class CMyString {
public:
    CMyString(const char* pData = nullptr);//������������
    CMyString(const CMyString& str);
    ~CMyString(void);

    CMyString& operator = (const CMyString& str);
    void Print();
private:
    char* m_pData;
};

CMyString::CMyString(const char* pData) {
    //m_pData = pData; ʵ������ֱ�Ӹ�ֵ
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
    //m_pData = str.m_pData; ʵ������ֱ�Ӹ�ֵ���ַ���ָ��Ҫ����ռ䣬Ȼ��strcpy
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
    //if (this == &str)//���Ƿ���ͬһ�ַ�
    //    return *this;//����Ѿ���ȾͲ��ø�ֵ��ֱ�ӷ��ص�ǰֵ
    //delete[] m_pData;//�ͷ��ַ���̬����
    //m_pData = nullptr;
    ////m_pData = new char[strlen(str.m_pData) + 1];
    //m_pData = new char[sizeof(str.m_pData) / sizeof(char) + 1];

    //strcpy(m_pData, str.m_pData);

    //return *this;//�ǵ÷��ص�ǰ����ֵ

    //�����ڴ治�㣬�޷�������������֤�쳣��ȫ��ԭ������ڴ治�㣬�Ͳ�ִ�и�ֵ��
    if (this != &str) {
        CMyString strTemp(str);//�������ɹ���˵�������ڴ�,�����ڴ�������ͷ��������캯������������
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
