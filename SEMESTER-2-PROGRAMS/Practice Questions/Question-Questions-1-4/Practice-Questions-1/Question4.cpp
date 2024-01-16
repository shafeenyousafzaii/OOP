#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
using namespace std;
int findlenght(int &area);
int findwidth(int &area);
int findvolume(int &length,int &width,int &area);
int main()
{
    int area;
    int volume;
    int length;
    int width;
    cout<<"Enter the area of the flat cardboard"<<endl;
    cin>>area;
    length=findlenght(area);
    width=findwidth(area);
    cout<<"The length is : "<<length<<endl;
    cout<<"THe width  is : "<<width<<endl;
    int maxVolume;
    maxVolume=findvolume(length,width,area);
    cout<<"The maximum volume of the box is : "<<maxVolume<<endl;
}
int findlenght(int &area)
{
    int length;
    length=sqrt(area);
    return length;
}
int findwidth(int &area)
{
    int width;
    width=sqrt(area);
    return width;
}
int findvolume(int &length,int &width , int &area)
{
    int volume;
    volume=(((length-2)*(width-2))*area)/6;
    return volume;
}