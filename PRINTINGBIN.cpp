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

        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>> arr[i];
            if(arr[i] == 0) cout<< 1 << " ";
            else cout<< 0 <<" ";
        }
        cout<<endl;

        

    }
    return 0;
}
