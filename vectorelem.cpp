#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int>g1;
 for(int i=1;i<=10;i++)
 {
    g1.push_back(i*10);
 }  
 cout<<"reference"<<g1[3];
 cout<<g1.at(4);
 cout<<"\n front"<<g1.front();
 cout<<"\nback"<<g1.back();
}