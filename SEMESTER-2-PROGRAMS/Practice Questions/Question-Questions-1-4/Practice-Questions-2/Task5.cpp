#include<iostream>
#include<iomanip>
using namespace std;
struct sterling
{
    int pounds;
    int shillings;
    int pence;
};
void setData(sterling &s)
{
    cout<<"Enter the pounds: ";
    cin>>s.pounds;
    cout<<"Enter the shillings: ";
    cin>>s.shillings;
    cout<<"Enter the pence: ";
    cin>>s.pence;
}
void find_shillings(double x,sterling &s)
{
    s.shillings =(int) (x*100)-(s.pounds*100);
}
void find_pounds(double x,sterling &s)
{
    s.pounds = (int)x;
}
void find_pence(double x,sterling &s)
{
    s.pence = (int)((x*100)-(s.pounds*100)-(s.shillings));
}
int main()
{
    double Amount_newStyle;
    cout<<"Enter the amount in new style: "<<endl;
    cin>>Amount_newStyle;
    sterling s;
    setData(s);
    find_pounds(Amount_newStyle,s);
    find_shillings(Amount_newStyle,s);
    find_pence(Amount_newStyle,s);
    cout<<"Amount in old style: "<<s.pounds<<"."<<s.shillings<<"."<<s.pence<<setprecision(2)<<endl;
    

}