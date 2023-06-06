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

bool ap(vector<int> seq , int n){
    for(int i=0;i<n-2 ;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k = j+1 ; k<n; k++){
                if(seq[j] - seq[i] == seq[k]-seq[j]) return false;
            }
        }
    }

    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--){

        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        if(ap(arr , n)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }


    }
    return 0;
}
