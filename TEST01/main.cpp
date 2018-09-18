//==================================================================
// 《剑指Offer——名企面试官精讲典型编程题》代码
// 作者：周涛
//==================================================================

// 面试题：
// 题目：

#include<cstdio>

class student
{
    //int name;
public:
    student();
    ~student();
};

student::student()
{}
student::~student()
{}

int main() {
    student std1;
    printf("%d\n", sizeof(std1));
}