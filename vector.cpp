
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> gi;
    for (int i=0;i<5;i++)
    {
        gi.push_back(i);
    }
    cout<<"output of begin and end"; 
    for(auto i=gi.begin();i!=gi.end();++i)
    {
        cout<<*i;
    }
    for (auto j=gi.rbegin();j!=gi.rend();++j)
    {
        cout<<*j<<" ";
    }
   for(auto k=gi.cbegin(); k!=gi.cend();++k)
   {
    cout<<*k<<" ";
   }
   for(auto l=gi.crbegin();l!=gi.crend;++l)
   {
    cout<<*l<<" ";
   }
}