#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                unsigned long long int n;
                cin>>n;

                    if(n==0){
                        int a=2,b=1,c=3,d=3;
                        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                        
                    }else{
                        if(n==1){
                            int a=2,b=4,c=3,d=1;
                        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                    
                    }else{
                        unsigned long long int a,b,c,d;
                //long long int a ,d;
                //b=ULLONG_MAX-1;
                // int a,d,n;

                a=2;
                b=1;

                    for(int i=1;i<=ULLONG_MAX;i++)
                    {
                        d=i^n;
                        if((d>0) && (d<=n))
                        {
                            c=i;
                            break;
                        }
                    }

                    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                    }
                    }

                

                    
            }
    return 0;
}