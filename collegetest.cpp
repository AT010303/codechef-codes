// #include "bits/stdc++.h"
// using namespace std;
// typedef long long int ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// #define PB push_back
// #define POB pop_back
// #define MP make_pair
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int n;
//     cin>>n;

//     vector<string> run;
//     int totl;

//     for(int i=0 ; i<n;i++){
//         cin>>run[i];
//     }

//     for(int i=0;i<n;i++){
//         if(run[i] == "+"){
//             totl = stoi(run[i-1]) + stoi(run[i-2]);
//             string temp = to_string(totl);
//             run[i] = temp;

//         }


//         if(run[i] == "C"){
//             // totl = stoi(run[i-1]) + stoi(run[i-2]);
//             // string temp = to_string(totl);
//             // run[i] = temp;
//             run[i]="0";
//             run[i-1]="0";

//         }

//         if(run[i] == "D"){
//             // totl = stoi(run[i-1]) + stoi(run[i-2]);
//             // string temp = to_string(totl);
//             // run[i] = temp;
            

//         }


//     }

//     return 0;
// }



// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     stack<int> s;
//     for (int i = 0; i < n; i++) {
//         string op;
//         cin >> op;
//         if (op == "+") {
//             int prev1 = s.top(); s.pop();
//             int prev2 = s.top(); s.pop();
//             s.push(prev2);
//             s.push(prev1);
//             s.push(prev1 + prev2);
//         } else if (op == "D") {
//             int prev = s.top(); s.pop();
//             s.push(prev);
//             s.push(prev * 2);
//         } else if (op == "C") {
//             s.pop();
//         } else {
//             int score = stoi(op);
//             s.push(score);
//         }
//     }
//     int sum = 0;
//     while (!s.empty()) {
//         sum += s.top(); s.pop();
//     }
//     cout << sum << endl;
//     return 0;
// }


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
    
    int n;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "+") {
            int prev1 = s.top(); s.pop();
            int prev2 = s.top(); s.pop();
            s.push(prev2);
            s.push(prev1);
            s.push(prev1 + prev2);
        } else if (op == "D") {
            int prev = s.top(); s.pop();
            s.push(prev);
            s.push(prev * 2);
        } else if (op == "C") {
            s.pop();
        } else {
            int score = stoi(op);
            s.push(score);
        }
    }
    int sum = 0;
    while (!s.empty()) {
        sum += s.top(); s.pop();
    }
    cout << sum << endl;


    return 0;
}
