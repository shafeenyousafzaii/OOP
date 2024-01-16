#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class memberType
{
private:
    string name;
    int MemberID;
    int no_of_books_bought;
    float amount_spent;
public:
    memberType(string name=" " , int MemberID=0 , int no_of_books_bought=0 , float amount_spent=0.0);
    void setData(string name , int MemberID , int no_of_books_bought , float amount_spent);
    void displayData();
    void getData();
    void updateData();
    void ShowName();
    // ~memberType();
};

memberType::memberType(string name , int MemberID , int no_of_books_bought , float amount_spent)
{
    this->name=name;
    this->MemberID=MemberID;
    this->no_of_books_bought=no_of_books_bought;
    this->amount_spent=amount_spent;
}
void memberType::setData(string name , int MemberID , int no_of_books_bought , float amount_spent)
{
    this->name=name;
    this->MemberID=MemberID;
    this->no_of_books_bought=no_of_books_bought;
    this->amount_spent=amount_spent;
}
void memberType::ShowName()
{
    cout<<name<<endl;
}
void memberType::displayData()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Member ID : "<<MemberID<<endl;
    cout<<"Number of Books Bought : "<<no_of_books_bought<<endl;
    cout<<"Amount Spent : "<<amount_spent<<endl;
}
void memberType::getData()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Member ID : "<<MemberID<<endl;
    cout<<"Number of Books Bought : "<<no_of_books_bought<<endl;
    cout<<"Amount Spent : "<<amount_spent<<endl;
    
}
void memberType::updateData()
{
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Member ID : ";
    cin>>MemberID;
    cout<<"Enter Number of Books Bought : ";
    cin>>no_of_books_bought;
    cout<<"Enter Amount Spent : ";
    cin>>amount_spent;
}
