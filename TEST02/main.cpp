//==================================================================
// 《剑指Offer——名企面试官精讲典型编程题》代码
// 作者：周涛
//==================================================================

// 面试题：
// 题目：

#include<iostream>
class A {
private:
    int value;
public:
    A(int n) { value = n; }
    A(const A& other) { value = other.value; }

    void Print() { std::cout << value << std::endl; }
};

int main(int argc, char* argv[])
{
    A a(10); //A a=10;
    A b = a;
    a.Print();
    b.Print();
    return 0;
}