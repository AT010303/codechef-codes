#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x;
        cin>>x;
        cout<<__builtin_popcountll(x)-1<<"\n";
    }
    return 0;
}