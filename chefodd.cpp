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

        int n, k;
        cin >> n >> k;
        int x;
        if (n % 2 == 0) {
            x = n / 2;
        } else {
            x = n / 2 - 1;
        }
        if (x < k) {
            cout << "NO" << endl;
        } else if ((x - k) % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        
    }
    return 0;
}
