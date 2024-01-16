#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v={1,2,3,4,5};
    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*it<<" "<<endl;
    // }
    // v.push_back(6);
    // v.push_back(7);

     vector<int> v;
     int value;
        cout<<"Enter the value you want to insert at the beginning of the vector: ";
        cout<<endl;cin>>value;
        while(value!=0){
    v.insert(v.begin(),1);
    v.push_back(value);
        }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    return 0;
}