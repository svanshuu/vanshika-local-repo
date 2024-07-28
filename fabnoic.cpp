#include<iostream>
using namespace std;
int main()
{
    int a=0 ,b=1,c,i;
    
    cout<<a<<b;
    for(i=3;i<=100;i++) 
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c;
       if(i%2==0)
        {
            cout<<c;

        }
    }
}