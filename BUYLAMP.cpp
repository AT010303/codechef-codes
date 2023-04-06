#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        if(x<=y)
        {
            cout<<n*x<<"\n";
        }else{
            cout<<(k*x)+((n-k)*y)<<"\n";
        }
    }
    return 0;
}