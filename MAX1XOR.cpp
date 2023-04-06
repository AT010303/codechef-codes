#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define PB push_back
#define POB pop_back
#define MP make_pair
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--){

        int n;
        cin>>n;
        string s;
        cin>>s;
        int counter1= 0;
        int counter2= 0;
        string str = "1";
        string str2 = "0";

        for(int i=1;i<n;i++){

            
               
               if(str[i-1] == s[i-1]){
                str+="0";
               }else{
                str+="1";
               }

               if(str2[i-1] == s[i-1]){
                str2+="0";
               }else{
                str2+="1";
               }
            

            
        }

            
        for(int i= 0 ;i<n; i++){
            if(str[i]=='1'){
                counter1++;
            }
            if(str2[i]=='1'){
                counter2++;
            }

        }

        cout<<max(counter1,counter2)<<endl;

    }
    return 0;
}
