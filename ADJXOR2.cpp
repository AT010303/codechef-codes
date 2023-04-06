#include<bits/stdc++.h>
long long int n,x,a[200001],dp[200001][2];
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>n>>x;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
        }

        for(int i=2;i<=n;++i)
        {
            dp[i][0]=max(dp[i-1][0]+(a[i-1]^a[i]),dp[i-1][1]+((a[i-1]+x)^a[i]));
            dp[i][1]=max(dp[i-1][0]+(a[i-1]^(a[i]+x)),dp[i-1][1]+((a[i-1]+x)^(a[i]+x)));
        }
        cout<<max(dp[n][0],dp[n][1])<<"\n";
    }
    return 0;
}