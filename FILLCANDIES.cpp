#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m;
        cin>>n>>k>>m;//n=number of candies : k= no of pockets : M:pocket capacity
        if(n%(k*m)==0)
        {
            cout<<n/(k*m)<<"\n";
        }else{
            cout<<(n/(k*m))+1<<"\n";
        }

    }
    return 0;
}