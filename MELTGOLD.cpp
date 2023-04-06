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

        int x ,y;
        cin>>x>>y;
        int temp =y;

        if(x<=y){
            cout<<0<<endl;
            return 0;
        }

        for(int i =1 ; i<=x-y;i++){

            temp  = temp + i*(i+1)/2;
            if(temp>=x){
                cout<<i<<endl;
                break;
            }
        }

    }
    return 0;
}
