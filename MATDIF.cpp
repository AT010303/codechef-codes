#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                long long int n;
                cin>>n;
                long long int a[n][n];

                 long long int num =1;
                 //long long int num1 =2;

                 for (int i = 0; i < n; i++){
                    for (int j = 0; j < n; j++){
                        
                            a[i][j] = 0;
                        
                    }
                }

                // for (int i = 0; i < n; i++){
                //     for (int j = 0; j < n; j++){
                //         if ((i + j) % 2 == 0){
                //             a[i][j] = num++;
                //         }
                //     }
                // }

                // for (int i = 0; i < n; i++){
                //     for (int j = 0; j < n; j++){
                //         if ((i + j) % 2 == 1){
                //             a[i][j] = num++;
                //         }
                //     }
                // }

                for (int i = 0; i < n; i++){
                    for (int j = 0; j < n; j++){
                        
                            if(num<=n*n){
                                a[i][j] = num;
                                num+=2;
                            }else{
                                a[i][j] = num1 ;
                                num1 +=2;
                            }
                        
                    }
                }


                for (int i = 0; i < n; i++){
                    for (int j = 0; j < n; j++){
                        
                        cout<<a[i][j]<<" ";
                    }
                    cout<<"\n";
                }

            }
    return 0;
}