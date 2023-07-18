// Chef purchased a new herbicide, and now wants to test its effectiveness.

// Initially, there are no weeds in Chef's garden.
// For each i=1,2,3,…,N, exactly one new weed will pop up in the garden at the start of day Ai.
// It is known that  A1 <A2<…<AN.

// Chef can spray the herbicide at most once per day.
// Any weed that receives the spray K or more times in total will die.

// Chef would like to know: is it possible that after M days, all the weeds are gone?

// Input Format
// The first line of input will contain a single integer  T, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains three space-separated integers  N, M, and  K — the number of weeds, the total number of days, and the number of sprays needed to kill a weed, respectively.
// The second line of each test case contains N space-separated integers A1,A2,…,A  N: the days on which new weeds show up.


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

        int N,M,K;;
        cin >> N >> M >> K;
        vector<int> A(N);
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        int ans = 0;
        int i = 0;
        int j = 0;
        int day = 1;
        while (i < N && j < N){
            if (A[j] == day){
                j++;
            }
            else{
                if (day - A[i] >= K){
                    i++;
                }
                else{
                    ans++;
                }
            }
            day++;
        }

        cout << ans << endl;

    }
    return 0;
}
