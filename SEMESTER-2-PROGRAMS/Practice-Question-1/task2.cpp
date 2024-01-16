#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void dataa(string &x,int &y, int &z , int &q);
float taxamont(int &x,int &y,int &z);
int main()
{
    string M_status; int gross_salary,children , pension;
    dataa(M_status , gross_salary , children , pension );
    return 0;
}
void data(string &x, int &y,int &z, int &q)
{
   cout<<"Enter your Maritual Status"<<endl;
   getline(cin,x);
   cin.ignore('\n');
   if (x=="married" || x=="Married")
   {
     cout<<"How many chicldren do you have under the age of 14?"<<endl;
     cin>>z;
     cout<<"Combined salary of both spouses : "<<endl;
     cin>>y;
     cout<<"Enter the percentage you want to contribute to pension fund"<<endl;
     cin>>q;
   }
   else
   {
     cout<<"Enter your gross salary : "<<endl;
     cin>>y;
     cout<<"Enter the percentage you want to contribute to pension fund "<<endl;
     cin>>q;
   }
   
}
void taxamont(int &gross_salary , int &children , int &pension)
{
    float tax;
    if (gross_salary<=20000)
    {
        tax=0;
    }
    else if (gross_salary>20000 && gross_salary<=35000)
    {
        tax=(gross_salary-20000)*0.15;
    }
    else if (gross_salary>35000 && gross_salary<=50000)
    {
        tax=(gross_salary-35000)*0.25+1500;
    }
    else if (gross_salary>50000 && gross_salary<=70000)
    {
        tax=(gross_salary-50000)*0.35+5000;
    }
    else if (gross_salary>70000)
    {
        tax=(gross_salary-70000)*0.45+13000;
    }
    return tax;
}
