#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define PB push_back
#define POB pop_back
#define MP make_pair
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int T;
    cin >> T;
    while (T--){

        long long x, y;
        cin>>x>>y;

        long long left = (x*x*x*x) + 4*y*y;
        long long right = 4*x*x*y;


        if(left == right){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }



    }
    return 0;
}
