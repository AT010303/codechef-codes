#include <bits/stdc++.h>
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

        int val = n/10;
        val = val*10;
        int rem = n%10;

        if(rem<5){
            cout<<100 - val <<endl;
        }else{
            cout<<100 - val -10<<endl;
        }



        

    }
    return 0;
}
