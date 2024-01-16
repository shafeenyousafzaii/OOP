#include <bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"Enter Employe Name:";
  string name;
  getline(cin,name);
  cout<<"Enter Employ Gross Sallery"<<endl;
  int sallery;
  cin>>sallery;
  float FD=(sallery*15.0)/100;
  float ST=(sallery*3.5)/100;
  float SST=(sallery*5.75)/100;
  float MT=(sallery*2.75)/100;
  float PP=(sallery*5)/100;
  float HI=75.00;
  float total=FD+ST+MT+PP+HI+SST;
  float NP=sallery-total;
  cout<<name;
  cout<<endl;
  cout<<left<<setw(50)<<setprecision(5)<<setfill('.')<<"Gross Amount:"<<"$"<<sallery<<endl;
  cout<<left<<setw(50)<<setfill('.')<<"Federal Tax:"<<"$"<<FD<<endl;
  cout<<left<<setw(50)<<setfill('.')<<"State Tax:"<<"$"<<ST<<endl;
  cout<<left<<setw(50)<<setfill('.')<<"Social Security Tax:"<<"$"<<SST<<endl;
  cout<<left<<setw(50)<<setfill('.')<<"Medicare/Medicaid Tax:"<<"$"<<MT<<endl;
  cout<<left<<setw(50)<<setfill('.')<<"Pension Plan:"<<"$"<<PP<<endl;
  cout<<left<<setw(50)<<setfill('.')<<"Health Insurance:"<<"$"<<HI<<endl;
  cout<<left<<setw(50)<<setfill('.')<<"Net Pay:"<<"$"<<NP<<endl;


}