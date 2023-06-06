// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>


// // void swap(int* xp, int* yp)
// // {
// //     int temp = *xp;
// //     *xp = *yp;
// //     *yp = temp;
// // }
// // void Sort(int arr[], int n)
// // {
// //     int i, j;
// //     for (i = 0; i < n - 1; i++)
  
// //         // Last i elements are already in place
// //         for (j = 0; j < n - i - 1; j++)
// //             if (arr[j] > arr[j + 1])
// //                 swap(&arr[j], &arr[j + 1]);
// // }



// void merge(int arr[], int l, int m, int r)
// {
//     int i, j, k;
//     int n1 = m - l + 1;
//     int n2 = r - m;
 
//     /* create temp arrays */
//     int L[n1], R[n2];
 
//     /* Copy data to temp arrays L[] and R[] */
//     for (i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];
 
//     /* Merge the temp arrays back into arr[l..r]*/
//     i = 0; // Initial index of first subarray
//     j = 0; // Initial index of second subarray
//     k = l; // Initial index of merged subarray
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         }
//         else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
 
//     /* Copy the remaining elements of L[], if there
//     are any */
//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
 
//     /* Copy the remaining elements of R[], if there
//     are any */
//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }
 
// /* l is for left index and r is right index of the
// sub-array of arr to be sorted */
// void mergeSort(int arr[], int l, int r)
// {
//     if (l < r) {
//         // Same as (l+r)/2, but avoids overflow for
//         // large l and h
//         int m = l + (r - l) / 2;
 
//         // Sort first and second halves
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
 
//         merge(arr, l, m, r);
//     }
// }

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     int n;
//     int counter=0;
//     scanf("%d" , &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
        
//             scanf("%d" , &arr[i]);
//             //cin>>a[i];
//         }
    
//      mergeSort(arr,0,n-1);
    
//     for(int i=0 ; i<n;i++){
//         counter=0;
//         for(int j=0;j<n;j++){
//             if(arr[i] == arr[j]){
//                 counter++;
//             }
//         }
//         if(counter<3){
//             printf("%d", arr[i]);
//             return 0;
//         }
        
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n, x, i, j;
//     char s[n];

//     scanf("%d %d %s", &n, &x, s);


//     for (i = 0; i < n && x > 0; i++) {
//         if (s[i] == '0') {
//             s[i] = '1';
//             x--;
//         }
//     }

//     for (j = n - 1; j >= 0 && x > 0; j--) {
//         if (s[j] == '1') {
//             s[j] = '0';
//             x--;
//         }
//     }

//     printf("%s\n", s);
//     return 0;
// }



#include <stdio.h>
#include <string.h>

#define MAX_N 1005

char s[MAX_N];

int main() {
    int n, k, i, j;

    scanf("%d %d", &n, &k);
    scanf("%s", s);

    // // Flip the leftmost k bits to 1
    // for (i = 0; i < n && k > 0; i++) {
    //     if (s[i] == '0') {
    //         s[i] = '1';
    //         k--;
    //     }
    // }

    // // Flip the rightmost k bits to 0
    // for (j = n - 1; j >= 0 && k > 0; j--) {
    //     if (s[j] == '1') {
    //         s[j] = '0';
    //         k--;
    //     }
    // }

    // Flip the bits from left to right until we run out of moves
    for (i = 0; i < n && k > 0; i++) {
        if (s[i] == '0') {
            // Flip the bit to 1 and decrement k
            s[i] = '1';
            k--;
        }
    }

    // If we still have moves left, flip the rightmost bit
    if (k > 0) {
        s[n-1] = '1';
        k--;
    }

    // Flip the remaining bits to maximize the value
    for (j = n-1; j >= 0 && k > 0; j--) {
        if (s[j] == '0') {
            s[j] = '1';
            k--;
        }
    }

    // Print the resulting string
    printf("%s\n", s);

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// #define MAX_N 1005

// char s[MAX_N];

// int main() {
//     int n, k, i, j;

//     scanf("%d %d", &n, &k);
//     scanf("%s", s);

//     // Flip the leftmost k bits to 1
//     for (i = 0; i < n && k > 0; i++) {
//         if (s[i] == '0') {
//             s[i] = '1';
//             k--;
//         }
//     }

//     // If there are remaining moves, flip the bit closest to the middle
//     if (k > 0) {
//         int mid = n / 2;
//         if (n % 2 == 0) {
//             // If n is even, choose the leftmost bit closest to the middle
//             if (s[mid] == '0' && k > 1) {
//                 s[mid] = '1';
//                 s[mid - 1] = '1';
//                 k -= 2;
//             }
//         } else {
//             // If n is odd, flip the middle bit
//             s[mid] = '1';
//             k--;
//         }
//     }

//     // Flip the rightmost k bits to 0
//     for (j = n - 1; j >= 0 && k > 0; j--) {
//         if (s[j] == '1') {
//             s[j] = '0';
//             k--;
//         }
//     }

//     // Print the resulting string
//     printf("%s\n", s);

//     return 0;
// }
