#include<iostream>
using namespace std;
int fact(int n)
{
    if(n)//base condtion
    {
        return n;
    }
    int res=fact(n-2);//recursive case
    return res;
}
int main ()
{
    int n=8;
    int ans=fact(n);
    cout<<"sum is"<<ans;
} 