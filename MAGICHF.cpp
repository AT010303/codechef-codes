#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
        {
            int n,x,s;
            cin>>n>>x>>s;
            int a[s],b[s];
            int track=x;// tracks the position

            for(int i=0;i<s;i++)
            {
                cin>>a[i]>>b[i];
            }

            for(int i=0;i<s;i++)
            {
                if(a[i]==track && b[i]!=track)
                {
                    track=b[i];
                }else{
                    if(a[i]!=track && b[i]==track){
                        track=a[i];
                    }else{

                    }
                }
            }
            cout<<track<<endl;
        }
return 0;
}