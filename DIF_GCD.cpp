#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        long int a,b;
        if(2*n>m)
        {
            cout<<m<<" "<<m<<"\n";
        }else{
            if(m%n==0)
            {
                cout<<m<<" "<<n<<"\n";
            }else{
                long int x=m/2;
                if(m>=2*n)
                {
                    x=2*n;
                }
                long diff= 0;
                for(int i=n; i<x;i++)
                {
                    long d=m/i;
                    long cd=(i*d)-i;
                    if(cd>diff)
                    {
                        a=i;
                        b=i*d;
                        diff=cd;
                    }
                }
                cout<<a<<" "<<b<<"\n";
            }
        }
    }
    return 0;
}