#include<iostream>
#include<Vector>
#include<string.h>
using namespace std;
class Post
{
private:
    string title;
    string description;
public:
    Post(string x=" " , string y=" ");
    void setTitle(string x);
    void setDesc(string y);
    string getTitle();
    string getDesc();
    // ~Post();
};

Post::Post(string x,string y)
{
    title=x;
    description=y;
}
void Post::setTitle(string x)
{
    title=x;
}
void Post::setDesc(string y)
{
    description=y;
}
string Post::getDesc()
{
    return description;
}
string Post::getTitle()
{
    return title;
}
class UserAccount
{
protected:
    string username;
    string password;
    vector<Post> p;
public:
    UserAccount(string x= " " , string y= " ");
    void DisplayInfo();
    void viewAllPost();
    void addPost();
    // ~UserAccount();
};

UserAccount::UserAccount(string x, string y)
{
    username=x;
    password=y;
}
void UserAccount::DisplayInfo()
{
    cout<<"Username : "<<username<<endl;
    cout<<"Password : "<<password<<endl;
}
void UserAccount::viewAllPost()
{
    for (auto i = p.begin(); i != p.end(); i++)
    {
        cout<<"Title :"<<i->getTitle()<<endl;
        cout<<"Description : "<<i->getDesc()<<endl;
    }
    
}
void UserAccount::addPost()
{
    string acctitle,accdesc;
    cout<<"Enter your account Title : "<<endl;
    cin>>acctitle;
    cout<<"Enter your account Desc  : "<<endl;
    cin>>accdesc;
    Post x;
    x.setTitle(acctitle);
    x.setDesc(accdesc);
    p.push_back(x);

}
class PersonalAccount : public UserAccount
{
private:
     string gender;
public:
    PersonalAccount(string x=" ",string y=" ",string z=" ");
    void DisplayInfo();
    // ~PersonalAccount();
};

PersonalAccount::PersonalAccount(string x,string y,string z):UserAccount(y,z)
{
    gender=x;
}

class BusinessAccount : public UserAccount
{
private:
    string revenue;
public:
    BusinessAccount(string x="");
    void DisplayInfo();
    // ~BusinessAccount();
};

BusinessAccount::BusinessAccount(string x)
{
    revenue=x;
}
