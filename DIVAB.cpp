#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int counter=0;

        if(a%b==0)
        {
            cout<<-1<<"\n";
        }else{
        //     for(int i=1;i>0;i++)
        // {
        //     if(n+counter%a==0 && n+counter%b !=0)
        //     {
        //         cout<<n+counter<<"\n";
        //         break;
        //     }else{
        //         counter++;
        //     }
        // }

        int x=n;
        if(x%a!=0)
        {
            x=n+a-(x%a);
        }

        while(!(x%a==0 && x%b!=0))
        {
            x=x+a;
        }

        cout<<x<<"\n";
        }
        
    }
    return 0;
}