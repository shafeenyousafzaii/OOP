#include<iostream>
using namespace std;
struct dateType
{
    int day;
    int month;
    int year;
};  


int main()
{
   dateType d;
    cout<<"Enter the day: ";
    cin>>d.day;
    if(d.day>31)
    {
        cout<<"Invalid day"<<endl;
        return 0; // program will terminate if day is invalid
     
    }
    cout<<"Enter the month: ";
    cin>>d.month;
    if(d.month>12)
    {
        cout<<"Invalid month"<<endl;
        return 0; // program will terminate if month is invalid
      
    }
    cout<<"Enter the year: ";
    cin>>d.year;
    if(d.year>2023)
    {
        return 0; // program will terminate if year is invalid
        
    }
    cout<<"Date: "<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
    return 0;
}