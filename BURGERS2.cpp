// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int x,y,n,r;
//         cin>>x>>y>>n>>r;
//         int nb=n,pb=0;
//         if((r/n)<x)
//         {
//             cout<<"-1\n";
//         }else{
//             for(int i=0;i<=n;i++)
//             {
//                 if(nb*x + pb*y<=r)
//                 {
//                     nb--;
//                     pb++;
//                 }else{   
//                     break;
//                 }
//             }
//             cout<<nb+1<<" "<<pb-1<<"\n";
//         }
//     }
//     return 0;
// }























// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void solve(int x, int y, int n, int r)
// {
//     int count=0;
//     int pb=r/y;
//     int pb2=0,nb2=n;
//     if(pb==0)
//     {
//         cout<<n<<" "<<0<<"\n";
//         return;
//     }

//     int nb=r/x;
//     if(pb + nb <n)
//     {
//         cout<<-1<<"\n";
//         return;
//     }
//     for(int i=0;i<=n;i++)
//     {
//         if(nb2*x + pb2*y<=r)
//                 {
//                     nb2--;
//                     pb2++;
//                 }else{   
//                     break;
//                 }
//             }
//             cout<<nb2+1<<" "<<pb2-1<<"\n";

    
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int x,y,n,r;
//         cin>>x>>y>>n>>r;
//         if(x>r && y>r)
//         {
//             cout<<-1<<"\n";
//         }else{
//             if(r%y==0)
//             {
//                 int mm=r/y;
//             if(mm>=n)
//             {
//                 cout<<0<<" "<<n<<"\n";
//             }else{
//                 cout<<n-mm<<" "<<mm<<"\n";
//             }
//             }else{
//                 solve(x,y,n,r);
//             }
//         }
//     }
//     return 0;
// }




#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,r;
        cin>>x>>y>>n>>r;
        if(r/x<n)
        {
            cout<<-1<<"\n";
        }else{
            if(r/y>=n)
            {
                cout<<0<<" "<<n<<"\n";
            }else{
                int g=(y*n);
                int f=x-y;
                int m=(r-g)/f;
                if((r-g)%f!=0)
                {
                    m++;
                }
                cout<<m<<" "<<n-m<<"\n";
            }
        }
    }
}