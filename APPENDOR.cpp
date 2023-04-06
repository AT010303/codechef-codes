#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int n,num;
                cin>>n>>num;
                int a[n];
                for(int i=0;i<n;i++){
                    cin>>a[i];
                }
                
                int res = a[0];

                for(int i=1;i<n;i++){
                    res=res|a[i];
                }

                res = num - res;
                int soln= res & num;
                if(soln == res){
                    cout<<res<<endl;
                }else{
                    cout<<-1<<endl;
                }
         
            }
    return 0;
}