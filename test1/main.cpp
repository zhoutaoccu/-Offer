//#include<iostream>
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
    printf("%d\n",sizeof(std1));
}