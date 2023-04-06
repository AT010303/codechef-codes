#include<bits/stdc++.h>
using namespace std;

// int gcd(int a, int b)
// {
//     int HCF = ((a < b) ? a : b);
//     while (HCF > 0) {
//         if (a % HCF == 0 && b % HCF == 0) {
//             break;
//         }
//         HCF--;
//     }
//     return HCF;
// }


int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int x,y;
                cin>>x>>y;
                int res;
                res=gcd(x,y);
                cout<<res<<"\n";
            }
    return 0;
}