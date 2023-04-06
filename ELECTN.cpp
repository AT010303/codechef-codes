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

        int n;
        cin>>n;
        int i;
        int a[n];
        int count = 0;
        cin >>i;

        for(int j=0;j<n;j++){
            cin>>a[i];
            if(a[i]>= i){
                count++;
            }
        }

        cout<<count<<endl;

    }
    return 0;
}
