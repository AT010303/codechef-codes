
// // Chef bought a new digital lock, but is quite suspicious of its actual strength in keeping out pesky thieves. So, he wants to find out how quickly he can open the lock.

// // On its screen, there is a string of digits S of length N.
// // There is also a secret code K of length M (1≤M≤10), which acts as the key to the lock.The lock will open if K is present anywhere in S as a contiguous substring.

// // Operating the lock is simple: Chef can choose an index i, and either increment Si by 1, or decrement it by 1.
// // Here, the digits are cyclic, following the order 0→1→2→3→…→8→9→0→…In particular, incrementing 9 will turn it into 0 and decrementing 0 will turn it into 9.
// // You are given S and K. What's the minimum number of moves Chef needs to open the lock?


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// #define PB push_back
// #define POB pop_back
// #define MP make_pair
// #define fi first
// #define se second
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T;
//     cin >> T;
//     while (T--){

//         int n , m;
//         cin>>n>>m;
//         string s;
//         cin>>s;
//         string k;
//         cin>>k;

//         int minmoves = INT_MAX;

//         for(int i=0 ; i< n ; i++){
//             int moves = 0;

//             for (int j = 0; j < m; j++) {
//             int diff = abs(s[(i + j) % n] - k[j]);
//             moves += min(diff, 10 - diff);
//             }

//             minmoves = min (minmoves , moves);
//         }

//         cout<<minmoves<<endl;
        



//     }
//     return 0;
// }


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

int get(const string& s, const string& k, int i) {
    int ans = 0;
    for (int j = 0; j < k.length(); j++) {
        int a = abs(s[i + j] - k[j]);
        if (a > 5) a = 10 - a;
        ans += a;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        string k;
        cin >> k;

        int minmoves = INT_MAX;

        for (int i = 0; i < n - m + 1; i++) {
            int moves = get(s, k, i);
            minmoves = min(minmoves, moves);
        }

        cout << minmoves << endl;
    }
    return 0;
}
