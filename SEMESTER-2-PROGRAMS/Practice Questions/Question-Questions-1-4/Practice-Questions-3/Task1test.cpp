#include<iostream>
#include<string>
#include<iomanip>
#include"task1.h"
using namespace std;
int main()
{
    AngleType a;
    int d;
    float m;
    char dir;
    cout<<"Enter the degrees"<<endl;
    cin>>d;
    cout<<"Enter the minutes"<<endl;
    cin>>m;
    cout<<"Enter the direction : 'N' 'n' 'S' 's' 'E' 'e' 'W' 'w"  <<endl;
    cin>>dir;
    a.setAngle(d,m,dir);
    a.displayAngle();
}