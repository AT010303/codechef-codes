#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int a,b,c;
                int num=0;
                cin>>a>>b>>c;
                for(int i=1;i<100;i++){
                    if(a%i!=0 && b%i!=0 && c%i!=0){
                        num=i;
                        break;
                    }
                }

                cout<<num<<"\n";
            }
    return 0;
}