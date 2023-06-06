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
//     int T;
//     cin >> T;
//     while (T--){

//         int a[26];
//         for(int i=0;i<26 ;i++){
//             cin>>a[i];
//         }

//         int nw;
//         cin>>nw;
//          vector<string> vs;

//          for(int i=0;i<nw;i++){

//             string temp;
//             cin>>temp;
//             vs.push_back(temp);
//          }


    





        

//     }
//     return 0;
// }



// #include "bits/stdc++.h"
// using namespace std;
// typedef long long int ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// #define PB push_back
// #define POB pop_back
// #define MP make_pair

// using namespace std;

// string encodeWord(string word, const unordered_map<char, char>& mapping) {
//     string encoded = "";
//     for (char c : word) {
//         encoded += mapping.at(c);
//     }
//     return encoded;
// }

// bool hasCollisions(const vector<string>& words, const unordered_map<char, char>& mapping) {
//     unordered_map<string, int> freq;
//     for (string word : words) {
//         string encoded = encodeWord(word, mapping);
//         freq[encoded]++;
//         if (freq[encoded] > 1) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T;
//     cin >> T;
//     for (int t = 1; t <= T; t++) {
//         unordered_map<char, char> mapping;
//         for (char c = 'A'; c <= 'Z'; c++) {
//             char digit;
//             cin >> digit;
//             mapping[c] = digit;
//         }
//         int N;
//         cin >> N;
//         vector<string> words(N);
//         for (int i = 0; i < N; i++) {
//             cin >> words[i];
//         }
//         bool collision = hasCollisions(words, mapping);
//         cout << "Case #" << t << ": " << (collision ? "YES" : "NO") << endl;
//     }
//     return 0;
// }

#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        unordered_map<char, char> mapping;
        for(char c = 'A'; c <= 'Z'; c++){
            char digit;
            cin >> digit;
            mapping[c] = digit;
        }



        int N;
        cin >> N;

        vector<string> words(N);

        for (int j = 0; j < N; j++){
            cin >> words[j];
        }


        unordered_map<string, int> freq;
        bool collision = false;
        for(string word : words){
            string encoded = "";
                for(char c : word){
                    encoded += mapping.at(c);
                }
                freq[encoded]++;
                    if(freq[encoded] > 1){
                        collision = true;
                        break;
                    }
        }
        cout<<"Case #"<<i<<": "<<(collision ? "YES" : "NO")<<endl;
    }
    return 0;
}
