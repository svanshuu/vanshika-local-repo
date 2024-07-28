#include<iostream>
using namespace std;
int main()
{
  int bytes,a,n,m;
  cin>>bytes;
   a=bytes*8;
   cout<<a<<endl;
   int arr[5]={1,2,3,4,5};
   n=sizeof(arr)*8;
   cout<<"bytes"<<n<<endl;
   m=sizeof(arr);
   cout<<"bits"<<m<<endl;
}