#include<iostream>
#include<string>
#include<iomanip>
#include"task2.h"
using namespace std;
int main()
{
    DateType d;
    int date;
    int month;
    int year;
    cout<<"Enter the date"<<endl;
    cin>>date;
    cout<<"Enter the month"<<endl;
    cin>>month;
    cout<<"Enter the year"<<endl;
    cin>>year;
    d.setDate(date,month,year);
    d.displayDate();
}