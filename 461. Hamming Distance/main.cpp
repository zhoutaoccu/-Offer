//==================================================================
// 《Leetcode刷题》代码
// 作者：周涛
//==================================================================

// 面试题：hamming距离计算
// 题目：难点在与每位按位异或之后，怎么计算1的数量

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
            n = n & (n - 1);//与n-1与运算，每一次计算把后面记完数的置零
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
