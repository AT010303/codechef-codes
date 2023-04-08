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

        int t, n;
        cin>>t>>n;
        double currentrun = 0;
        int score[n];
        for(int i=0;i<n;i++){
            cin>>score[i];
            currentrun = currentrun+ score[i];
        }

        double rr = 0.0f;
        rr = (t-currentrun)/(20-n);

        if(rr<= 10){
            cout<<"MI"<<endl;
            cout<<rr<<endl;
        }else{
            cout<<"CSK"<<endl;
        }


    }
    return 0;
}
