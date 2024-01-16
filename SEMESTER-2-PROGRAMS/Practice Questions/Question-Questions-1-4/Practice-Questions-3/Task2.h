#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class DateType
{
private:
   int date;
   int month;
   int year;
public:
    DateType(int date= 0 , int month=0 , int year=0);
    void setDate(int date , int month , int year);
    void displayDate();

};

DateType::DateType(int date , int month , int year)
{
    this->date=date;
    this->month=month;
    this->year=year;
}
void DateType::setDate(int date , int month , int year)
{
    this->date=date;
    this->month=month;
    this->year=year;
}
void DateType::displayDate()
{
    cout<<date<<"/"<<month<<"/"<<year<<endl;
}

