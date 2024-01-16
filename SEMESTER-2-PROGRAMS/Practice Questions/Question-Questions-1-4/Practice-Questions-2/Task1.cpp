#include<iostream>
using namespace std;
struct employeeType
{
    int employeeNUM;
    float employeeCompensation;
};
int main()
{
    employeeType emp[3];
    emp[0].employeeNUM = 1;
    emp[0].employeeCompensation = 100;
    emp[1].employeeNUM = 2;
    emp[1].employeeCompensation = 200;
    emp[2].employeeNUM = 3;
    emp[2].employeeCompensation = 300;
    for(int i=0;i<3;i++)
    {
        cout<<"Employee Number: "<<emp[i].employeeNUM<<endl;
        cout<<"Employee Compensation: "<<emp[i].employeeCompensation<<endl;
    }
}
