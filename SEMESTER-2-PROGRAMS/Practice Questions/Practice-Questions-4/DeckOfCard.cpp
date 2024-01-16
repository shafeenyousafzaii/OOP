#include<iostream>
#include<string>
#include"DeckOfcard.h"
using namespace std;
int main()
{
    DecofCards d;
    d.shuffle();
    int x=0;
    // do
    // {
    //     cout<<x;
    //     cout<<": "<<d.deal_cards().to_string()<<endl;
    // } while (d.more_card()==true);
    
    cout<<"Cards : "<<endl;
    cout<<"Displaying Cards : "<<endl;
    while (d.more_card()==true)
    {
        cout<<x+1;
        cout<<":.............."<<d.deal_cards().to_string()<<endl;
        x++;
    }
    
        
}
