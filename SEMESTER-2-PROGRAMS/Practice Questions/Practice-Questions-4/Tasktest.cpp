#include<iostream>
#include<string>
#include"task.h"
using namespace std;
int main()
{
    SavingAccountType s1(2000),s2(3000);
    s1.modifyInterestRate(3);
    s1.calculateMonthlyInterest();
    s2.calculateMonthlyInterest();
    cout<<"S1 balance is "<<s1.getBalance()<<endl;
    cout<<"S2 balance is "<<s2.getBalance()<<endl;
    s2.modifyInterestRate(4);
    s1.calculateMonthlyInterest();
    s2.calculateMonthlyInterest();
    cout<<"S1 balance is "<<s1.getBalance()<<endl;
    cout<<"S2 balance is "<<s2.getBalance()<<endl;
    
    return 0;


}