#include<iostream>
#include<string>
#include"task6.h"
using namespace std;
int main()
{
    BookType b1[100];
    int choice;
    do
    {
        cout<<"Choose from the following"<<endl;
        cout<<"1. AddBooks     "<<endl;
        cout<<"2. Display Books"<<endl;
        cout<<"3. Update Books "<<endl;
        cout<<"4. Remove Books"<<endl;
        cout<<"5. Exit"<<endl;
        cin>>choice;
        if (choice==1)
        {
            string title;
            string author;
            string publisher;
            int isbn;
            int copies;
            float price;
            cout<<"Enter the book title"<<endl;
            cin>>title;
            cout<<"Enter the book author"<<endl;
            cin>>author;
            cout<<"Enter the book publisher"<<endl;
            cin>>publisher;
            cout<<"Enter the book isbn"<<endl;
            cin>>isbn;
            cout<<"Enter the book copies"<<endl;
            cin>>copies;
            cout<<"Enter the price of Book"<<endl;
            cin>>price;
            // if (b1.getCopiesInStock()==0)
            // {
            //     b1.setBook(title,author,publisher,isbn,price,copies);
            // }
            // else if (b2.getCopiesInStock()==0)
            // {
            //     b2.setBook(title,author,publisher,isbn,price,copies);
            // }
            // // else
            // // {
            // //     cout<<"No more space for books"<<endl;
            // // }
            for(int i = 0 ; i <100   ; i ++)
            {
            if(b1[i].getCopiesInStock()==0)
            {
                b1[i].setBook(title,author,publisher,isbn,price,copies);
            }
            }
            
        }
        else if (choice==2)
        {
            // cout<<"Book 1"<<endl;
            // b1.displayBook();
            // cout<<"Book 2"<<endl;
            // b2.displayBook();
            for (int i = 0; i < 100; i++)
            {
                b1[i].displayBook();
                
            }
            
        }
        else if (choice==3)
        {
            int isbn;
            // cout<<"Enter the isbn of the book you want to update"<<endl;
            // cin>>isbn;
            // if (b1.getIsbn()==isbn)
            // {
            //     b1.updateBook();
            // }
            // else if (b2.getIsbn()==isbn)
            // {
            //     b2.updateBook();
            // }
            // else
            // {
            //     cout<<"No book with this isbn"<<endl;
            // }
            cout<<"Enter the isbn of the book you want to update"<<endl;
            cin>>isbn;
            for (int i = 0; i < 100; i++)
            {
                
                if (b1[i].getIsbn()==isbn)
                {
                    b1[i].updateBook();
                    break;
                }
                else
                {
                    cout<<"No book with this isbn"<<endl;
                }
            }
            
            
        }
        else if (choice==4)
        {
            int isbn;
            cout<<"Enter the isbn of the book you want to remove"<<endl;
            cin>>isbn;
            // if (b1.getIsbn()==isbn)
            // {
            //     b1.removeBook();
            // }
            // else if (b2.getIsbn()==isbn)
            // {
            //     b2.removeBook();
            // }
            // else
            // {
            //     cout<<"No book with this isbn"<<endl;
            // }
            for (int i = 0; i < 100; i++)
            {
                
                if (b1[i].getIsbn()==isbn)
                {
                    b1[i].removeBook();
                    break;
                }
                else
                {
                    cout<<"No book with this isbn"<<endl;
                }
            }
            
            

        }
        
    } while (choice!=5);
    
    
    
}