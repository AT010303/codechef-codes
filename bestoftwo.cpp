#include<iostream>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while (t--)
    {
       cin>>x>>y;
       if(x>=y)
       cout<<x;
       else
       cout<<y; 
    }
    return 0;
}