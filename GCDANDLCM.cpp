#include<iostream>
#include<algorithm>
using namespace std;
//int static dp[1001][1001];
// int gcd(int a, int b)
// {   
//     if(dp[a][b] != -1)
//         return dp[a][b];
 
//     // a is greater
//     if (a > b)
//         dp[a][b] = gcd(a-b, b);
     
//     // b is greater
//     else
//         dp[a][b] = gcd(a, b-a);
     
//     // return dp
//     return dp[a][b];
// }

// int gcd(int a, int b)
// {
//     return b == 0 ? a : gcd(b, a % b);   
// }

// int gcd(int a, int b)
// {
//     int result = min(a, b); // Find Minimum of a nd b
//     while (result > 0) {
//         if (a % result == 0 && b % result == 0) {
//             break;
//         }
//         result--;
//     }
//     return result; // return gcd of a nd b
// }


// int gcd(int x, int y){
//     int a, b, r;
//     if(x > y){
//         a = x;
//         b = y;
//     }
//     else{
//         a = y;
//         b = x;
//     }
//     while(b != 0){
//         r = a % b;
//         a = b;
//         b = r;
//     }
//     return a;
// }


int gcd(int a, int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}


int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        long long int n;
        cin>>n;
        long long counter=0;
        for(int p=1;p<=n;p++)
        {
            for(int q=1;q<=n;q++)
            {
                long long int hcf=gcd(p,q);
                long long int lcm=(p*q)/hcf;
                long long int cal=(p*p)+(q*q)+(hcf*hcf)+(lcm*lcm);
                if(cal==n)
                {
                    counter++;
                }
            }
        }
        cout<<counter<<'\n';
    }    
}