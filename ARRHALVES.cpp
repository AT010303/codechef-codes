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
                int num=2*n;
                int a[2*n];
                long long int counter=0;

                for(int i=0;i<2*n;i++){
                    cin>>a[i];
                }
                
                // for(int i=0;i<n-1;i++){
                //     for(int j=0;j<num-i-1;j++){
                //         if(a[j]>a[j+1]){
                //             int temp = a[j];
                //             a[j]=a[j+1];
                //             a[j+1]=temp;
                //             counter++;
                //         }
                //     }
                // }

                // for(int i=0;i<num;i++){
                //     cout<<a[i]<<" ";
                    
                // }
                // cout<<endl;


                for(int i=0;i<n;i++){
                    if(a[i]>n){
                        counter = counter+n-i;
                    }
                }

                for(int i=n;i<2*n;i++){
                    if(a[i]<n+1){
                        counter = counter+i-n;
                    }
                }

                // vector<int> p,q;

                // for(int i=0;i<2*n;i++){
                //     if(i<n && a[i]>=n+1){
                //         p.push_back(i);
                //     }else{
                //         if(i>=n && a[i]<n+1)
                //         q.push_back(i);
                //     }
                // }

                // counter = p.size();

                // for(int i=0;i<p.size();i++){
                //     counter=counter + q[i] - p[i]-1;
                // }






                cout<<counter<<endl;

            }
    return 0;
}