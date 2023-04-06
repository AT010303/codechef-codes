#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==0)
        {
            cout<<"0\n";
        }else{
            if(n%k==0)
            {
                cout<<n/k<<endl;
            }else{
                cout<<"-1\n";
            }
        }
    }
    return 0;
}