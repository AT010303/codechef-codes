#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int a,b,c,d;
                cin>>a>>b>>c>>d;
                int n[9];
                for(int i=0;i<9;i++){
                    n[i]=0;
                }

                for(int i=a;i<=b;i++){
                    n[i]=1;
                }
                for(int i=c;i<=d;i++){
                    n[i]=1;
                }

                int count=0;

                for(int i=1;i<9;i++){
                    if(n[i]==1){
                        count++;
                    }
                }

                cout<<count<<endl;
                
            }
    return 0;
}