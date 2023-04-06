#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

// int gcd(int a, int b)
// {

//     if(b == 0) {
//             return a;
//     }
//     else {
//         return gcd(b, a % b);
//     }
// }

// int main()
// {
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         /* code */
//         long long int n;
//         cin>>n;
//         long long counter=0;
//         int r=0;
//         for(int p=1;p<=n;p++)
//         {
//             for(int q=1;(q+r)<=n;q++)
//             {
//                 int t=0;
//                 int s=q+r;
//                 long long int hcf= __gcd(p,s);
//                 long long int lcm=(p*(q+r))/hcf;
//                 long long int cal=(p*p)+((q+r)*(q+r))+(hcf*hcf)+(lcm*lcm);
//                 if(cal==n && p==(q+r))
//                 {
//                     counter++;
//                     t=1;
//                     break;
//                 }
                
//                 if(cal==n && p<(q+r)) {
//                     counter++;
//                     counter++;
//                     t=1;
//                     break;
//                 }
//             }
//             r++;
//         }
//         cout<<counter<<'\n';
//         r=0;
//     }    
// }


// int main()
// {
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         /* code */
//         double n;
//         cin>>n;
//         double counter=0;
//         double r=0;
//         for(int p=n;p>=1;p--)
//         {
//             for(int q=n;(q+r)>=1;q--)
//             {
//                 int t=0;
//                 int s=(q+r)*(q+r);
//                 int u=p*p;
//                 double hcf= __gcd(u,s);
//                 double lcm=(p*(q+r))/sqrt(hcf);
//                 double cal=(p*p)+((q+r)*(q+r))+(hcf)+(lcm*lcm);
//                 if(cal==n && p==(q+r))
//                 {
//                     counter++;
//                     t=1;
//                     //break;
//                 }
                
//                 if(cal==n && p<(q+r)) {
//                     counter++;
//                     counter++;
//                     t=1;
//                     //break;
//                 }
//             }
//             r++;
//         }
//         cout<<counter<<'\n';
//         r=0;
//     }    
// }


// int main()
// {
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         /* code */
//         double n;
//         cin>>n;
//         double counter=0;
//         double r=0;

//         int p,q;
//         p=q=1;
//         while(p<=n)
//         {
//             while(q+r<=n)
//             {
//                 int t=0;
//                 int s=(q+r)*(q+r);
//                 int u=p*p;
//                 double hcf= __gcd(u,s);
//                 double lcm=(p*(q+r))/sqrt(hcf);
//                 double cal=(p*p)+((q+r)*(q+r))+(hcf)+(lcm*lcm);
//                 if(cal==n && p==(q+r))
//                 {
//                     counter++;
//                     t=1;
//                     //break;
//                 }
                
//                 if(cal==n && p<(q+r)) {
//                     counter++;
//                     counter++;
//                     t=1;
//                     //break;
//                 }
//                 q++;
//             }
//             r++;
//             p++;
//         }
//          cout<<counter<<'\n';
//             r=0;
//     }    
// }