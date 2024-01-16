#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void convert_12_to_24(string time,string am_pm);
void convert_24_to_12(string time,string am_pm);
int main()
{
    int choice;
    while(choice!=3)
    {
    cout<<"Choose one of the following "<<endl;
    cout<<"1. Convert 24 hour notation to 12 hour"<<endl;
    cout<<"2. Convert 12 hour notation to 24 hour"<<endl;
    cin>>choice;
    if (choice==1)
    {
        cout<<"Enter the time in 24 hour notation FORMAT (00:00) \t AM OR PM"<<endl;
        string time;
        cin>>time;
        cout<<"Enter AM or PM"<<endl;
        string am_pm;
        cin>>am_pm;
        convert_24_to_12(time,am_pm);

    }
    else if(choice ==2)
    {
        cout<<"Enter the time in 12 hour notation FORMAT (00:00) \t AM OR PM"<<endl;
        string time;
        cin>>time;
        cout<<"Enter AM or PM"<<endl;
        string am_pm;
        cin>>am_pm;
        convert_12_to_24(time,am_pm);
    }
}

}
void convert_12_to_24(string TIME , string AMPM)
{
    // 12:00:00AM
    string hour=TIME.substr(0,2); // 12
    string minutes=TIME.substr(3,2); // 00
    int hour_int=stoi(hour); // 12
    int minutes_int=stoi(minutes); // 00
    if (AMPM=="AM") 
    {
        if (hour_int==12)
        {
            hour_int=0; // 00
        }
        
    }
    else if (AMPM=="PM")
    {
        if (hour_int!=12)
        {
            hour_int+=12; // Time+12;
        }
        
    }
    cout<<setw(2)<<setfill('0')<<hour_int<<":"<<setw(2)<<setfill('0')<<minutes_int<<endl;
} 
void convert_24_to_12(string TIME , string AMPM)
{
    string hour;
    hour = TIME.substr(0,2);
    string minutes;
    minutes = TIME.substr(3,2);
    if(stoi(hour) < 12)
    {
        // return TIME+"AM";
        cout<<TIME<<"AM";
    }
    else if(stoi(hour) == 12)
    {
        // return TIME+"PM";
        cout<<TIME<<"PM";
    }
    else
    {
        cout<<to_string(stoi(hour)-12)+TIME.substr(2)<<"PM"<<endl;
    }
    

}