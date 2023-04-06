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
                int num;
                int flag=0;
                while(n>0){
                    num=n%10;
                    if(num==7){
                        flag=1;
                        break;
                    }

                    n=n/10;
                }

                if(flag==0){
                    cout<<"NO\n";
                }else{
                    cout<<"YES\n";
                }
            }
    return 0;
}