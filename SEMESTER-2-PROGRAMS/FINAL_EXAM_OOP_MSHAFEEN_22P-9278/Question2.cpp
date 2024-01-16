#include<iostream>
#include<string>
#include<vector>
#include"Question2.h"
using namespace std;
int main()
{
    UserAccount *p[2];
    int choice;
    while(choice!=0)
    {
    cout<<"Choose your Account Type"<<endl;
    cout<<"1 : Personal Account \n2: Business Account"<<endl;
    cin>>choice;
    if (choice==1)
    {
        p[0]={
            new PersonalAccount
        };
    }
    else if(choice ==2)
    {
        p[1]={
          new BusinessAccount     
        };
    }
    if (choice==1)
    {
        for (int i = 0; i < 2; i++)
    {
        p[i]->addPost();

        p[i]->DisplayInfo();

        p[i]->viewAllPost();
    }
    }
    // delete [] p;s
    
    
    

    }
    return 0;
}
