#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
                cin>>n;

                int a[n] , b[n];
                //int c[n];
                for(int i=0;i<n;i++){
                    cin>>a[i];
                }

                for(int i=0;i<n;i++){
                    cin>>b[i];

                    //c[i] = a[i] ^ b[i];
                }

                if(a[0] != b[0] || a[n-1] != b[n-1]){
                    cout<<"NO\n";
                    return;
                }

                    int ka = 0 , kb = 0;

                    for(int i=0;i<n;i++){
                        if(a[i] == 0){
                            ka++;
                        }else{
                            kb++;
                        }
                    }

                    for(int i=1 ; i< n-1 ; i++){

                        if(a[i]!= b[i] && a[i]==0 && kb == 0){
                            cout<<"NO\n";
                            return;
                        }

                        if(a[i]!= b[i] && a[i] == 1){
                            cout<<"NO\n";
                            return;
                        }

                    
                        
                    }
                    cout<<"YES\n";
                    return; 

}

int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                solve();
            }
    return 0;
}