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
                int min= INT_MAX;
                for(int i=0;i<n;i++){
                    cin>>a[i];
                    if(abs(a[i])<=min){
                        min = abs(a[i])-1;
                    }
                }
                cout<<min<<endl;



            }
    return 0;
}