
#include<iostream>
 using namespace std;
int linear( int sea)
{
    int n;
    int arr[10]={5,15,-25,25,13,15,95,195,235,395};
    for(int i=0;i<n;i++)
    {
        if(arr[i]==sea)
        {
        cout<<"element found";
       return sea;
        }
    }
    cout<<"element not found";
   return sea;
}
int main()
{
    int search;
    cout<<"enter the element to search";
    cin>>search;
   linear(search);

}