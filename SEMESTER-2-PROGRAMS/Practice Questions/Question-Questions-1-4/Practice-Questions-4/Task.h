#include<iostream>
#include<string>
using namespace std;
class SavingAccountType
{
private:
    static int annulaInterestRate;
    int savingsBalance;

public:
    SavingAccountType(int balance=0);
    static void modifyInterestRate(int balance);
    void calculateMonthlyInterest();
    int getBalance();
    ~SavingAccountType();
};
int SavingAccountType::annulaInterestRate=0;
SavingAccountType::SavingAccountType(int balance)
{
    savingsBalance=balance;
}
void SavingAccountType::modifyInterestRate(int balance)
{
    annulaInterestRate=balance;
}
void SavingAccountType::calculateMonthlyInterest()
{
    savingsBalance=savingsBalance+(savingsBalance*annulaInterestRate)/12;
}
SavingAccountType::~SavingAccountType()
{
    cout<<"Destructor called"<<endl;
}
int SavingAccountType::getBalance()
{
    return savingsBalance;
}