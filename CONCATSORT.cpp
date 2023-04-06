#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int arraySortedOrNot(int arr[], int n)
{
    // Array has one or no element or the
    // rest are already checked and approved.
    if (n == 1 || n == 0)
        return 1;
 
    // Unsorted pair found (Equal values allowed)
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    // Last pair was sorted
    // Keep on checking
    return arraySortedOrNot(arr, n - 1);
}


// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         //vector<int> a(n) , b(n);
//         int a[n],b[n],c[n];
//         vector<int> p(n),q(n);
//         int flag=1;
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//             b[i]=a[i];
//         }

//         sort(b,b+n);

//         if(n==2 || (arraySortedOrNot(a, n)))
//         {
//             cout<<"YES\n";
//         }else{

//             for(int i=0;i<n;i++)
//             {
//                 for(int j=0;j<n;j++)
//                 {
//                     if(b[i]==a[j])
//                     {
//                         p.push_back(a[j]);
//                         if(j==n)
//                         {
//                             flag=0;
//                             break;
//                         }
//                     }else{
//                         q.push_back(a[j]);
//                         if(j==n)
//                         {
//                             flag=0;
//                             break;
//                         }
//                     }
//                 }

//                 if(flag==0)
//                 {
//                     break;
//                 }

//                 for(int i=0;i<q.size();i++)
//                 {
//                     c[i]=q[i];
//                 }

//                 if((arraySortedOrNot(c,q.size())))
//                 {
//                     cout<<"YES\n";
//                 }else{
//                     cout<<"NO\n";
//                 }

//             }

//         }
//     }
//     return 0;
// }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b,b+n);
        vector<int> p(n),q(n);

        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(a[j]==b[i])
                {
                    //p.push_back(a[i]);
                    p[i]=a[j];
                    break;
                }else{
                    //q.push_back(a[j]);
                    q[j]=a[j];
                    if(j=n-1)
                    {
                        flag=1;
                        break;
                    }
                    //continue;
                    
                }

                if(flag==1)
                {
                    break;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<q[i]<<" ";
        }
    }
    return 0;
}