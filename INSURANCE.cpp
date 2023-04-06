#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>=y)
        {
            cout<<y<<"\n";
        }else{
            cout<<x<<"\n";
        }
    }
    return 0;
}