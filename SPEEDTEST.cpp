#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int a,x,b,y;
                cin>>a>>x>>b>>y;
                float sa=a/x;
                float sb=b/y;
                if(sa>sb)
                {
                    cout<<"Alice\n";
                }else{
                    if(sa<sb)
                    {
                        cout<<"Bob\n";
                    }else{
                        cout<<"Equal\n";
                    }
                }

            }
    return 0;
}