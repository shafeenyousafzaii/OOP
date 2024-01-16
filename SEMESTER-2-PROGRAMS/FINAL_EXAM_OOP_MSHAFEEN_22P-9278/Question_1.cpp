#include<iostream>
#include<string>
#include"Question_1.h"
using namespace std;
Shape::Shape()
{
    
}   
void Shape::calcArea()
{
    
}
void Shape::display()
{
    
}
Shape::~Shape()
{
    cout<<"Shape Destructor"<<endl;
}
Circle::Circle(int x)
{
    radius=x;
}
void Circle::calcArea()
{
    
    area=3.14*radius*radius;
}
void Circle::display()
{
    cout<<"Circle with Radius : "<<radius<<endl;
    cout<<"Area of Circle: "<<area<<endl;
}
Circle::~Circle()
{
    cout<<"Circle Destructor"<<endl;
}
Rectangle::Rectangle(int x, int y )
{
   
    height=x;
    width=y;
}
void Rectangle::calcArea()
{
    area=height*width;
}
void Rectangle::display()
{
    cout<<"Rectangle with width :"<<width<<" and height : "<<height<<endl;
    cout<<"Area of Rectangle: "<<area<<endl;
}  
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destructor"<<endl;
}   
Triangle::Triangle(int x , int y , int z )
{
    base=x;
    height=y;
    area=z;
}
void Triangle::CalcArea()
{
    
    area=(0.5)*((base*height));
}
void Triangle::display()
{
    cout<<"Triangle with base :"<<base<<" and height :"<<height<<endl;
    cout<<"Area of Triangle is : "<<area<<endl;
}
int Circle::getArea()
{
    return area;
}
int Rectangle::getArea()
{
    return area;
}
int Triangle::getArea()
{
    return area;
}
int Rectangle::getWidht()
{
    return width;
}
int Rectangle::getHeight()
{
  return height;
}
bool operator>(Circle &c,Rectangle &r)
{
    
    if(c.getArea() > r.getArea() )
    {
      return true;
    }
    else 
    {
        return false;
    }
    
}
void Circle::greaterCompare()
{
    cout<<"Circle with Radius "<<radius<<endl;
}

Triangle::~Triangle()
{
    cout<<"Triangle Destroyed"<<endl;
}
// void Shape::greaterCompare()
// {
   
// }
// void Circle::greaterCompare()
// {
//     cout<<"Circle with radius "<<getArea()<<"Has a greater area than rectangle with width : "<<
    
// }