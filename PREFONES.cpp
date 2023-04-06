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
                string s;
                cin>>s;
                int count=0;
                int max1=0;

                int max2=0;
                int counter1= 0;
                int temp;
            //     if(s[0]=='0'){
            //         for(int i=0;i<s.length();i++){
            //             if(s[i]=='1'){
            //                 count++;
            //             }else{
            //                 max1 = max(max1, count);
            //                 count=0;
            //             }
            //         }
            //     }else{
            //         for(int i=0;i<s.length();i++){
            //             if(s[i] == '0'){
            //                 break;
            //             }else{
            //                 count++;
            //             }

                        


            //         }
            //         temp = count;
                    
            //         for(int i= temp; i<=s.length();i++){
            //             if(s[i]=='1'){
            //                 counter1++;
            //             }else{
            //                 max2 = max(max2, counter1);
            //                 counter1=0;
            //             }
            //         }

            //         max1= max2+ temp;
            //     }

            //     cout<<max1<<endl;
            // }

            
                    for(int i=0;i<s.length();i++){
                        if(s[i] == '0'){
                            break;
                        }else{
                            count++;
                        }

                        


                    }
                    temp = count;
                    
                    for(int i= temp; i<=s.length();i++){
                        if(s[i]=='1'){
                            counter1++;
                        }else{
                            max2 = max(max2, counter1);
                            counter1=0;
                        }
                    }

                    max1= max2+ temp;
                

                cout<<max1<<endl;
            }
    return 0;
}