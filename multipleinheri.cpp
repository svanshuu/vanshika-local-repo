#include<iostream>
using  namespace std;
class vehicale
{
    public:
     vehicale()
    { int v;
         cin >>v;

        cout<<"this is a vehical";
    }
};
class fourwheeler
{
    public:
    fourwheeler()
    {  int care;
        cin>> care;
        cout<<"this is a car";
    }
};
class car :public vehicale , public fourwheeler
{ int r;
    public:
    car()
    {
    cout<<" petrol is necessary to start car";
    cout<<r=care+v;
    }
};
int main()
{
    //vehicale r;
   // fourwheeler f;
    car c ;
    //c.vehicle();
    //c.fourwheeler();
return 0;
}