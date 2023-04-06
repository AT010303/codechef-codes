#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,o;
        cin>>n;
        // int a[n];
        // for(int i=0;i<n;i++)
        // {
        //     cin>>a[i];
        // }

        vector<int> v;
        map<int,int>m;

        for(int i=0;i<n;i++)
        {
            cin>>o;
            v.push_back(o);
        }

        for(int i=0;i<n;i++)
        {
            m[v[i]]++;
        }

        vector<int>v2;
        for(auto i:m)
        {
            v2.push_back(i.second);
        }    

        int e=0;
        for(int i=0;i<v2.size();i++)
        {
            if(v2[i]>e)
            {
                e=v2[i];
            }
        }

        if(count(v2.begin(),v2.end(),e)>1)
        {
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
    return 0;
}