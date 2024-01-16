#include<iostream>
#include<string>
#include"task8.h"
using namespace std;
int main()
{
    cout<<"Set Book store"<<endl;
    
    BookType b1[2];
    memberType m[2];
    int choice;
    do
    {
        cout<<"Choose from the following"<<endl;
        cout<<"1. AddBooks     "<<endl;
        cout<<"2. Display Books"<<endl;
        cout<<"3. Update Books "<<endl;
        cout<<"4. Remove Books"<<endl;
        cout<<"5. Exit Bookcatalogue"<<endl;
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
            for(int i = 0 ; i <2   ; i ++)
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
            for (int i = 0; i < 2; i++)
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
            for (int i = 0; i < 2; i++)
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
            for (int i = 0; i < 2; i++)
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
        
    }while(choice!=5);
    
    int choice2;
    do
    {
    cout<<"Choose from the following "<<endl;
    cout<<"Are you a memeber of the book store"<<endl;
    cout<<"1. Yes"<<endl;
    cout<<"2. No"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>choice2;
    string name;
    int ID;
    int no_of_books_bought;
    float amount_spent;
    if (choice2==1)
    {
        int choice3;
        do
        {
            cout<<"Choose from the following: "<<endl;
            cout<<"1. Add Members"<<endl;
            cout<<"2. Display Member"<<endl;
            cout<<"3. Update Member"<<endl;
            cout<<"4. Exit"<<endl;
            cin>>choice3;
            if (choice3 == 1)
          {
            for (int i = 0; i < 2; i++)
            {
            cout<<"Enter your name :"<<endl;
            cin>>name;
            cout<<"Enter your id :"<<endl;
            cin>>ID;
            cout<<"Enter the number of books you want to buy :"<<endl;
            cin>>no_of_books_bought;
            cout<<"Enter the amount you want to spend :"<<endl;
            cin>>amount_spent;
            m[i].setData(name,ID,no_of_books_bought,amount_spent);
            }
          }
            else if(choice3==2)
            {
                for (int i = 0; i < 2; i++)
                {
                    m[i].displayData();
                }
                
            }
            else if(choice3==3)
            {
                for (int i = 0; i < 2; i++)
                {
                    m[i].updateData();
                }
                
            }
            else if(choice3==4)
            {
                break;
            }
            else
            {
                cout<<"Invalid choice"<<endl;
            }
            
        } while ( choice3!=4);
        
        
    }
        
    
    
    }while(choice2!=3);

}


    

    

     
  

