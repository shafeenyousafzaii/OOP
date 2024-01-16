#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class romanType
{
private:
    string roman;
    int decimal;
public:
    romanType(string roman="" , int decimal = 0 );
    void setRoman(string roman);
    void setDecimal(int decimal);
    void displayRoman();
    void convertRoman();
    void displayDecimal();
    // ~romanType();
};
romanType::romanType(string roman , int decimal)
{
    this->roman=roman;
    this->decimal=decimal;
}
void romanType::setRoman(string roman)
{
    this->roman=roman;
}
void romanType::setDecimal(int decimal)
{
    this->decimal=decimal;
}
void romanType::displayRoman()
{
    cout<<"Roman : "<<roman<<endl;
    cout<<"Decimal : "<<decimal<<endl;
}
void romanType::convertRoman()
{
    for (int i = 0; i < roman.size(); i++)
    {
         if (roman[i]=='M')
        {
            decimal+=1000;
        }
        else if (roman[i]=='D')
        {
            decimal+=500;
        }
        else if (roman[i]=='C')
        {
            decimal+=100;
        }
         else if (roman[i]=='L')
        {
            decimal+=50;
        }
        else if (roman[i]=='X')
        {
            decimal+=10;
        }
        else if (roman[i]=='V')
        {
            decimal+=5;
        }
        else if (roman[i]=='I')
        {
            decimal+=1;
        }         
    }
    
    
}
void romanType::displayDecimal()
{
    cout<<"Decimal : "<<decimal<<endl;
}

