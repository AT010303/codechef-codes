#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        // if(n!=m && (n%2==0 || m%2==0) )
        // {
        //     cout<<m*(n%2) + n*(m%2)<<"\n";
        // }else{
        //     cout<<(m*(n%2) + n*(m%2))-1<<"\n";
        // }

        if(n%2==0 && m%2==0)
        {
            cout<<"0"<<"\n";
        }else{
            if(n%2==1 && m%2==0)
            {
                cout<<m<<"\n";
            }else{
                if(n%2==0&&m%2==1)
                {
                    cout<<n<<"\n";
                }else{
                    cout<<m+n-1<<"\n";
                }
            }
        }
        
    }
    return 0;
}