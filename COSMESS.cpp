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

        int l,b,L,B;
        cin>>l>>b>>L>>B;

        

        int maxstudent = 0;

        if(l<=L && b<= B){
            maxstudent = L*B / (l*b);
        }else if(l<=L){
            if(b<=L)
            maxstudent = L/b;
        }else if(b<=B){
            if(l<=B)
            maxstudent = B/l;
        }
        
       


        // if(l> L && b>B){
        //     maxstudent =0;
        // }

        cout<<maxstudent<<endl;

    }
    return 0;
}
        