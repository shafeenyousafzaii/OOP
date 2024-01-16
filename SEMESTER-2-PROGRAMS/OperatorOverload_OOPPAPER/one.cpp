#include<iostream>
#include<string>
using namespace std;
class one
{
    private:
    int length;
    public:
    one(int l=0)
    {
        length = l;
    }
    int getlength()
    {
        return length;
    }
    void setlength(int l)
    {
        length = l;
    }
    friend istream & operator>>(istream &input,one &obj);
    friend ostream & operator<<(ostream &output,one &obj);
    friend bool operator>(one &obj1,one &obj2);
    friend bool operator<(one &obj1,one &obj2);
    friend bool operator==(one &obj1,one &obj2);
};
istream & operator>>(istream &input,one &obj)
{
    input>>obj.length;
    return input;
}
ostream & operator<<(ostream &output,one &obj)
{
    output<<obj.length;
    return output;
}
bool operator>(one & ob1,one & ob2)
{
    if(ob1.length>ob2.length)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool operator<(one & ob1,one & ob2)
{
    if(ob1.length<ob2.length)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool operator==(one &obj1 , one &obj2)
{
    if(obj1.length==obj2.length)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    one obj1,ob2;
    cout<<"Enter the length of the object: ";
    cin>>obj1;
    cout<<"Enter the length of the object2: ";
    cin>>ob2;
    cout<<"The length of the object is:"<<endl;
    cout<<obj1;
    cout<<"The length of the object2 is:"<<endl;;
    cout<<ob2;
    cout<<endl;
    if (obj1>ob2==true)
    {
        cout<<"Object 1 is greater than object 2"<<endl;
        
    }
    else{
        cout<<"Object 1 is not greater than object 2 or equal"<<endl;
    }
    if (obj1<ob2==true)
    {
        cout<<"Object 1 is less than object 2"<<endl;
    }
    else
    {
        cout<<"Object 1 is not less than object 2 also not equal"<<endl;
    }
    if (obj1==ob2==true)
    {
        cout<<"Object 1 is equal to object 2"<<endl;
    }
    else
    {
        cout<<"Object 1 is not equal to object 2"<<endl;
    }
    
    

    return 0;
}