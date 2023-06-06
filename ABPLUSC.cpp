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

//         ll x;
//         cin>>x;

//         bool flag = false;
//         ll a,b,c;

//         if(x==1){
//             cout<<-1<<endl;
//         }else{

        

//         for(a=1;a<=1e6 && !flag;a++){
//             for(int b=1;b<=1e6 && !flag;b++){
//                 c = x-a*b;

//                 if(c>=1 && c<=1e6){
//                     cout<<a<<" "<<b<<" "<<c<<endl;
//                     flag = true;
                    
//                 }
//             }
//         }

//             if(!flag)
//             cout<<-1<<endl;

//         }
        
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
    

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
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T;
//     cin >> T;
//     while (T--){

//         ll x;
//         cin>>x;
        
//         int a,b,c;
//         ll val = sqrt(x);
//         bool flag = false;

//         for(a=1 ; a<)
    

//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     long long x;
//     cin >> x;
//     long long a = 1, b = 1, c = x;
//     while (a <= x && b <= x) {
//         long long result = a * b + c;
//         if (result == x) {
//             cout << a << " " << b << " " << c << endl;
//             return 0;
//         } else if (result < x) {
//             if (b < a || b >= x / a) {
//                 b = a;
//                 c--;
//             } else {
//                 b++;
//             }
//         } else {
//             if (c <= b) {
//                 a++;
//                 b = a;
//             } else {
//                 c--;
//             }
//         }
//     }
//     cout << "Triplet not found" << endl;
//     return 0;
// }




// 



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

//         ll x;
//         cin>>x;

//         bool flag = false;
//         ll a,b,c;

//         if(x==1){
//             cout<<-1<<endl;
//         }else{

        

//         for(a=1;a<=1e6 && !flag;a++){
//             for(int b=1;b<=1e6 && !flag;b++){
//                 c = x-a*b;

//                 if(c>=1 && c<=1e6){
//                     cout<<a<<" "<<b<<" "<<c<<endl;
//                     flag = true;
                    
//                 }
//             }
//         }

//             if(!flag)
//             cout<<-1<<endl;

//         }
        
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
    

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
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T;
//     cin >> T;
//     while (T--){

//         ll x;
//         cin>>x;
        
//         int a,b,c;
//         ll val = sqrt(x);
//         bool flag = false;

//         for(a=1 ; a<)
    

//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     long long x;
//     cin >> x;
//     long long a = 1, b = 1, c = x;
//     while (a <= x && b <= x) {
//         long long result = a * b + c;
//         if (result == x) {
//             cout << a << " " << b << " " << c << endl;
//             return 0;
//         } else if (result < x) {
//             if (b < a || b >= x / a) {
//                 b = a;
//                 c--;
//             } else {
//                 b++;
//             }
//         } else {
//             if (c <= b) {
//                 a++;
//                 b = a;
//             } else {
//                 c--;
//             }
//         }
//     }
//     cout << "Triplet not found" << endl;
//     return 0;
// }




// 



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

        ll x;
        cin>>x;

       if(x==1){
        cout<<-1<<endl;
       }else{
        if(x<=1000000){
            cout<<1<<" "<<1<<" "<<x-1<<endl;
        }else{
            if(x%1000000 == 0){
                cout<<(x/1000000)-1<<" "<<1000000<<" "<<1000000<<endl;
            }else{
                cout<<x/1000000<<" "<<1000000<<" "<<x%1000000<<endl;
            }
        }
       }

    }
    return 0;
}