#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int n,x;
                cin>>n>>x;
                int plus=0,minus=0,mul=0;

                if(x>n+1){
                    cout<<-1<<endl;
                }else{
                    if(x<=0){
                        if(abs(x)>=n){
                            cout<<-1<<endl;
                        }else{
                            for(int i=0;i<abs(x)+1;i++){
                                cout<<"-";
                            }

                            for(int i=0;i<(n-(abs(x)+1));i++){
                                cout<<"*";
                            }
                            cout<<endl;
                        }
                    }else{

                        for(int i=0;i<x-1;i++){
                            cout<<"+";
                        }

                        for(int i=0;i<n-(x-1);i++){
                            cout<<"*";
                        }
                        
                        cout<<endl;
                    }
                }
            }
    return 0;
}