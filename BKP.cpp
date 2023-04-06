#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int n,k;
                cin>>n>>k;
                int bud=k;
                int res=0;
                int c[n],q[n];
                for(int i=0;i<n;i++)
                {
                    cin>>c[i];
                }
                for(int i=0;i<n;i++)
                {
                    cin>>q[i];
                }
                for(int i=0;i<n;i++)
                {
                    if(bud>=c[i]){
                        if(bud>=c[i]*q[i])
                        {
                            res+=q[i];

                        }else{
                            
                        }
                    }
                }

            }
return 0;
}