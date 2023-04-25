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
        vector<int> a(n);

        for(int i =0;i<n;i++){
            cin>>a[i];
        }

        map<int ,int> next;

        for(int i=1;i<=10 ; i++){
            next[i] = 1;
        }

        vector<int>  b(n , -1);
        bool flag = true;

        for(int i=0;i<n;i++){
            int temp = a[i];
            if(next[temp]>10){
                flag = false;
                break;
            }

            b[i] = next[temp];
            next[temp]++;

            for(int j = temp+1 ; j<=10;j++){
                next[j] = max(next[j] , next[temp]);
            }
        }

        cout<<"Case #" << T << ": ";
        if(flag){
            for(int i=1; i<=10;i++){
                for(int j=0;j<n;j++){
                    if(a[j] == i){
                        cout<< a[j] << " ";
                    }
                }
            }
            cout<<endl;
        }else{
            cout<<"IMPOSSIBLE\n";
        }


    }
    return 0;
}


