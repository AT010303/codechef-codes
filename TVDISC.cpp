#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a-c<b-d)
        {
            cout<<"First\n";
        }else{
            if(b-d==a-c)
            {
                cout<<"any\n";
            }else{
                cout<<"second\n";
            }
        }
    }
    return 0;
}