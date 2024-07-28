#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)//base condtion
    {
        return 1;
    }
    int res= n*fact(n-1);//recursive case
    return res;
}
int main ()
{
    int n=6;
    int ans=fact(n);
    cout<<"sum is"<<ans;
} 