// // // CPP program to find the most frequent element
// // // in an array.
// // #include <bits/stdc++.h>
// // using namespace std;

// // int mostFrequent(int *arr, int n) {
// // // code here
// // int maxcount=0;
// // int element_having_max_freq;
// // for(int i=0;i<n;i++)
// // {
// // 	int count=0;
// // 	for(int j=0;j<n;j++)
// // 	{
// // 	if(arr[i] == arr[j])
// // 		count++;
// // 	}

// // 	if(count>maxcount)
// // 	{
// // 	maxcount=count;
// // 	element_having_max_freq = arr[i];
// // 	}
	
// // }

// // return element_having_max_freq;
// // }

// // // Driver program
// // int main()
// // {
// // 	int arr[] = { 40,50,30,40,50,30};
// // 	int n = sizeof(arr) / sizeof(arr[0]);
// // 	cout << mostFrequent(arr, n);
// // 	return 0;
// // }

// // // This code is contributed by Arpit Jain



// #include <iostream>
// using namespace std;
// int findMostFrequentElement(int A[], int n)
// {
//     for (int i = 0; i < n; i++)    //Sort the array
//     {    
//         int temp;
//         for (int j = i+1; j < n; j++) 
//         {     
//            if(A[i] > A[j]) 
//            {    
//                temp = A[i];    
//                A[i] = A[j];    
//                A[j] = temp;    
//            }     
//         }     
//     }        
//     //finnd the most occuring element
//     int max_count = 1, res = A[0], count = 1; 
//     for (int i = 1; i < n; i++) { 
//         if (A[i] ==A[i - 1]) 
//             count++; 
//         else { 
//             if (count > max_count) { 
//                 max_count = count; 
//                 res = A[i - 1]; 
//             } 
//             count = 1; 
//         } 
//     }   
//     // If last element is most frequent 
//     if (count > max_count) 
//     { 
//         max_count = count; 
//         res = A[n - 1]; 
//     }   
//     return res; //return the most repeatinng  element
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int A[n];
// 	    for(int i=0;i<=n;i++){
// 	        cin>>A[i];
// 	    }
// 	   int ele=findMostFrequentElement(A,n);
// 	   int counter=0;
// 	   for(int q=0;q<n;q++){
// 	       if(A[q]==ele){
// 	           counter++;
// 	       }
// 	   }
// 	   cout<<n-counter<<endl;
	    
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    string s;
	    
// 	    cin>>s;
// 	 int flag=0;
// 	 	for(int i=0;i<s.length();i++){
// 			if((s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')||s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'){
// 	             flag=1;
// 	             break;
// 	        }

// 		}
	        
// 	        if(flag==1)
// 	        std::cout << "Good" << std::endl;
// 	    	else
// 	    	cout<<"Bad\n";
// 	}
// 	return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
  
// int main()
// {
//     // int arr[] = { 0, 1, 5, 8, 9, 6, 7, 3, 4, 2 };
//     // int n = sizeof(arr);
  
//     // Sort the elements which lies in the range of 2 to
//     // (n-1)
// 	// cout<<n<<endl;
//     // sort(arr + 2, arr + n);
  
//     // cout << "Array after sorting : \n";
//     // for (int i = 0; i < n; ++i)
//     //     cout << arr[i] << " ";



  
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     unsigned long long int a,b,x;

//     a=1073741824;
//     b=2147483648;
//     x=a^b;
//     cout<<x;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//         while(t--)
//             {
//                 unsigned long long int n;
//                 cin>>n;

//                     if(n==0){
//                         int a=2,b=1,c=3,d=3;
//                         cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                        
//                     }else{
//                         if(n==1){
//                             int a=2,b=4,c=3,d=1;
//                         cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                    
//                     }else{
//                         unsigned long long int a,b,c,d;
//                         a=2;
//                         b=1;

//                         for(int i=1;i<=ULLONG_MAX;i++){
//                             d=i^n;
//                             if((d>0) && (d<=n))
//                             {
//                                 c=i;
//                                 break;
//                             }
//                         }

//                     cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
//                     }
//                     }
                    
//             }
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

//         cout<<"hello\n";


//     }
//     return 0;
// }



#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    int count = 0;
    string X(n, '0');

    for (int i = 0; i < n - 1; i++) {
        if (S[i] == '1') {
            X[i] = '1';
            X[i + 1] = (X[i + 1] == '0' ? '1' : '0');
        }
    }

    if (S[n - 1] == '1') {
        X[n - 1] = '1';
        count++;
    }

    for (int i = 0; i < n; i++) {
        if (X[i] == '1') {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
