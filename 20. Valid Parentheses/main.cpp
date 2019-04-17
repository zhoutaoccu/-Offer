//==================================================================
// 《Leetcode刷题》代码
// 作者：周涛
//==================================================================

// 面试题：括号匹配检测
// 题解：用堆栈来实现括号匹配，匹配就去掉，否者积压在堆栈，如果最后堆栈为空，则括号匹配

#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

const unsigned int MAX = 100 + 10;

class Solution {
public:
    bool isValid(string s) {
        vector<char> bracketMatch;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                bracketMatch.push_back(s[i]);
            }
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if (bracketMatch.empty()) {
                    return 0;
                }
                char tempBrack = bracketMatch.back(); // 取最后一个字符
                bracketMatch.pop_back(); // 默认认为是匹配的
                if (s[i] == ')' && tempBrack != '(') { // 不匹配则结束退出
                    return false;
                }
                if (s[i] == '}' && tempBrack != '{') {
                    return false;
                }
                if (s[i] == ']' && tempBrack != '[') {
                    return false;
                }
            }
        }
        return (bracketMatch.empty());
    }
};

int main()
{
    // freopen("input.txt", "r", stdin);
    //char a[MAX], n = 0;
    //char c;
    //while (scanf("%s", &a[n++], &c) != EOF && c != '\n');//不定长数组
    //n--;
    //vector<char> str_s(a, a + n);
    Solution s;

    string str = "[][]()(){()[{}}";
    // cin >> str;
    bool result;
    result = s.isValid(str);
    // cout<<result<<endl;
    printf("%d\n", result);
    


    return 0;
}
