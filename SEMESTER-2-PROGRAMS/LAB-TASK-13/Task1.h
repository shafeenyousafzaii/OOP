#include<iostream>
#include<string>
using namespace std;
// template<class,class,class>;
template<class Vec>
class V
{
    private:
    Vec v1;
    public:
    V(Vec);
    int DotProduct(Vec x);
};
template<class Vec>
V<Vec>::V(Vec x)
{
   v1=x;
}
template<class Vec> 
int V<Vec>::DotProduct(Vec x)
{ 
   int X;
   X=x.CalculateDotProduct(v1);
   return X;
}

class twoDVector
{
private:
    int x;
    int y;
public:
    twoDVector(int x=0,int y=0);
    friend istream& operator>>(istream& in,twoDVector& x);
    friend ostream& operator<<(ostream& out,twoDVector& x);
  int  CalculateDotProduct(twoDVector x);
};
istream& operator>>(istream& in,twoDVector& x)
{
    cout<<"Enter the value of x and y for 2D vector"<<endl;
    in>>x.x>>x.y;
    return in;
}
ostream& operator<<(ostream& out,twoDVector& x)
{
    out<<"("<<x.x<<","<<x.y<<")";
    return out;
}

twoDVector::twoDVector(int x, int y)
{
 this->x=x;
 this->y=y;
}
int twoDVector::CalculateDotProduct(twoDVector x)
{
    int DOTPROD;
    DOTPROD=(this->x*x.x)+(this->y*x.y);
    return DOTPROD;
}
class ThreeDVector
{
private:
    int x;
    int y;
    int z;
public:
    ThreeDVector(int x=0,int y = 0 , int z = 0 );
    friend ostream& operator<<(ostream& out,ThreeDVector& x);
    friend istream& operator>>(istream& in,ThreeDVector& x);
    int CalculateDotProduct(ThreeDVector x);
    // ~ThreeDVector();
};

ostream& operator<<(ostream& out,ThreeDVector& x)
{
    out<<"("<<x.x<<","<<x.y<<","<<x.z<<")";
    return out;
}
istream& operator>>(istream& in,ThreeDVector& x)
{
    cout<<"Enter the value of x , y and z for 3D vector"<<endl;
    in>>x.x>>x.y>>x.z;
    return in;
}
ThreeDVector::ThreeDVector(int x, int y, int z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}
int ThreeDVector::CalculateDotProduct(ThreeDVector x)
{
    int DOTPROD;
    DOTPROD=(this->x*x.x)+(this->y*x.y)+(this->z*x.z);
    return DOTPROD;
}



