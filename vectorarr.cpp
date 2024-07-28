#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> gi;
    int n=10;
    for (int i=0;i<5;i++)
    {
        gi.push_back(i);
    }
    cout<<"output of begin and end"; 
    for(auto i=gi.begin();i!=gi.end();++i)
    {
        cout<<*i;
    }
    //cout<<" size of array"<<gi.size();
    cout<<"\nhow many elements"<<gi.max_size();//size of memeory
    cout<<"\n capacity"<<gi.capacity();//capacity of vector
    gi.resize(n);//change the size of array,without argument
    cout<<" size of array"<<gi.size();//size of array
    if (gi.empty())
    {
        cout<<"hii";
    }
    else
    cout<<"hlooo";
}