#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define PB push_back
#define POB pop_back
#define MP make_pair
#define fi first
#define se second
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--){

        int l, v1 , v2;
        cin >> l >> v1 >> v2;
        int tv1 , tv2;

        tv1 = l/v1;
        tv2 = l/v2;
        if(l%v1 != 0) tv1++;
        if(l%v2 != 0) tv2++;

        if(tv1 - tv2 >0){
            cout<< tv1 - tv2-1 <<endl;
        }else{
            cout<<"-1\n";
        }



    }
    return 0;
}
