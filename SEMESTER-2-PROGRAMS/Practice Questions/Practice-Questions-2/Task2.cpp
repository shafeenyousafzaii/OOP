#include<iostream>
using namespace std;
enum etype{labourer,secretary,manager,accountant,executive,researcher};
int main()
{
    etype emp;
    cout<<"Choose from the following options: "<<endl;
    cout<<"Press l or L for labourer"<<endl;
    cout<<"Press s or S for secretary"<<endl;
    cout<<"Press m or M for manager"<<endl;
    cout<<"Press a or A for accountant"<<endl;
    cout<<"Press e or E for executive"<<endl;
    cout<<"Press r or R for researcher"<<endl;
    char choice;
    cin>>choice;
    switch (choice)
    {
    case 'l':
    case 'L':
        emp = labourer;
        if (emp==labourer)
        {
            cout<<"Employee Type: Labourer"<<endl;
        }
        break;
    case 's':
    case 'S':
        emp = secretary;
        if (emp==secretary)
        {
            cout<<"Employee Type: Secretary"<<endl;
        }
        
        break;
    case 'm':
    case 'M':
        emp = manager;
        if (emp==manager)
        {
            cout<<"Employee Type: Manager"<<endl;
        }
        break;
    case 'a':
    case 'A':
        emp = accountant;
        if (emp==accountant)
        {
            cout<<"Employee Type: Accountant"<<endl;
        }
        
        break;
    case 'e':
    case 'E':
        emp = executive;
        if (emp==executive)
        {
            cout<<"Employee Type: Executive"<<endl;
        }
        break;
    case 'r':
    case 'R':
        emp = researcher;
        if (emp==researcher)
        {
            cout<<"Employee Type: Researcher"<<endl;
        }
        
        break;
        
    
    default:
        break;
    }
}