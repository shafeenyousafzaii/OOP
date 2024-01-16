#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
int main()
{
    double Value;int totalValue; float percentage;
    cout<<"Enter percentage of a number : "<<endl;
    cin>>Value;
    cout<<"Enter a number : "<<endl;
    cin>>totalValue;
    percentage=(Value/totalValue)*100;
    cout<<"Percentage of a number is : "<<percentage<<endl;
    return 0;
    
}