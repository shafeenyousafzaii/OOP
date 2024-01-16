#include<iostream>
#include<string>
#include<iomanip>
#include"task4.h"
using namespace std;
int main()
{
    employeeType e[2];
    int emp_num;
    float emp_comp;
    for (int i = 0; i < 2; i++)
    {
        int date,month,year;
        cout<<"Enter the employee number"<<endl;
        cin>>emp_num;
        cout<<"Enter the employee compensation"<<endl;
        cin>>emp_comp;
        cout<<"Enter the employee join date"<<endl;
        cin>>date;
        cout<<"Enter the employee join month"<<endl;
        cin>>month;
        cout<<"Enter the employee join year"<<endl;
        cin>>year;
        e[i].setEmployee(emp_num,emp_comp,date,month,year);
    }
    for (int  i = 0; i < 2; i++)
    {
        e[i].displayEmployee();
    }
    
}