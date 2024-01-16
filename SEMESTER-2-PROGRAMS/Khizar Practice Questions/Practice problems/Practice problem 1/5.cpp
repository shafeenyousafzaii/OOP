#include <iostream>
#include <string>
using namespace std;
void display_result12to24(int hours,int minutes,char ampm)
{
      if (ampm == 'A' && hours <= 11)
        cout << hours << ":" << minutes<<endl;
    else if (ampm == 'P' && hours == 12)
        cout << 12 << ":" << minutes<<endl;
    else if (ampm == 'P' && hours > 12);
    cout << hours + 12 << ":" << minutes<<endl;
}
void display_result24to12(int hours,int minutes)
{
     if (hours < 12)
        cout << hours << " " << minutes << "A.M" << endl;
    else if (hours == 12)
        cout << hours << " " << minutes << "P.M" << endl;
    else if (hours > 12)
    cout << hours - 12 << " " << minutes << "P.M" << endl;
}
void inputfor12to24(int hours,int minutes,char ampm)
{
     cout << "Enter any number of Hours & Minutes while considring the AM/PM [where 'A' stands for AM and 'P' stands for PM]  to be converted to 24 hours Notation " << endl;
    
    cin >> hours;
    cin >> minutes;
    cin >> ampm;
    display_result12to24(hours,minutes,ampm);
}

void inputfor24to12(int hours,int minutes)
{
    cout << "Enter  number of Hours & Minutes to be converted to 12 hours Notation" << endl;
    cin >> hours;
    cin >> minutes;
    
display_result24to12(hours,minutes);
}
int display_choice()
{
    cout<<"..................Menu..................."<<endl;
    cout<<"1.Convert into 24-hour notation"<<endl;
    cout<<"2.Convert into 12-hour notation"<<endl;
    cout<<"Select your Option"<<endl;
    int choice;
    cin>>choice;
    return choice;
}

int main()
{  int hours=0,minutes=0;
   char ampm;
    while(1)
    {
    int choice;
    choice=display_choice();
    if (choice==1)
    {
        inputfor12to24(hours,minutes,ampm);
    }
    else if(choice==2)
    {
       inputfor24to12(hours,minutes);
    }
    else
    break;
    }
}