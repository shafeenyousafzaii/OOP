#include<iostream>
#include<string>
using namespace std;
class operatoroverloading  // class one for operator overloading
{
private:
   //private data members
    int length;
    int widht;
    operatoroverloading operator+(const operatoroverloading &obj); // overloading the + operator with method;
    operatoroverloading operator-(const operatoroverloading &obj); // overloading the - operator with method;
    operatoroverloading operator*(const operatoroverloading &obj); // overloading the * operator with method;
    operatoroverloading operator/(const operatoroverloading &obj); // overloading the / operator with method;
    operatoroverloading operator%(const operatoroverloading &obj); // overloading the % operator with method;
    operatoroverloading operator++(int); // overloading the ++ operator with method; a++
    operatoroverloading operator++(); // overloading the ++ operator with method; ++a
    operatoroverloading operator--(); // overloading the -- operator with method; 
    bool operator==(const operatoroverloading &obj); // overloading the == operator with method;
    bool operator!=(const operatoroverloading &obj); // overloading the != operator with method;
    bool operator>(const operatoroverloading &obj); // overloading the > operator with method;
    bool operator<(const operatoroverloading &obj); // overloading the < operator with method;
    bool operator>=(const operatoroverloading &obj); // overloading the >= operator with method;
    bool operator<=(const operatoroverloading &obj); // overloading the <= operator with method;
    operatoroverloading operator&&(const operatoroverloading &obj); // overloading the && operator with method;
    
   
public:
   //public data members
    operatoroverloading(int lenght=0 , int width=0);
    int getlength()
    {
        return length;
    }
    int getwidth()
    {
        return widht;
    }
    int setlength(int l)
    {
        length = l;
    }
    int setwidth(int w)
    {
        widht = w;
    }
    ~operatoroverloading();
};


//definition of constructor
operatoroverloading::operatoroverloading(int l, int w)
{
    length = l;
    widht = w;
}
//definintion of operator '+' overloading
operatoroverloading operatoroverloading::operator+(const operatoroverloading &obj)
 {
        operatoroverloading res;
        res.length = length + obj.length;
        res.widht = widht + obj.widht;
        return res;
 }
 operatoroverloading operatoroverloading::operator-(const operatoroverloading &obj)
 {
        operatoroverloading res;
        res.length = length - obj.length;
        res.widht = widht - obj.widht;
        return res;
 }
    operatoroverloading operatoroverloading::operator*(const operatoroverloading &obj)
    {
            operatoroverloading res;
            res.length = length * obj.length;
            res.widht = widht * obj.widht;
            return res;
    }
    operatoroverloading operatoroverloading::operator/(const operatoroverloading &obj)
    {
            operatoroverloading res;
            res.length = length / obj.length;
            res.widht = widht / obj.widht;
            return res;
    }
    operatoroverloading operatoroverloading::operator%(const operatoroverloading &obj)
    {
            operatoroverloading res;
            res.length = length % obj.length;
            res.widht = widht % obj.widht;
            return res;
    }
    operatoroverloading operatoroverloading::operator++(int)
    {
            operatoroverloading res;
            res.length = length++;
            res.widht = widht++;
            return res;
    }
    operatoroverloading operatoroverloading::operator++()
    {
            operatoroverloading res;
            res.length = ++length;
            res.widht = ++widht;
            return res;
    }
    operatoroverloading operatoroverloading::operator--()
    {
            operatoroverloading res;
            res.length = --length;
            res.widht = --widht;
            return res;
    }
    bool operatoroverloading::operator==(const operatoroverloading &obj)
    {
            operatoroverloading res;
            if(length == obj.length && widht == obj.widht)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
    bool operatoroverloading::operator!=(const operatoroverloading &obj)
    {
            operatoroverloading res;
            if(length != obj.length && widht != obj.widht)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
    bool operatoroverloading::operator>(const operatoroverloading &obj)
    {
            operatoroverloading res;
            if(length > obj.length && widht > obj.widht)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
    bool operatoroverloading::operator<(const operatoroverloading &obj)
    {
            operatoroverloading res;
            if(length < obj.length && widht < obj.widht)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
    bool operatoroverloading::operator>=(const operatoroverloading &obj)
    {
            operatoroverloading res;
            if(length >= obj.length && widht >= obj.widht)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
    bool operatoroverloading::operator<=(const operatoroverloading &obj)
    {
            operatoroverloading res;
            if(length <= obj.length && widht <= obj.widht)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
    operatoroverloading operatoroverloading::operator&&(const operatoroverloading &obj)
    {
            operatoroverloading res;
            if(length && obj.length && widht && obj.widht)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
    



//definintion of destructor
operatoroverloading::~operatoroverloading()
{
    cout<<"Destructor called"<<endl;
}



//definintion of operator '+' overloading
 operatoroverloading operatoroverloading::operator+(const operatoroverloading &obj)
{
    operatoroverloading res;
    res.length = length + obj.length;
    res.widht = widht + obj.widht;
    return res;
}

























// //class two for operator overloading
// class operatoroverloading2 : public operatoroverloading
// {
// private:
//      int length;
//     int widht;
// public:
//     operatoroverloading2(int len,int width);
//     ~operatoroverloading2();
// };

// operatoroverloading2::operatoroverloading2(int l , int w)
// {
//     length = l;
//     widht = w;
// }

// operatoroverloading2::~operatoroverloading2()
// {
// }
