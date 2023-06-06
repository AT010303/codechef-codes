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
        vector<int> spell(n);

        for(int i=0;i<n;i++) cin>>spell[i];

        int largestSpell=0;
        vector<bool> visited(n , false);

        for(int i=0;i<n;i++){
            if(!visited[i]){
                int count=0;
                int curr=i;

                while(!visited[curr]){
                    visited[curr]=true;
                    count++;
                    curr = spell[curr];
                }

                largestSpell = max(largestSpell , count);
            }
        }

        cout<<largestSpell<<endl;

    }
    return 0;
}
