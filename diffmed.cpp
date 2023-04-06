#include<bits/stdc++.h>
using namespace std;


// void solve()
// {
//     cin>>n;
//     a[1]=0;
//     l=0;
//     r=0;
//     for(int i=2;i<=n;++i)
//     {
//         if(i%2==0)
//         {
//             a[i]=--l;

//         }else{
//             a[i]=++r;
//         }
//     }
//     for(int i=1;i<=n;++i)
//     {
//         cout<<a[i]-l+1<<" ";
//         cout<<"\n";
//     }
// }
int main()
{
    int t;
    cin>>t;
    int n,a[1001],l,r;
    while(t--)
    {
        cin>>n;
    a[1]=0;
    l=0;
    r=0;
    for(int i=2;i<=n;++i)
    {
        if(i%2==0)
        {
            a[i]=--l;

        }else{
            a[i]=++r;
        }
    }
    for(int i=1;i<=n;++i)
    {
        cout<<a[i]-l+1<<" ";
        cout<<"\n";
    }
    }
    return 0;
}
