#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int n;
                cin >> n;
                int a[n];
                int count=0;
                for(int i=0;i<n;i++){
                    cin>>a[i];
                    if(a[i]==1){
                        count++;
                    }
                }

                if(n%2 == 0){
                    if((n-count)%2==1){
                        cout<<"NO\n";
                    }else{
                        cout<<"YES\n";
                    }
                }else{
                    if((n-count)%2==1){
                        cout<<"NO\n";
                    }else{
                        cout<<"YES\n";
                    }
                }



            }
    return 0;
}