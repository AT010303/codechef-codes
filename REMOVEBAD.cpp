#include<bits/stdc++.h>
// int mostFrequent(int* arr, int n)
// {
//     int maxcount = 0;
//     int element_having_max_freq;
//     for (int i = 0; i < n; i++) {
//         int count = 0;
//         for (int j = 0; j < n; j++) {
//             if (arr[i] == arr[j])
//                 count++;
//         }
 
//         if (count > maxcount) {
//             maxcount = count;
//             element_having_max_freq = arr[i];
//         }
//     }
 
//     //return element_having_max_freq;
//     return maxcount;
// }



// int maxFreq(int *arr, int n) {
//     //using moore's voting algorithm
//     int res = 0;
//     int count = 1;
//     for(int i = 1; i < n; i++) {
//         if(arr[i] == arr[res]) {
//             count++;
//         } else {
//             count--;
//         }
         
//         if(count == 0) {
//             res = i;
//             count = 1;
//         }
         
//     }
     
//     return arr[res];
// }


// int mostFrequent(int arr[], int n)
// {
//     // Insert all elements in hash.
//     unordered_map<int, int> hash;
//     for (int i = 0; i < n; i++)
//         hash[arr[i]]++;
 
//     // find the max frequency
//     int max_count = 0, res = -1;
//     for (auto i : hash) {
//         if (max_count < i.second) {
//             res = i.first;
//             max_count = i.second;
//         }
//     }
 
//     return res;
// }


int mostFrequent(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
 
    // Find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else
            curr_count = 1;
       
        if (curr_count > max_count) {
            max_count = curr_count;
            res = arr[i - 1];
        }
    }
 
    return res;
}
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
            {
                int n;
                cin>>n;
                int a[n];
                for(int i=0;i<n;i++){
                    cin>>a[i];
                }

                int num;
                num=mostFrequent(a , n);
                int counter=0;
                for(int i=0;i<n;i++)
                {
                    if(num==a[i]){
                        counter++;
                    }
                }

                cout<<n-counter<<endl;
                counter=0;
            }
    return 0;
}