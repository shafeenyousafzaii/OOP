#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
float calculate_monthyly_paycheck(float *ptr);
int main()
{
    float *ptr;
    float totalexpenses[7];
    ptr=totalexpenses;
    float gross_Salary;
    string Name;
    cout<<"Enter Your gross Salary "<<endl;
    cin>>gross_Salary;
    totalexpenses[0]=gross_Salary;
    cout<<"Enter your Name : "<<endl;
    cin>>Name;
    // cout<<endl;
    // cin.ignore('\sn');
    // cout<<endl;s
    calculate_monthyly_paycheck(ptr);
    cout<<"Name :......................"<<Name<<endl;
    cout<<"Gross Salary :..............$"<<totalexpenses[0]<<endl;
    cout<<"Federal Income Tax :........$"<<totalexpenses[1]<<endl;
    cout<<"State Tax :.................$"<<totalexpenses[2]<<endl;
    cout<<"Social Security Tax :.......$"<<totalexpenses[3]<<endl;
    cout<<"Medicare/Medicaid Tax :.....$"<<totalexpenses[4]<<endl;
    cout<<"Pension Plan :..............$"<<totalexpenses[5]<<endl;
    cout<<"Health Insurance :..........$"<<totalexpenses[6]<<endl;
    cout<<"Net Pay :...................$"<<totalexpenses[7]<<endl;
    return 0;
}
float calculate_monthyly_paycheck(float *gross_salary)
{
    const float federalincometax=0.15;
    const float StateTax=0.035;
    const float Social_security_tax=0.0575;
    const float Medicare_tax=0.0275;
    const float Pension_Plan=0.05;
    const float Insurance=75;
    gross_salary[1]=gross_salary[0]*federalincometax;
    gross_salary[2]=gross_salary[0]*StateTax;
    gross_salary[3]=gross_salary[0]*Social_security_tax;
    gross_salary[4]=gross_salary[0]*Medicare_tax;
    gross_salary[5]=gross_salary[0]*Pension_Plan;
    gross_salary[6]=Insurance;
    gross_salary[7]= gross_salary[0]-gross_salary[1]-gross_salary[2]-gross_salary[3]-gross_salary[4]-gross_salary[5]-gross_salary[6];
    return *gross_salary;
    


}