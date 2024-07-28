#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)//base condtion
    {
        return 0;
    }
    int res= n+sum(n-1);//recursive case
    return res;
}
int main ()
{
    int n=6;
    int ans=sum(n);
    cout<<"sum is"<<ans;
} 