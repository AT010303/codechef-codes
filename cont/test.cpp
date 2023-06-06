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

int maxRepeating(vector<int> arr, int n, int k)
{
    for (int i = 0; i< n; i++)
        arr[arr[i]%k] += k;
    int max = arr[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }
    return result;
}
// int maxSubsequenceLength(vector<int>& a, int n, int k) {
//     unordered_map<int, int> freq;
//     int maxLength = 0;

//     for (int i = 0; i < n; i++) {
//         for (int x = -k; x <= k; x++) {
//             int target = a[i] + x;
//             int count = freq[target];
//             maxLength = max(maxLength, count + 1);
//         }
//         freq[a[i]]++;
//     }

//     return maxLength;
// }

// int maxSubsequenceLength(vector<int> a, int n, int k) {
//     map<int, int> counts;
//   for (int i = 0; i < n; i++) {
//     if (counts.find(a[i]) == counts.end()) {
//       counts[a[i]] = 0;
//     }
//     counts[a[i]]++;
//   }

//   // Find the maximum value in the map.
//   int max_count = 0;
//   for (auto it : counts) {
//     max_count = max(max_count, it.second);
//   }

//   // Find the minimum value in the range [-k, k].
//   int min_x = min(-k, k);

//   // Return the maximum length of the subsequence of array a, such that all numbers in that subsequence are equal after applying the given operation.
//   return max_count * (min_x + 1);
// }


// int maximize_equal_numbers(const std::vector<int>& arr, int k) {
//     unordered_map<int, int> freq;
//     for (int num : arr) {
//         freq[num]++;
//     }

//     int max_length = 0;
//     for (const auto& pair : freq) {
//         int num = pair.first;
//         int frequency = pair.second;
//         int max_add_subtract = std::min(frequency, (2 * k - frequency) / 2);
//         max_length = std::max(max_length, max_add_subtract);
//     }

//     return max_length;
// }


int maxLengthSubsequence(vector<int>& a, int k) {
    unordered_map<int, int> count;
    int maxLen = 0;

    for (int num : a) {
        for (int x = -k; x <= k; x++) {
            int target = num + x;
            if (count.count(target)) {
                count[num] = max(count[num], count[target] + 1);
                maxLen = max(maxLen, count[num]);
            }
        }
    }

    return maxLen;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--){

        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> a(n);

        for(int i=0 ;i<n;i++) cin>>a[i];

        
        cout<<maxLengthSubsequence(a , k)<<"\n";
        // cout<<maximize_equal_numbers(a , k)<<"\n";

        
        



    }
    return 0;
}
