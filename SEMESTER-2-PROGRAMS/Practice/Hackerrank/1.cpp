#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9)
        {
            if (i == 1)
            {
                cout << "one"<<endl;
            }
            else if (i == 2)
            {
                cout << "two"<<endl;
            }
            else if (i == 3)
            {
                cout << "three"<<endl;
            }
            else if (i == 4)
            {
                cout << "four"<<endl;
            }
            else if (i == 5)
            {
                cout << "five"<<endl;
            }
            else if (i == 6)
            {
                cout << "six"<<endl;
            }
            else if (n == 7)
            {
                cout << "seven"<<endl;
            }
            else if (i == 8)
            {
                cout << "eight"<<endl;
            }
            else if (i == 9)
            {
                cout << "nine"<<endl;
            }
        }
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even"<<endl;
            }
            else
            {
                cout << "odd"<<endl;
            }
        }
    }
}