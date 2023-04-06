#include<iostream>
using namespace std;
int main()
{
    int t,sx,sy,ex,ey;
    cin>>t;
    while(t--)
    {
        cin>>sx>>sy>>ex>>ey;
        if(sx!=ex && sy!=ey)
        {
            cout<<"1\n";
        }else{
            cout<<"2\n";
        }
    }
    return 0;
}

