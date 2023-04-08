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

        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;


        if(s[0] == '1'){

            string str;
            // for(int i=0;i<k;i++){
            //     str = str + '0';
            // }
            str.resize(k , '0');
            s = s + str;
            cout<<s<<endl;

        }else{
            s[0] = '1';
            string str;
            // for(int i=0;i<k-1;i++){
            //     str = str + '0';
            // }
            str.resize(k-1 , '0');
            s = s + str;
            cout<<s<<endl;

        }

    }
    return 0;
}
