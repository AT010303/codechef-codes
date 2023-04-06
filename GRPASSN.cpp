//pata nahi kya kiya par kuch to kiya


#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        //int p[n];
        // for(int j=0;j<n;j++)
        // {
        //     cin>>p[j];
        // }

        unordered_map<int,int>p;
        
            for(int j=0;j<n;j++)
            {
                int z=0;
                cin>>z;
                p[z]++;
            }
        

        //sort(p,p+n);
        bool flag=false;
        // for(int p=0;p<n;p++)
        // {
        //     if()
        // }

        for(auto it=p.begin();it!=p.end();it++)
        {
            if(it->second%it->first != 0)
            {
                flag=true;
                break;
            }

        }

        if(flag==false)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }



    }
    return 0;
}