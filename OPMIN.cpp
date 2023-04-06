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
                int min = INT_MAX;
                int max = INT_MIN;
                for(int i=0;i<n;i++){
                    cin>>a[i];
                    if(min> a[i]){
                        min = a[i];
                    }

                    if(max < a[i]){
                        max = a[i];
                    }
                }


                int countmax =0 , countmin = 0;

                for(int i=0;i<n ; i++){

                    if(a[i]== min){
                        countmin++;
                    }

                    if(a[i]== max){
                        countmax++;
                    }
                }

                if(countmin >= countmax){
                    cout<< n-countmin<<"\n";
                }else{
                    cout<< n-countmax<<"\n";
                }



                
                
            }
    return 0;
}