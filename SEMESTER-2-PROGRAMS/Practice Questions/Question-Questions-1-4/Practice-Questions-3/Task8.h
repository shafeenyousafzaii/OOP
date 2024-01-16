#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class BookType
{
private:
    string title;
    string author;
    string publisher;
    int isbn;
    float price;
    int copies_in_stock;

public:
    BookType(string title=" " , string author=" " , string publisher=" " , int isbn=0 , float price=0.0 , int copies_in_stock=0);
    void setBook(string title , string author , string publisher , int isbn , float price , int copies_in_stock);
    void displayBook();
    void getBook();
    void setTitle(string title);
    void setAuthor(string author);
    void setPublisher(string publisher);
    void setIsbn(int isbn);
    void setPrice(float price);
    void setCopiesInStock(int copies_in_stock);
    string getTitle();
    string getAuthor();
    string getPublisher();
    int getIsbn();
    float getPrice();
    int getCopiesInStock();
    void updateInStock(int copies_in_stock);
    void updateBook();
    void removeBook();


    
    // ~BookType();
};

BookType::BookType(string title , string author , string publisher , int isbn , float price , int copies_in_stock)
{
    this->title=title;
    this->author=author;
    this->publisher=publisher;
    this->isbn=isbn;
    this->price=price;
    this->copies_in_stock=copies_in_stock;
}

void BookType::setBook(string title , string author , string publisher , int isbn , float price , int copies_in_stock)
{
    this->title=title;
    this->author=author;
    this->publisher=publisher;
    this->isbn=isbn;
    this->price=price;
    this->copies_in_stock=copies_in_stock;
}

void BookType::setAuthor(string author)
{
    this->author=author;
}
void BookType::setTitle(string title)
{
    this->title=title;
}
void BookType::setPublisher(string publisher)
{
    this->publisher=publisher;
}
void BookType::setIsbn(int isbn)
{
    this->isbn=isbn;
}
void BookType::setPrice(float price)
{
    this->price=price;
}
void BookType::setCopiesInStock(int copies_in_stock)
{
    this->copies_in_stock=copies_in_stock;
}
string BookType::getAuthor()
{
    return author;
}
string BookType::getTitle()
{
    return title;
}
string BookType::getPublisher()
{
    return publisher;
}
int BookType::getIsbn()
{
    return isbn;
}
float BookType::getPrice()
{
    return price;
}
int BookType::getCopiesInStock()
{
    return copies_in_stock;
}
void BookType::updateInStock(int copies_in_stock)
{
    this->copies_in_stock=copies_in_stock;
}
void BookType::displayBook()
{
    cout<<"Title : "<<title<<endl;
    cout<<"Author : "<<author<<endl;
    cout<<"Publisher : "<<publisher<<endl;
    cout<<"ISBN : "<<isbn<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"Copies in Stock : "<<copies_in_stock<<endl;
}
void BookType::getBook()
{
    cout<<"Enter Title : ";
    getline(cin,title);
    cout<<"Enter Author : ";
    getline(cin,author);
    cout<<"Enter Publisher : ";
    getline(cin,publisher);
    cout<<"Enter ISBN : ";
    cin>>isbn;
    cout<<"Enter Price : ";
    cin>>price;
    cout<<"Enter Copies in Stock : ";
    cin>>copies_in_stock;
    cin.ignore();
}
// BookType::~BookType()
void BookType::updateBook()
{

            cout<<"Enter the book title"<<endl;
            cin>>title;
            cout<<"Enter the book author"<<endl;
            cin>>author;
            cout<<"Enter the book publisher"<<endl;
            cin>>publisher;
            cout<<"Enter the book isbn"<<endl;
            cin>>isbn;
            cout<<"Enter the book copies"<<endl;
            cin>>copies_in_stock;
            cout<<"Enter the price of Book"<<endl;
            cin>>price;

}
void BookType::removeBook()
{

    title=" ";
    author=" ";
    publisher=" ";
    isbn=0;
    price=0.0;
    copies_in_stock=0;
}
//-------------------------------------------------------
class memberType
{
private:
    string name;
    int MemberID;
    int no_of_books_bought;
    float amount_spent;
    const int membershipfee=10;
    int totalamount;
public:
    memberType(string name=" " , int MemberID=0 , int no_of_books_bought=0 , float amount_spent=0.0);
    void setData(string name , int MemberID , int no_of_books_bought , float amount_spent);
    void displayData();
    void getData();
    void updateData();
    void ShowName();
    void setTotalAmount();
    // ~memberType();
};


memberType::memberType(string name , int MemberID , int no_of_books_bought , float amount_spent)
{
    this->name=name;
    this->MemberID=MemberID;
    this->no_of_books_bought=no_of_books_bought;
    this->amount_spent=amount_spent;
}
void memberType::setData(string name , int MemberID , int no_of_books_bought , float amount_spent)
{
    this->name=name;
    this->MemberID=MemberID;
    this->no_of_books_bought=no_of_books_bought;
    this->amount_spent=amount_spent;
}
void memberType::ShowName()
{
    cout<<name<<endl;
}
void memberType::displayData()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Member ID : "<<MemberID<<endl;
    cout<<"Number of Books Bought : "<<no_of_books_bought<<endl;
    cout<<"Amount Spent : "<<amount_spent<<endl;
}
void memberType::getData()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Member ID : "<<MemberID<<endl;
    cout<<"Number of Books Bought : "<<no_of_books_bought<<endl;
    cout<<"Amount Spent : "<<amount_spent<<endl;
    
}
void memberType::updateData()
{
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Member ID : ";
    cin>>MemberID;
    cout<<"Enter Number of Books Bought : ";
    cin>>no_of_books_bought;
    cout<<"Enter Amount Spent : ";
    cin>>amount_spent;
}
void memberType::setTotalAmount()
{
    totalamount=membershipfee+amount_spent;
    totalamount=totalamount-(totalamount*0.5);
}