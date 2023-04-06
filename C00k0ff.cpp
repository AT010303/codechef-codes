#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
        {
            int n;
            int a=0,b=0,c=0,d=0,e=0;
            cin>>n;
            string s;
            for(int i=0;i<n;i++)
            {
                cin>>s;
                if(s=="cakewalk")
                {
                    a++;
                }
	            if(s=="simple")
                {
                    b++;
                }
	            if(s=="easy")
                {
                    c++;
                }
	            if(s=="easy-medium" || s=="medium")
                {
                    d++;
                }
	            if(s=="medium-hard" || s=="hard")
                {
                    e++;
                }
            }

            if(a>0 && b>0 && c>0 && d>0 && e>0)
            {
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
return 0;
}