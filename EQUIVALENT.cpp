#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
        while(t--)
            {
                int res=0;
                int a,b;
                cin>>a>>b;
                for(int x=1 ; x<a*b;x++){
                    for(int y=1 ; y<a*b;y++){
                        if(pow(a,x)==pow(b,y)){
                            res=1;
                            //cout<<x<<" "<<y<<endl;
                            break;
                        }
                    }
                    if(res== 1){
                        break;
                    }
                }

                if(res==1){
                    cout<<"YES\n";
                }else{
                    cout<<"No\n";
                }
            }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//         while(t--)
//             {
//                 int x;
//                 cin>>x;
//                 if(x%25==0){
//                     cout<<x/25<<endl;
//                 }else{
//                     cout<<(x/25)+1<<endl;
//                 }
//             }
//     return 0;
// }