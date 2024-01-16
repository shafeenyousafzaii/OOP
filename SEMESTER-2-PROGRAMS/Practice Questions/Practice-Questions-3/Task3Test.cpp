#include<iostream>
#include<string>
#include<iomanip>
#include"task3.h"
using namespace std;
int main()
{
    employeeType e[3];
    int emp_num;
    float emp_comp;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the employee number"<<endl;
        cin>>emp_num;
        cout<<"Enter the employee compensation"<<endl;
        cin>>emp_comp;
        e[i].setEmployee(emp_num,emp_comp);
    }
    for (int  i = 0; i < 3; i++)
    {
        e[i].displayEmployee();
    }
    
}