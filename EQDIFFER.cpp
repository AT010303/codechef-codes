// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// #define PB push_back
// #define POB pop_back
// #define MP make_pair
// int main(){
//     // ios::sync_with_stdio(0);
//     // cin.tie(0);
//     int T;
//     cin >> T;
//     while (T--){

//         // int n;
//         // cin>>n;
//         // int arr[n];
//         // for(int i=0;i<n;i++)
//         //     cin>>arr[i];

//         // if(n<= 2){
//         //     cout<<0<<endl;
//         // }else{
//         //     // int maxcount=0;

//         //     // for(int i=0;i<n;i++){
//         //     //     int count = 0;
//         //     //     for(int j=0;j<n;j++){
//         //     //         if(arr[i]==arr[j]){
//         //     //             count++;
//         //     //         }
//         //     //     }

//         //     //     maxcount = max(maxcount , count);
//         //     // }
//         //     unordered_map<int, int> hash;
//         //     for (int i = 0; i < n; i++)
//         //         hash[arr[i]]++;
        
//         //     // find the max frequency
//         //     int max_count = 0, res = -1;
//         //     for (auto i : hash) {
//         //         if (max_count < i.second) {
//         //             res = i.first;
//         //             max_count = i.second;
//         //         }
//         //     }

//         //     cout<<n-max_count<<endl;
//         // }


//         int n;
//         cin>>n;
// 	    map<int,int> mp;
// 	    int arr[n];
// 	    int mx = 0;
// 	    for(int i=0; i<n;i++){
// 	        cin>>arr[i];
// 	        mp[arr[i]]++;
// 	        mx = max(mx,mp[arr[i]]);
// 	    }
// 	    if(n==2 || n==1) cout<<0<<endl;
// 	    else if(mx>=2) cout<<n-mx<<endl;
// 	    else cout<<n-2<<endl;

//     }
//     return 0;
// }













// #include<bits/stdc++.h>
// using namespace std;
// int main() {

// 	// Write your code here
// 	string s;
// 	cin>>s;

// 	bool flag = true;

// 	unordered_map<char , int> count;
// 	for(char c : s){
// 		count[c]++;
// 	}

// 	int cnt = count[s[0]];
// 	int diff = 0;

// 	for(auto it: count){
// 		if(it.second != cnt){
// 			diff++;
// 			if(diff>1 || (diff = 1 && abs(it.second - cnt) != 1)){
// 				flag = false;
// 			}
// 		}
// 	}

// 	if(flag){
// 		cout<<"YES\n";
// 	}else{
// 		cout<<"NO\n";
// 	}

// 	return 0;
// }

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// bool isValid(string s) {
//     unordered_map<char, int> freq;
//     for (char c : s) {
//         freq[c]++;
//     }

//     int cnt = freq[s[0]];
//     int cnt_diff = 0;
//     for (auto it : freq) {
//         if (it.second != cnt) {
//             cnt_diff++;
//             if (cnt_diff > 1 || (cnt_diff == 1 && abs(it.second - cnt) != 1)) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main() {
//     string s;
//     cin >> s;
//     if (isValid(s)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {

// 	// Write your code here
// 	string s;
// 	cin>>s;

// 	bool flag = true;

// 	unordered_map<char , int> count;
// 	for(char c : s){
// 		count[c]++;
// 	}

// 	int cnt = count[s[0]];
// 	int diff = 0;

// 	for(auto it: count){
// 		if(it.second != cnt){
// 			diff++;
// 			if(diff>1 || (diff == 1 && abs(it.second - cnt) != 1)){
// 				flag = false;
				
// 			}
// 		}
// 	}
// 	//aaaaflag = true;

// 	if(flag){
// 		cout<<"YES\n";
// 	}else{
// 		cout<<"NO\n";
// 	}

// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// bool ans(string s){
// 	unordered_map<char , int> count;
// 	for(char c : s){
// 		count[c]++;
// 	}

// 	int cnt = count[s[0]];
// 	int diff = 0;

// 	for(auto i: count){
// 		if(i.second != cnt){
// 			diff++;
// 			if(diff>1 || (diff == 1 && abs(i.second - cnt) != 1)){
// 				return false;
// 			}
// 		}
// 	}
// 	return true;
// }


// int main() {

// 	// Write your code here
// 	string s;
// 	cin>>s;


	


// 	if(ans(s)){
// 		cout<<"YES\n";
// 	}else{
// 		cout<<"NO\n";
// 	}

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {

// 	// Write your code here
// 	int n;
// 	cin>>n;
// 	vector<string> pass;
// 	char ans;
// 	int lenans;

// 	for(int i=0;i<n;i++){
// 		string temp;
// 		cin>>temp;
// 		pass.push_back(temp);
// 	}

// 	for(int i=0;i<n;i++){
// 		for(int j=i;j<n;j++){

// 			string a = pass[i];
// 			reverse(a.begin() , a.end());
// 			if(a == pass[j] ){

// 				lenans = a.length();
// 				ans= a[(lenans/2)];

// 				cout<<lenans<<" "<<ans<<endl;
// 				return 0;

// 			}
// 		}
// 	}

// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// #define PB push_back
// #define POB pop_back
// #define MP make_pair

// void fun1(){


// 	cout<<"hello\n";
// }
// int main(){
// 	// ios::sync_with_stdio(0);
// 	// cin.tie(0);
// 	// int T;
// 	// cin >> T;
// 	// while (T--){

		

// 	// }


// 	// int a;
// 	// scanf("%d" , &a);
// 	// printf("%d",a);
// 	// int p[a];
// 	// for(int i=0;i<a;i++){
// 	// 	cin>>p[i];
// 	// }

// 	string a;
// 	cin>>a;
// 	cout<<a;
// 	fun1();


// 	return 0;
// }
