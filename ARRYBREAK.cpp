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
                int a[n];
                int oddcounter=0;
                for (int i = 0; i < n; i++)
                {
                    cin>>a[i];
                    if(a[i]%2==1){
                        oddcounter++;
                    }
                }

                if(oddcounter>n-oddcounter){
                    cout<<n-oddcounter<<endl;
                }else{
                    cout<<oddcounter<<endl;
                }
                
                
            }
    return 0;
}