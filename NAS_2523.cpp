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

        
        if(n%2==0){
            for(int i=n;i>0;i--){
                if(i==1){
                    cout<<i<<endl;
                }else{
                    cout<<i<<" ";
                }
            }
        }else{
            cout<<-1;
        }



    }
    return 0;
}


