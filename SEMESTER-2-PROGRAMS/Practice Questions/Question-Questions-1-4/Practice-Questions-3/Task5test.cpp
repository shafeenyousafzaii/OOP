#include<iostream>
#include<string>
#include<iomanip>
#include"task5.h"
using namespace std;
int main()
{
    romanType r;
    string roman;
    cout<<"Enter a ROMAN numeral to find its decimal equivalent"<<endl;
    cin>>roman;
    r.setRoman(roman);
    r.displayRoman();
    r.convertRoman();
    cout<<"After conversion"<<endl;
    r.displayDecimal();
    return 0 ;

}