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
            string s,r;
            cin>>s>>r;
            int counter1=0,counter2=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    counter1++;
                }

                if(r[i]=='1')
                {
                    counter2++;
                }
            }

            if(counter1==counter2)
            {
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
return 0;
}