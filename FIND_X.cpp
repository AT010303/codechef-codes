#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                long long int a,b,c,d;
                cin>>a>>b>>c>>d;
                if((a+1)%b == (c+1)%d){
                    cout<< 1 <<"\n";
                }else{
                    long long int lcm1 = lcm(b,d);
                    cout<<lcm1 - (a%b)<<"\n";
                }
            }
    return 0;
}