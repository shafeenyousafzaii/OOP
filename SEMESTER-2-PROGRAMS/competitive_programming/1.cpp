// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<fstream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumDistances' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int minimumDistances(vector<int> a) {


    int count=0;
    int minimum;
    vector<int>identical_values;
    for(auto i=0 ; i< a.back();i++) // for rows
    {
        for(auto j=0 ; j < a.back() ; j++) //for columns
   {
            for(auto k=0 ; k<identical_values.back();k++)  //for difference array
        {
            if(j==i)
            {   
            int num=j-i;
            num=abs(num);
            identical_values[k]=num;  
            count=1;
            }
            else if(count==0)
            {
              minimum=-1;
            }
            }
        }
    }
  

if(count==1)
{
    minimum=identical_values[0];
    for(auto i=0 ; i<identical_values.back() ; i++)
    {
        if(i<minimum)
        {
            minimum=i;
        }
}
}

return minimum;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = minimumDistances(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
