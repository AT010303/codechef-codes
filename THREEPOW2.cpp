#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string str)
{
    int dec_num = 0;
      int power = 0 ;
    int n = str.length() ;
   
      for(int i = n-1 ; i>=0 ; i--){
      if(str[i] == '1'){
        dec_num += (1<<power) ;
      }
      power++ ;
    }
   
    return dec_num;
}

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
                //int dec = binaryToDecimal(s);
                int count=0;
                for(int i=0;i<n;i++){
                    if(s[i]=='1'){
                        count++;
                    }
                }

                if(count == 1 && s[n-1]=='0' && s[n-2]=='0'){
                    cout<<"YES"<<endl;
                }else{
                    if(count == 2 || count == 3){
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }

            }
    return 0;
}