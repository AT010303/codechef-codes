#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string fed;
        cin>>fed;
        int flag =0;
        for(int i=0;i<fed.length();i++)
        {
            if((fed[i]=='0' && fed[i+1]=='1' && fed[i+2]=='0') || (fed[i]=='1' && fed[i+1]=='0' && fed[i+2]=='1') ){
                flag=1;
                break;
            }
        }
        if(flag==1){
                cout<<"Good\n";
            }else{
                cout<<"Bad\n";
            }
    }
}