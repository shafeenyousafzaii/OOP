#include<iostream>
using namespace std;
enum etype{labourer,secretary,manager,accountant,executive,researcher};
struct dateType
{
    int day;
    int month;
    int year;
};  
struct employeeType
{
    int employeeNUM;
    float employeeCompensation;
    dateType date;
};
int main()
{
    employeeType e1;
    e1.employeeNUM = 1;
    e1.employeeCompensation = 100;
    e1.date.day = 1;
    e1.date.month = 1;
    e1.date.year = 2021;
    cout<<"Employee Number: "<<e1.employeeNUM<<endl;
    cout<<"Employee Compensation: "<<e1.employeeCompensation<<endl;
    cout<<"Date: "<<e1.date.day<<"/"<<e1.date.month<<"/"<<e1.date.year<<endl;
    return 0;
    
}