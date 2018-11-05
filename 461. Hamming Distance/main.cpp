//==================================================================
// ��Leetcodeˢ�⡷����
// ���ߣ�����
//==================================================================

// �����⣺hamming�������
// ��Ŀ���ѵ�����ÿλ��λ���֮����ô����1������

#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 100+10

class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist = 0, n = x ^ y;
        while (n) {
            dist++;
            n = n & (n - 1);//��n-1�����㣬ÿһ�μ���Ѻ��������������
        }
        return dist;
    }
};


int main()
{
    freopen("input.txt", "r", stdin);
    int x, y;
    Solution s;
    int result;

    while (scanf("%d %d", &x, &y) != EOF){
        result = s.hammingDistance(x, y);
        printf("%d\n", result);
    }


    return 0;
}
