#include<iostream>
#include<string>
#include<vector>
#include"Task1.h"
using namespace std;
int main()
{
    vector<ItemsType> Cart;
    ItemsType caller;
    ItemsType i1("Burger", 100);
    ItemsType i2("Pizza", 200);
    ItemsType i3("Sandwich", 50);
    ItemsType i4("Fries", 50);
    ItemsType i5("Coke", 50);
    Cart.push_back(ItemsType("Burger", 100));
    Cart.push_back(ItemsType("Pizza", 200));
    Cart.push_back(ItemsType("Sandwich", 50));
    Cart.push_back(ItemsType("Fries", 50));
    int choice;
    while (choice!=6)
    {
       
    cout<<"Welcome to the Food Court"<<endl;
    cout<<"1. Add Item"<<endl;
    cout<<"2. Remove Item"<<endl;
    cout<<"3. Clear Cart"<<endl;
    cout<<"4. Update Item"<<endl;
    cout<<"5. Display Cart"<<endl;
    cout<<"6. Exit"<<endl;
    cin>>choice;
    if (choice==1)
    {
        caller.addItem(Cart);
    }
    else if (choice==2)
    {
        caller.displayCart(Cart);
        int choose;
        cout<<"Select Which one you want to delete"<<endl;
        cin>>choose;
        caller.deleteItem(Cart , choose );
    }
    else if (choice==3)
    {
        Cart.clear();
    }
    else if (choice==4)
    {
        caller.displayCart(Cart);
        int  choose;
        cout<<"Choose which one you want to delete"<<endl;
        cin>>choose;
        caller.updateItem(Cart , choose);
    }
    else if (choice==5)
    {
        for (int i=0;i<Cart.size();i++)
        {
            Cart[i].getItemName(); cout<<endl;
            Cart[i].getPrice(); cout<<endl;
        }
    }
    else if (choice==6)
    {
       break;

    }
            
    }

   
    
    
    
    
    return 0;
}
