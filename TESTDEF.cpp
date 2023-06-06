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
    
    int n ,q;
    cin>>n>>q;

    vector<int> inval(n);
    for(int i=0;i<n;i++) cin>>inval[i];

    while(q--){
        int quertType;
        cin>>quertType;

        if(quertType == 1){
            int l,r,x,y;
            cin>>l>>r>>x>>y;

            for(int i=l-1 ; i<=r-1;i++){
                string str = to_string(inval[i]);
                
                for(int j=0 ; j<str.size();j++){
                    string X = to_string(x);
                    string L = to_string(y);
                    if(str[j] == X[0] && y!=0){
                        str[j] = L[0];
                    }
                    
                }
                
                int temp = stoi(str);

                inval[i] = temp;
            }
        }else if(quertType ==2){
            int l,r;
            cin>>l>>r;
            int sum = 0;

            for(int i=l-1;i<=r-1;i++){
                sum+=inval[i];
            }
            cout<<sum<<endl;
        }
    }



    return 0;
}
