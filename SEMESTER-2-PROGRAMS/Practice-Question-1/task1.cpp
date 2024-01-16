#include<iostream>
#include<string>
#include<iomanip>
#include<string.h>
using namespace std;    
string vowel();
bool IsaVowel(char);
int main()
{
    string s;
    s=vowel();
    cout<<"After removing vowels : "<<s<<endl;
    return 0;
    
}
string vowel()
{
    string s;
    cout<<"Enter a string "<<endl;
    getline(cin,s);
    cin.ignore('\n');
    // cout<<"The string you entered is "<<s<<endl;

    for(int i=0;i<s.length();i++)
    {
        if(IsaVowel(s[i])==true)
        {
            s.erase(i,1);
            // i--;
        }
       
    }
    return s;
}
bool IsaVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u' || c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        return true;
    }
    else
    {
        return false;
    }
}