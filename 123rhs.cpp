#include<iostream>
using namespace  std;
int main()
{
    int n;
    cout<<"enter any no..";
    cin>>n;
    int r=1;
    while(r<=n)
    {
    int space=r-1;
    while(space)
    {
cout<<" ";
space=space-1;
    }int col=r;
    while(col<=n)
    {
        cout<<col;
        col=col+1;
       // star =star-1;
    }r=r+1;
    cout<<endl;
}
}