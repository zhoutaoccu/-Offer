//==================================================================
// ��Leetcodeˢ�⡷����
// ���ߣ�����
//==================================================================

// �����⣺����ƥ����
// ��⣺�ö�ջ��ʵ������ƥ�䣬ƥ���ȥ�������߻�ѹ�ڶ�ջ���������ջΪ�գ�������ƥ��

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
                char tempBrack = bracketMatch.back(); // ȡ���һ���ַ�
                bracketMatch.pop_back(); // Ĭ����Ϊ��ƥ���
                if (s[i] == ')' && tempBrack != '(') { // ��ƥ��������˳�
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
    //while (scanf("%s", &a[n++], &c) != EOF && c != '\n');//����������
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
