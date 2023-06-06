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

void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char , int> m;
    for(auto i : s) m[i]++;
    int cnt = 0;
    if(m.size() == s.size()){
        cout<<"0"<<endl;
        return;
    }

    if(m.size() == 1){
        if(n&1){
            cout<<"2"<<endl;
            return;
        }else{
            cout<<"1"<<endl;
            return;
        }
        
    }

    for(auto i : m){
        if(i.second&1) cnt++;

    }


    if(n%2 == 0 && cnt>0){
        cout<<"0"<<endl;
        return;
    }

    if(n&1 && cnt>1){
        cout<<"0\n";
        return;
    }

    cout<<"1\n";

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--){

        solve();

    }
    return 0;
}
