#include<iostream>
using namespace std;
int main ()
{
    int n=10;
 int arr[10]={5,15,-25,25,13,15,95,195,235,395};
 int search,i;
 cout<<"enter the element to search";
 cin>>search;
// search=arr[0];
for (i=0;i<n-1;i++)
{
  if(arr[i]==search) 
{
    
    cout<<"element found";
    return 0;
}
}
cout<<"element niot found";

}


