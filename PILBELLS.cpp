// The Child of Prophecy has embarked on a journey to save the land of the Fae.On her journey, she must ring N Bells of Pilgrimage.
// The Child of Prophecy has an initial mana level of P. After that: 
// Each of the first  X bells she rings will increase her mana level by  10

// Each of the remaining bells will increase her mana level by 5
// As a bonus, once the final bell is rung, her mana level will increase by a further 20
// K bells have been rung so far. What is the current mana level of the Child of Prophecy?

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
        int N,X,K,P;
        cin >> N >> X >> K >> P;

        int ans = 0;

        if(K < X){
            ans = P + (K * 10);
        }else if(K == X){  
            ans = P + (K * 10) + (N - K) * 5;
        }else{
            ans = P + (X * 10) + (K - X) * 5 + (N - K) * 5 + 20;
        }

        cout << ans << endl;

    }
    return 0;
}
