#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n , r , rev=0, temp;
       cin>>n;
       temp=n;
       while(n>0)
       {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
       }

       if(temp==rev)
       {
        cout<<"wins\n";
       }else{
        cout<<"loses\n";
       }

    }
    return 0;
}