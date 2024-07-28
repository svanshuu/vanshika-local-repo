#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>g1;
    g1.assign(5,12);//asign the value

    for(int i=0;i<g1.size();i++)
    {
        cout<<"\n vector elements \n"<<g1[i];
    }
    g1.push_back(25);//add elemnt
    int n=g1.size();
    cout<<g1[n-1];
    g1.pop_back();//remove an element
    for(int i=0;i<g1.size();i++)
    {
        cout<<"\n vector elements \n"<<g1[i];
    }
    g1.insert(g1.begin (),32);
    cout<<g1[0];
    g1.erase(g1.begin(), 12);
    for(int i=0;i<g1.size();i++)
    {
        cout<<"\n vector elements \n"<<g1[i];
    }
}