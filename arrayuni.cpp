#include<iostream>
using namespace std;
int main()
{
    int arr[10],c,d;
    c=sizeof(arr);
    d=c/sizeof(arr[1]);
    cout<<c<<endl;
    cout<<d<<endl;
}