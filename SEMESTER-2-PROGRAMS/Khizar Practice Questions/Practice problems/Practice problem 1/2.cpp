#include <bits/stdc++.h>
using namespace std;
void tax_amount(int TI)
{   cout<<"Your payable tax amont is:";
    if(TI>=0 && TI<=15000)
    {
        float tax=(TI*15)/100;
        cout<<tax<<"$";
    }
    else if (TI>=15001 && TI<=40000)
    {
        float tax=2250+(TI*25)/100;
        cout<<tax<<"$";
    }
     else if (TI>=40000)
    {
        float tax=8460+(TI*35)/100;
        cout<<tax<<"$";
    }
}
void get_Data()
{
    cout<<"If you are married Press Y else N"<<endl;
    char M_S;
    cin>>M_S;
    if(M_S=='Y'||M_S=='y')
    {
        cout<<"Enter the number of children under 14 years"<<endl;
        int CH;
        cin>>CH;
        cout<<"Enter your Gross salary"<<endl;
        int GS;
        cin>>GS;
        cout<<"Enter  Percentage of gross income contributed to a pension fund(1 to 6%)"<<endl;
        float Per;
        cin>>Per;
         GS=GS-7000;
         float p=(GS*Per)/100;
         int TI=GS-p;
         tax_amount(TI);
    }
    else
    {
        cout<<"Enter your Gross salary"<<endl;
        int GS;
        cin>>GS;
        cout<<"Enter  Percentage of gross income contributed to a pension fund (1 to 6%) "<<endl;
        float Per;
        cin>>Per;
         GS=GS-4000;
         float p=(GS*Per)/100;
         int TI=GS-p;
          tax_amount(TI);
    }
}

int main()
{
  get_Data();
    
}