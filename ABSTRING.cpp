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
                 string s;
                 cin>>s;
                 int a[26] = {0};
                 int flag=0;
                 if(n%2!=0){
                    cout<<"NO\n";
                 }else{
                    //sort(s.begin(),s.end());
                    for(int i=0;i<n;i++){
                        a[s[i]-97]=a[s[i]-97]+1;
                    }

                    for(int i=0 ; i<26 ; i++){
                        //cout<<a[i]<<' ';
                        if(a[i]%2!=0){
                            cout<<"No\n";
                            flag=1;
                            break;
                        }
                    }
                    //cout<<flag;
                    if(flag==0){
                        cout<<"Yes\n";
                    }

                 }
            }
    return 0;
}