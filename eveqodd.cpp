#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long eve=0,odd=0;
        vector<long long> a(2*n),ev;
        for(long long i=0;i<2*n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                eve++;
                ev.push_back(a[i]);
            }else{
                odd++;
            }
        }
        if(eve==odd)
        {
            cout<<"0\n";
        }else{
            if(odd>eve)
            {
                long long sub=(odd-eve)/2;
                cout<<sub<<"\n";
            }else{
                long long ans=0;
                long long sub=(eve-odd)/2;
                long long trav=0;
                while(sub)
                {
                    
                }
            }
        }
    }
    return 0;
}