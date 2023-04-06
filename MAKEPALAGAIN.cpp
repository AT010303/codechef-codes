#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string a;
        cin>>a;
        // string b;
        // strcpy(b,reverse(a.begin(),a.end())) ;

        if(a==reverse(a.begin(),a.end()))
        {
            cout<<"YES\n";

        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}