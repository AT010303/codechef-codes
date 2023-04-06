// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// void FillPrefixSuffix(int prefix[],int arry[],int suffix[], int n)
// {
//     prefix[0]==arry[0];
//     for(int i=1;i<n;i++)
//     {
//     prefix[i]= __gcd(prefix[i-1],arry[i]);
//     }

//     suffix[n-1]=arry[n-1];

//     for(int i=n-2;i>=0;i--)
//         {
//         suffix[i] = __gcd(suffix[i+1],arry[i]);
//         }
// }

// int GCDoutsideRange(int l, int r, int prefix[], int suffix[], int n)
// {
//     if(l==0)
//     {
//         return suffix[r+1];
//     }
     

//      if (r==n-1)
//      {
//         return prefix[l-1];
//      }
        
//         return __gcd(prefix[l-1],suffix[r+1]);

// }

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int n;
//         scanf("%d",&n);

//             int prefix[n] , suffix[n];
//             int arry[n];

//             for(int i=0;i<n;i++)
//              scanf("%d",&arry[i]);

//              FillPrefixSuffix(prefix , arry, suffix, n);

//              int ans =0;
//              for(int i=0;i<n; i++)
//              {
//                 if(GCDoutsideRange(i,i,prefix , suffix, n) > 1)
//                 {
//                     ans++;
//                 }
//              }

//              printf("%d\n",ans);
//     }
//     return 0;
// }

//#include<iostream>
// int gcd(int a, int b)
// {
//   int hcf;
//   for(int i=1; i<=a && i<=b; i++)
//   {
//     if(a%i==0 && b%i==0)
//     {
//       hcf = i;
//     }
//   }
//   return hcf;
// }

// int gcd(int n1 , int n2)
// {
//     int hcf;
//     while(n1!=n2)
//     {
//         if(n1 > n2)
//             n1 -= n2;
//         else
//             n2 -= n1;
//     }

//     return n1;
// }


// int main()
// {
//     int t,i;
//     scanf("%d",&t);
//     for(i=0;i<t;i++)
//     {
//         int n;
//         scanf("%d",&n);
//         int a[n];
//         for(int p=0;p<n;p++)
//         {
//             scanf("%d",&a[p]);
//         }

//         int prefixgcd[n];
//         prefixgcd[0]=a[0];
//         for(int p=1;p<n;p++)
//         {
//             prefixgcd[p]=gcd(prefixgcd[i-1],a[i]);
//         }

//         int suffixgcd[n];
//         suffixgcd[n-1]=a[n-1];
//         for(int p=n-2;p>=0;p--)
//         {
//             suffixgcd[p]=gcd(suffixgcd[p+1],a[p]);
//         }

//         int strongElement=0;
//         for(int p=0;p<n;p++)
//         {
//             if(p==0 && suffixgcd[1]>1)
//             {
//                 strongElement++;
//             }
//             else if(p==n-1 && prefixgcd[n-2]>1)
//                 {
//                     strongElement++;
//                 }
//                 else if(gcd(prefixgcd[p-1],suffixgcd[p+1])>1)
//                     {
//                         strongElement++;
//                     }
//         }

//         printf("%d\n",strongElement);
//         strongElement=0;
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int T=0;
    cin>>T;
    while (T--)
    {
        int N=0;
        cin >> N;
        vector<int> A(N);
        for(int i=0;i<N;++i)
        {
            cin >> A[i];
        }

        vector<int> prefixGCD(N);
        prefixGCD[0]=A[0];
        for(int i=1;i<N;++i)
        {
            prefixGCD[i]= __gcd(prefixGCD[i-1], A[i]);
        }

        vector<int> suffixGCD(N);
        suffixGCD[N-1]=A[N-1];
        for(int i=N-2;i>=0;--i)
        {
            suffixGCD[i]= __gcd(suffixGCD[i+1], A[i]);
        }

        int strong=0;
        for(int i=0;i<N;++i)
        {
            if (i==0 && suffixGCD[1]>1)
            {
                strong++;
            }else if(i==N-1 && prefixGCD[N-2]>1)

            {
                strong++;
            }else if(__gcd(prefixGCD[i-1],suffixGCD[i+1])>1)
            {
                strong++;
            }
        }

        cout<<strong << '\n';

    }
}