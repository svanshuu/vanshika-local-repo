#include<iostream>
using namespace std;
int main()
{
    int larger;
    int arr[]={1,2,4,52};
     larger=arr[0];
    for (int i=0;i<=4;i++)
    {
      if (larger<arr[i])
       {
        larger =arr[i];
       }
    }
    cout<<"largest number"<<larger;
return 0;
}