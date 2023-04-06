#include<iostream>
#include <numeric>
using namespace std;

int arraySum(int a[], int n) 
{
    int initial_sum  = 0; 
    return accumulate(a, a+n, initial_sum);
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        int sum=arraySum(b,n);
        if(sum%2==0)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }



        


    }
    return 0;
}