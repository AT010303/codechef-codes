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

        int a,b;
        cin>>a>>b;

        int p = 1;

        int q = -(a+b);

        int r = a*b;

        if(q == 0) cout<<p<<" "<<r<<endl;
        else if(r == 0) cout<<p<<" "<<q<<endl;
        else if(q == 0 && r == 0) cout<<p<<endl;
        else cout<<p<<" "<<q<<" "<<r<<endl;


        

    }
    return 0;
}
