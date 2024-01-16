#include<iostream>
#include<string>
#include"operatoroverloading.h"
using namespace std;
int main()
{
    operatoroverloading obj1(10,20),obj2(20,30),obj3;
    obj3 = obj1 + obj2;
    cout<<"Length of obj3 is : "<<obj3.getlength()<<endl;
    cout<<"Width of obj3 is : "<<obj3.getwidth()<<endl;
    return 0;
}