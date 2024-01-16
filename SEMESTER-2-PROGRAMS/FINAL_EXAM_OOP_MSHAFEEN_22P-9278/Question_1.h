#include <iostream>
#include <string>
using namespace std;
class Circle;
class Triangle;
class Rectangle;
class Shape
{
private:
public:
    Shape();
    virtual void calcArea();
    virtual void display();
    virtual ~Shape();
    bool friend operator>(Circle &c, Rectangle &r);
};

class Circle : public Shape
{
private:
    float area;
    int radius;

public:
    Circle(int x = 0);
    int getArea();
     void calcArea();
     void display();
     void greaterCompare();
    friend int getHeight();
    friend int getWidht();
    virtual ~Circle();
};

class Rectangle : public Shape
{
private:
    int area;
    int height;
    int width;

public:
    Rectangle(int x = 0, int y = 0);
     void calcArea();
    int getArea();
    int getWidht();
    int getHeight();
    friend int getHeight();
    friend int getWidht();
    void display();
    virtual ~Rectangle();
};

class Triangle : public Shape
{
private:
    float area;
    int base;
    int height;

public:
    Triangle(int x = 0, int y = 0,int z=0);
     void CalcArea();
    int getArea();
     void display();
    virtual ~Triangle();
};
