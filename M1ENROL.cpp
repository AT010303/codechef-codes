#include<iostream>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x<y)
        {
            cout<<y-x<<"\n";
        }else{
            cout<<"0\n";
        }
    }
    return 0;
}