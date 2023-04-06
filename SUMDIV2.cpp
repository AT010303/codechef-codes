#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int x,y;
                //int res=21;
                
                cin>>x>>y;
                // int mini = min(x,y);
                // int hcf = __gcd(x,y);
                int res;
                // for (int i=mini;i>=0;i++){
                //     if(x==y){
                //         res=x;
                //         break;
                //     }else{

                //     if((((i+x)%y)==0)&&((i+y)%x==0)){
                //         res=i;
                //         break;
                //     }
                    
                //     }
                // }

                if(x==y){
                    res=x;
                }else{
                    res=(x*y)-x-y;
                }

                cout<<res<<endl;

            }
    return 0;
}