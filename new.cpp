#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(((a+b)%2==0 && (a+b)>0)||((c+b)%2==0 && (c+b)>0)||((a+c)%2==0 && (a+c)>0)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}