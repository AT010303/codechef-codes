#include<iostream>
using namespace std;
int main()
{
    int t,s,x,y,z;
    cin>>t;
    while (t--)
    {
        cin>>s>>x>>y>>z;
        if(s-x-y>=z)
        {
            cout<<"0\n";
        }else{
            if(s-x>=z || s-y>=z)
            {
                cout<<"1\n";
            }else{
                cout<<"2\n";
            }
        }
    }
    return 0;
}