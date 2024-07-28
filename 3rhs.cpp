#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any no";
    cin>>n;
    int r=1 ,i=1;
    while(r<=n){
     int s=n-r+1;
     while(s)
     {
        cout<<i;
        i=i+1;
        s=s-1;
     }
     cout<<endl;
     r=r+1;
    } return 0;
}