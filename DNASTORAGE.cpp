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
        for(int i=0;i<n;i=i+2)
        {
            if(s[i]=='0' && s[i+1]=='0')
            {
                cout<<'A';
            }
            if(s[i]=='0' && s[i+1]=='1')
            {
                cout<<'T';
            }
            if(s[i]=='1' && s[i+1]=='0')
            {
                cout<<'C';
            }
            if(s[i]=='1' && s[i+1]=='1')
            {
                cout<<'G';
            }
        }
        cout<<endl;
    }
    return 0;
}