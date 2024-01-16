#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class AngleType
{
private:
    int degrees;
    float minutes;
    char direction;
public:
    AngleType(int d=0 ,float m=0.0,char dir=0);
    void setAngle(int d,float m,char dir);
    void displayAngle();
    // ~AngleType();
};

AngleType::AngleType(int d,float m,char dir)
{
    degrees=d;
    minutes=m;
    direction=dir;
}
void AngleType::setAngle(int d,float m,char dir)
{
    degrees=d;
    minutes=m;
    direction=dir;
}
void AngleType::displayAngle()
{
    
    float minutes_int=minutes;
    minutes_int=minutes/60;    
    cout<<degrees<<"\xF8"<<minutes<<"'"<<direction<<endl;
}
