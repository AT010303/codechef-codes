#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n=0;
        string a;
        cin>>n>>a;
        int counter=0;
        for(int p=0;p<n-1;++p)
        {
            if(a[p]=='1' && a[p+1]=='0')
            {
                counter++;
            }
        }

        cout<<counter<<"\n";
    }
    return 0;
}