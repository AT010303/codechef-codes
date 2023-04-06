#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int n;
                cin>>n;
                int v[2*n];

                for(int i=0;i<2*n;i++){
                    cin>>v[i];
                }

                sort(v,v+(2*n));
                // for(int i=0;i<2*n;i++){
                //     cout<<v[i]<<" ";
                // }
                // cout<<endl;
                int diff=abs(v[0]-v[n]);
                
                //cout<<diff<<endl;

                for(int i=0;i<=n;i++){

                    if(abs(v[i]-v[n+i-1])<=diff){
                        diff=abs(v[i]-v[n+i-1]);
                    }

                    //cout<<diff<<endl;



                }
                cout<<diff<<endl;
    
}

return 0;
}