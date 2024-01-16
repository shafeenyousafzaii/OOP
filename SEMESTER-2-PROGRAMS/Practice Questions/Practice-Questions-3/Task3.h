#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class employeeType
{
private:
    int emp_num;
    float emp_comp;
public:
    employeeType(int emp_num=0,float emp_comp=0.0);
    // ~employeeType();
    void setEmployee(int emp_num,float emp_comp);
    void displayEmployee();
};

employeeType::employeeType(int emp_num,float emp_comp)
{
    this->emp_num=emp_num;
    this->emp_comp=emp_comp;
}
void employeeType::setEmployee(int emp_num,float emp_comp)
{
    this->emp_num=emp_num;
    this->emp_comp=emp_comp;
}
void employeeType::displayEmployee()
{
    cout<<"Employee Number : "<<emp_num<<endl;
    cout<<"Employee Compensation : "<<emp_comp<<endl;
}

