#include<iostream>
#include<string>
#include"task1.h"
using namespace std;
int main()
{
    int x,y,z;
    // cout<<"Enter the value of x: ";
    // cin>>x;
    // cout<<"Enter the value of y: ";
    // cin>>y;
    // cout<<"Enter the value of z: ";
    // cin>>z;
    cout<<"Enter the value of x and y for 2D vector"<<endl;
    cin>>x>>y;
    twoDVector v1(x,y);
    cout<<"Enter the value of x,y and z for 3D vector"<<endl;
    cin>>x>>y>>z;
    ThreeDVector v2(x,y,z);
    cout<<"Enter the value of x and y for another 2D vector"<<endl;
    cin>>x>>y;
    twoDVector v5(x,y);
    cout<<"Enter the value of x ,y  and z for antoher 3D vector"<<endl;
    cin>>x>>y>>z;
    ThreeDVector v6(x,y,z);
    V<twoDVector> v3(v1);
    V<ThreeDVector> v4(v2);
    cout<<v1;cout<<" , "<<v5<<endl;
    cout<<v2;cout<<" . "<<v6<<endl;
    cout<<"Dot product of twoDVector is: "<<v3.DotProduct(v5)<<endl;
    cout<<"Dot product of threeDVector is: "<<v4.DotProduct(v6)<<endl;
    cout<<"Another way of calculating dot product of twoDVector "<<endl;
    cout<<"Vector 1"<<endl;
    cin>>v1;
    cout<<"Vector 2"<<endl;
    cin>>v2;
    cout<<"Vector 1"<<endl;
    cout<<v1;
    cout<<"Vector 2"<<endl;

    cout<<v2;
    return 0;
}
