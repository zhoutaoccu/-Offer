//==================================================================
// ����ָOffer�����������Թپ������ͱ���⡷����
// ���ߣ�����
//==================================================================

// �����⣺
// ��Ŀ��

#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX 100+10


int main()
{
    freopen("input.txt", "r", stdin);

    /*int a[MAX], n = 0;
    char c;
    while (scanf("%d%c", &a[n++], &c) != EOF && c != ',');//����������
    n--;*/

    /*�̶�n,m�е�����*/
    //int m, n, i, j;
    //int a[MAX], b[MAX];
    //while (scanf("%d%d", &n, &m) != EOF) {//���붨ֵ��������������
    //    for (i = 0; i < n; i++)
    //        scanf("%d", &a[i]);
    //    for (j = 0; j < m; j++)
    //        scanf("%d", &b[j]);
    //}
    int n = 0;
    char c;
    int a[MAX], presum[MAX], sufsum[MAX];
    while (scanf("%d%c", &a[n++], &c) != EOF && c != '\n');
    n--;

    presum[0] = 0;
    for (int i = 1; i < n; i++) presum[i] = presum[i - 1] + a[i - 1];
    sufsum[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) sufsum[i] = sufsum[i + 1] + a[i + 1];

    bool isok = false;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (presum[i] == a[i] && sufsum[i] == a[i])
        {
            isok = true;
            index = i;
            break;
        }
    }
    if (isok == true)
        printf("%d\n", a[index]);
    else
        printf("False");

    return 0;
}
