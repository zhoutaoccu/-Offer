//==================================================================
// 《Leetcode刷题》代码
// 作者：周涛
//==================================================================

// 面试题：在一个数组中找出两个数，使其和为target
// 题目：最捞的解法就是双重遍历O(n^2)，其次就是用哈希表，但是理解起来要花点功夫

#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

#define MAX 100+10

class Solution_0 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j<nums.size(); ++j)
            {
                if (nums[i] + nums[j] == target)
                    return { i, j };
            }
        }
        return { -1, -1 };
    }
};


int main()
{
    freopen("input.txt", "r", stdin);
    int a[MAX], n = 0, target;
    char c;
    while (scanf("%d%c", &a[n++], &c) != EOF && c != '\n'); 
    n--;
    scanf("%d", &target);
    vector<int> nums(a, a + n);
    Solution s;

    vector<int> result;
    result = s.twoSum(nums, target);
    for (int j = 0; j < result.size(); j++) {
        printf("%d ", result[j]);
    }

    



    return 0;
}
