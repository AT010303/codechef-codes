#include<iostream>
#include <numeric>
#include<vector>
using namespace std;

int arraySum(int a[], int n) 
{
    int initial_sum  = 0; 
    return accumulate(a, a+n, initial_sum);
}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n,0);
        int add=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            add=add+a[i];

        }
        //int sum;//sum of eliment of arrar a[]
        //add=arraySum(b,n);
        add=add/(n+1);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]-add<<" ";
            
        }
        cout<<"\n";
        

    }
    return 0;
}