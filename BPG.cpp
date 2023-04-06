// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//         while(t--)
//             {
//                 int n;
//                 cin>>n;
//                 int a[n],temp[n];
//                 int flag=0;
//                 for(int i=0;i<n;i++)
//                 {
//                     cin>>a[i];
//                     temp[i]=a[i];
//                 }

//                 for(int i=0;i<n-1;i++)
//                 {
//                     // temp[i]=temp[i]-a[i];
//                     // temp[i+1]=temp[i+1]-a[i];
//                     if(a[i]<=a[i+1] &&(a[i]!=0 && a[i+1]!=0))
//                     // if(a[i]<=a[i+1] &&(a[i+1]!=0))
//                     {
//                         // a[i]-=a[i];
//                         // a[i+1]-=a[i];
//                         temp[i]=temp[i]-a[i];
//                         temp[i+1]=temp[i+1]-a[i];
//                         // a[i]=a[i]-a[i];
//                         // a[i+1]=a[i+1]-a[i];
//                     }
//                     if(a[i]>a[i+1] &&(a[i]!=0 && a[i+1]!=0))
//                     // if(a[i]>a[i+1] &&(a[i]!=0))
//                     {
//                         // a[i]-=a[i+1];
//                         // a[i+1]-=a[i+1];
//                         temp[i]=temp[i]-a[i+1];
//                         temp[i+1]=temp[i+1]-a[i+1];
//                         // a[i]=a[i]-a[i+1];
//                         // a[i+1]=a[i+1]-a[i+1];
//                     }
//                 }

//                 for(int i=0;i<n;i++)
//                 {
//                     // if(temp[i]!=0)
//                     // {
//                     //     flag=1;
//                     //     break;
//                     // }
//                     cout<<temp[i]<<"\t";
//                 }

//                 // if(flag==0)
//                 // {
//                 //     cout<<"YES\n";
//                 // }else{
//                 //     cout<<"NO\n";
//                 // }
//             }
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//         while(t--)
//             {
//                 int n;
//                 cin>>n;
//                 int a[n],temp[n];
//                 int flag=0;
//                 for(int i=0;i<n;i++)
//                 {
//                     cin>>a[i];
//                     temp[i]=a[i];
//                 }

//                 for(int i=0;i<n-1;i++)
//                 {
//                     // temp[i]=temp[i]-a[i];
//                     // temp[i+1]=temp[i+1]-a[i];
//                     if(a[i]<=a[i+1] &&(temp[i]!=0 && temp[i+1]!=0))
//                     {
//                         // a[i]-=a[i];
//                         // a[i+1]-=a[i];
//                         temp[i]=temp[i]-a[i];
//                         temp[i+1]=temp[i+1]-a[i];
//                     }
//                     if(a[i]>a[i+1] &&(temp[i]!=0 && temp[i+1]!=0)){
//                         // a[i]-=a[i+1];
//                         // a[i+1]-=a[i+1];
//                         temp[i]=temp[i]-a[i+1];
//                         temp[i+1]=temp[i+1]-a[i+1];
//                     }
//                 }

//                 for(int i=0;i<n;i++)
//                 {
//                     // if(temp[i]!=0)
//                     // {
//                     //     flag=1;
//                     //     break;
//                     // }
//                     cout<<temp[i]<<"\t";
//                 }

//                 // if(flag==0)
//                 // {
//                 //     cout<<"YES\n";
//                 // }else{
//                 //     cout<<"NO\n";
//                 // }
//             }
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int n;
                cin>>n;
                int a[n],temp[n];
                int flag=0;
                for(int i=0;i<n;i++)
                {
                    cin>>a[i];
                    temp[i]=a[i];
                }

                for(int i=0;i<n-1;i++)
                {
                    if(a[i]<=a[i+1] &&(a[i]!=0 && a[i+1]!=0))
                    {
                        a[i+1]=a[i+1]-a[i];
                        a[i]=a[i]-a[i];
                        
                    }
                    if(a[i]>a[i+1]){
                        a[i]=a[i]-a[i+1];
                        a[i+1]=a[i+1]-a[i+1];
                        
                    }
                }

                for(int i=0;i<n;i++)
                {
                    if(a[i]!=0)
                    {
                        flag=1;
                        break;
                    }
                    //cout<<a[i]<<"\t";
                }

                if(flag==0)
                {
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }
return 0;
}