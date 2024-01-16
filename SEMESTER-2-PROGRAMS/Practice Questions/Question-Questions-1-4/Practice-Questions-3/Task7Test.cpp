#include<iostream>
#include<string>
#include"Task7.h"   
using namespace std;
int main()
{
    memberType m;
    string name;
    int id;
    int books;
    float amount;
    cout<<"Enter the name of the member"<<endl;
    cin>>name;
    cout<<"Enter the your id of the member"<<endl;
    cin>>id;
    cout<<"Enter the number of books bought"<<endl;
    cin>>books;
    cout<<"Enter the amount spent"<<endl;
    cin>>amount;
    m.setData(name,id,books,amount);
    m.displayData();
    cout<<"After updating the data"<<endl;
    m.updateData();
    cout<<"Updated  data"<<endl;
    m.displayData();
    return 0;

}