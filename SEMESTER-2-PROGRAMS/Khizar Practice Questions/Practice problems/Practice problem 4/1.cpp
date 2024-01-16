#include<iostream>
using namespace std;
class SavingAccount{

static  float annual_interest_rate;
float savingBalance;
public:
void calculateMonthlyInterest();
SavingAccount(float n);
static void set_interest(float n);
void set_Balance(float n);
void print() const;
};
SavingAccount :: SavingAccount(float n=0)
{
    set_Balance(n);
}
void SavingAccount :: calculateMonthlyInterest(){
   int n=(savingBalance*annual_interest_rate)/12;
   savingBalance=savingBalance+n;
}
void SavingAccount::set_Balance(float n)
{
    savingBalance=n;
} 
void SavingAccount::set_interest(float n)
{
    annual_interest_rate=n;
}
float SavingAccount :: annual_interest_rate=0;
void SavingAccount ::print() const
{
    cout<<"The total balance after  "<<annual_interest_rate<<" % interest is RS: "<<savingBalance<<endl;
}

int main()
{
    SavingAccount saver1(3000.00),saver2(2000.00);
    saver1.set_interest(3);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    saver1.print();
    saver2.print();
    saver1.set_interest(4);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    saver1.print();
    saver2.print();
    


}
