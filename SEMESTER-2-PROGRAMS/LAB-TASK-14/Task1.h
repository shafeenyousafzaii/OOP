#include <iostream>
#include <string>
#include <vector>
using namespace std;
class ItemsType
{
private:
    string itemname;
    int price;

public:
    
    ItemsType(string itemname = " ", int price = 0);
    void addItem(vector<ItemsType> &Cart);
    void deleteItem(vector<ItemsType> &Cart  , int choose);
    // bool clearItems();
    void updateItem(vector<ItemsType> &c, int choose);
    void deleteVector(vector<ItemsType> &Cart);
    void getItemName();
    void getPrice();
    void displayCart(vector<ItemsType> &Cart);
    // friend ItemsType operator<<(ostream &s, ItemsType i[]);
};

ItemsType::ItemsType(string name,int price)
{
    itemname=name;
    this->price=price;
}
void ItemsType::addItem(vector<ItemsType> &Cart)
{
    string itemname;
    int price;
    cout<<"Enter Item Name: ";
    cin>>itemname;
    cout<<"Enter Item Price: ";
    cin>>price;
    Cart.push_back(ItemsType(itemname,price));
}
void ItemsType::deleteVector(vector<ItemsType> &Cart)
{
    Cart.clear();
}
void ItemsType::deleteItem(vector<ItemsType> &Cart , int choose)
{
    for (int i=0;i<Cart.size();i++)
    {
        if (i==choose)
        {
            Cart.erase(Cart.begin()+choose);
        }
    }
}
void ItemsType::getItemName()
{
    cout<<itemname;
}
void ItemsType::getPrice()
{
    cout<<price;
}
void ItemsType::updateItem(vector<ItemsType> &s , int choose)
{
   for (int  i = 0; i < s.size(); i++)
   {
     if (i==choose)
     {
        string newname;
        cout<<"new name : "<<endl;
        cin>>newname;
        cout<<"new price : "<<endl;
        int newprice;
        cin>>newprice;
        s[i].itemname=newname;
        s[i].price=newprice;

     }
     
   }
   
}
// bool ItemsType::clearItems()
// {
//     return true;
// }
// ItemsType operator<<(ostream &s, ItemsType i[])
// {
//     s<<i.itemname<<" "<<i.price<<endl;
//     return i;
// }
void ItemsType::displayCart(vector<ItemsType> &Cart)
{
    for (int i=0;i<Cart.size();i++)
    {
        Cart[i].getItemName(); cout<<endl;
        Cart[i].getPrice(); cout<<endl;
    }
}