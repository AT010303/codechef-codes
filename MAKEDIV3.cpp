#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                long long int n;
                cin>>n;
                long long int num = pow(10,n-1);
                long long int res;
                for(long long int i= num; i>0;i++){
                    if(i%3==0 && i%9!=0 && i%2!=0){
                        res=i;
                        break;
                    }
                }

                cout<<res<<endl;
            }
    return 0;
}