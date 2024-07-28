#include<iostream>
#include<array>
using namespace std;
int sumof()
{ int sum=0;
  array<int,5> ac={1,2,3,4,8};
  cout<<"size of array "<<ac.size()<<endl;
  for (int j=0;j<ac.size();j++)
  {
    sum =sum+ac[j];
  }  
  return sum;
}
int main()
{
    int ab[4]={1,2,4,5};
    int sum=0, c;
    array<int,4> a={1,2,3,4};
    cout<<"size of array"<<a.size()<<endl;
    for (int i=0;i<a.size();i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum with array"<<sum<<endl;
    c=sumof();
    cout<<"sum with function"<<c<<endl;


}