#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[200001],x;
        cin>>n;
        x=0;
        for(int i=n-1;i>=0;i--)
        {
            cin>>a[i];
            if(a[i]%2==1)
            {
                x^=i;
            }

            if(x==0)
            {
                puts("Cook");
            }else{
                puts("Chef");
            }
        }
    }
    return 0;
}