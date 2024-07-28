//#include<iostream>
//#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vi{1,5,16,3,10,20};
    sort( vi.begin(),vi.end(),greater<int>());
    cout<<"shorted array are";
    for (auto x : vi)
        cout << x << " ";
  
    return 0;
}