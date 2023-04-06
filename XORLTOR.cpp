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
                int a[n];
                int counter=0;
                for(int i=0 ;i<n;i++)
                {
                    cin>>a[i];
                }

                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(i<j && i!=j){
                        //         if(a[i]^a[j]<a[i]|a[j])
                        // {
                        //     counter++;
                        //     //cout<<a[i]^a[j];
                        //     //cout<<a[i]|a[j];
                        //     printf("%d\n",a[i]^a[j]);
                        //     printf("%d\n",a[i]|a[j]);
                        //     if(a[i]^a[j]==a[i]|a[j])
                        //     {
                        //         counter--;
                        //     }
                        //     cout<<endl;

                        // }

                        int p,q;
                        p=a[i]^a[j];
                        q=a[i]|a[j];

                        if(p<q)
                        {
                            counter++;
                        }
                        }
                        
                    }
                    //counter--;
                }

                cout<<counter<<endl;
                counter=0;
            }
return 0;
}