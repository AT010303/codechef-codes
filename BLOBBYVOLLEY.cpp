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

        string s;
        cin>>s;

        int flg =0;

        //int n = s.size();

        int a=0 , b=0;

        for(int i=0;i<n;i++){
            if(s[i] == 'A'){
                if(flg == 0){
                    a++;
                    flg=0;
                }
                flg=0;
            }else{
                if(flg== 1){
                    b++;
                    flg=1;
                }
                flg = 1;
            }
        }

        cout<<a<<" "<<b<<endl;

    }
    return 0;
}
