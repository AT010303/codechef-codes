#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int a,b;
                cin>>a>>b;
                int gcdab = gcd(a,b);


                cout<<lcm(a,gcdab)- gcd(b,gcdab)<<endl;
            }
    return 0;
}