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

        ll a,b,c;
        cin>>a>>b>>c;

        // int cal;

        // cal = a|b|c;
        // int cal2;
        // cal2 = a&b&c;
        
        // cout<<cal<<" "<<cal2<<endl;

        if(a>b && b>c){
            int cal = a|b|c;
            cout<<cal<<endl;
        }else{
            if(a<b && b<c){
                //int cal = larges(a,b,c) + 1;
                int cal1;
                if(a>b && a>c){
                    cal1 = a+1;
                }else{
                    if(b>c){
                        cal1 = b+1;
                    }else{
                        cal1 = c+1;
                    }
                }
                cout<<cal1<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }


    }
    return 0;
}
