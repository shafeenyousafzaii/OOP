#include<iostream>
#include<string>
#include"Question_1.h"
using namespace std;
int main()
{
    Shape *p[3]=
    {
        new Circle(5),
        new Rectangle(6,4),
        new Triangle(3,7)   
    };
    for(int i = 0; i < 3; i++)
    {
        p[i]->calcArea();
        p[i]->display();
    }
    if (p[0] > p[1] == true)
    {
        cout<<
    }
    

    
    
}