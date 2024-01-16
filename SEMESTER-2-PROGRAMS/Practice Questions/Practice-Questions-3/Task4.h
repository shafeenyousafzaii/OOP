// Task4.h
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
enum etype{labourer,secretary,manager,accountant,executive,researcher};
//-----------------------------------DATE TYPE
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

// ---------------------- EMPLOYEE TYPE
class employeeType
{
private:
    int emp_num;
    float emp_comp;
    DateType emp_hire_date;
    etype emp;
public:
    employeeType(int emp_num=0,float emp_comp=0.0 , int day=0 , int month = 0 , int year = 0 );
    void setEmployee(int emp_num,float emp_comp , int day , int month , int year);
    void displayEmployee();
    // ~employeeType();

};

employeeType::employeeType(int emp_num,float emp_comp , int day , int month , int year):emp_hire_date(day,month,year)
{
    this->emp_num=emp_num;
    this->emp_comp=emp_comp;
}

void employeeType::setEmployee(int emp_num,float emp_comp , int day , int month , int year)
{
    this->emp_num=emp_num;
    this->emp_comp=emp_comp;
    emp_hire_date.setDate(day,month,year);
    cout<<"Choose from the following options: "<<endl;
    cout<<"Press l or L for labourer"<<endl;
    cout<<"Press s or S for secretary"<<endl;
    cout<<"Press m or M for manager"<<endl;
    cout<<"Press a or A for accountant"<<endl;
    cout<<"Press e or E for executive"<<endl;
    cout<<"Press r or R for researcher"<<endl;
    char choice;
    cin>>choice;
    switch (choice)
    {
    case 'l':
    case 'L':
        emp = labourer;
        break;
    case 's':
    case 'S':
        emp = secretary;
        if (emp==secretary)
        
        break;
    case 'm':
    case 'M':
        emp = manager;
    
        break;
    case 'a':
    case 'A':
        emp = accountant;
        
        break;
    case 'e':
    case 'E':
        emp = executive;
        
        break;
    case 'r':
    case 'R':
        emp = researcher;
        
        
        break;
        
    
    default:
        break;
    }

}
void employeeType::displayEmployee()
{
    cout<<"Employee Number : "<<emp_num<<endl;
    cout<<"Employee Compensation : "<<emp_comp<<endl;
    cout<<"Employee Hire Date : "<<endl;
    emp_hire_date.displayDate();
        if (emp==labourer)
        {
            cout<<"Employee Type: Labourer"<<endl;
        }
       
        else if (emp==secretary)
        {
            cout<<"Employee Type: Secretary"<<endl;
        }
   
        else if (emp==manager)
        {
            cout<<"Employee Type: Manager"<<endl;
        }
 
        else if (emp==accountant)
        {
            cout<<"Employee Type: Accountant"<<endl;
        }
   
        else if (emp==executive)
        {
            cout<<"Employee Type: Executive"<<endl;
        }
     
        else if (emp==researcher)
        {
            cout<<"Employee Type: Researcher"<<endl;
        }
   
    
}

