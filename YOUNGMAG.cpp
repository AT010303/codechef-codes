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

        int A,B;
        cin>>A>>B;
        if(A%B == 0){
            cout<<"Good Magician\n";
        }else{
            cout<<"Learning\n";
        }

    }
    return 0;
}
