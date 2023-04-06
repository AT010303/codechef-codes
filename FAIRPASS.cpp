#include<iostream>
using namespace std;
int main()
{
    int t,k,n;//n for pass k for friends
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        if(k+1<=n)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}