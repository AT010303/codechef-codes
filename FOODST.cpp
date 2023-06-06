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

        int n , k;
        cin>>n>>k;
        vector<int> pri(n);

        for(int i=0;i<n;i++) cin>>pri[i];


        sort(pri.begin() , pri.end(), greater<int>());

        int maxDishes=0;
        int remaningmoney = k;
        for(int i=0 ; i<n;){
            if(remaningmoney >= pri[i]){
                maxDishes++;
                remaningmoney -= pri[i];

            }else{
                i++;
            }
        }

        cout<<maxDishes<<endl;

    }
    return 0;
}
