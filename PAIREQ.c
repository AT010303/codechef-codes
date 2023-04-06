// #include<stdio.h>

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


// int main()
// {
//     int i,t,n;
//     scanf("%d",&t);
//     for(i=0;i<t;i++)
//     {
//         scanf("%d",&n);
//         int A[n];
//         for(int p=0;p<=n;p++)
//         {
//             scanf("%d",&A[p]);
//         }

//         //int maxElement = getMaxRepeatingElement(A, n);
//         int maxElement = findMostFrequentElement(A, n);
//         //printf("%d\n",maxElement);

//         int counter=0;
//         for(int q=0;q<n;q++)
//         {
//             if(A[q]==maxElement)
//             {
//                 counter++;
//             }
//         }

//         printf("%d\n",n-counter);

//     }
//     return 0;
// }


#include<stdio.h>

// int getMaxRepeatingElement(int a[], int n) 
// {
//     int i, j, maxElement=a[0], count;
//      int maxCount = 0; 
//     for(i = 0; i< n; i++)
//     {
//         count = 1;
//         for(j = i+1; j < n; j++)
//         {
//             if(a[j] == a[i])
//             {
//                 count++;
//                 if(count > maxCount)
//                 {
//                     maxElement = a[j];
//                 }
//             }
//         }
//     }
//     return maxElement;
// }



int findMostFrequentElement(int A[], int n)
{
    for (int i = 0; i < n; i++)    //Sort the array
    {    
        int temp;
        for (int j = i+1; j < n; j++) 
        {     
           if(A[i] > A[j]) 
           {    
               temp = A[i];    
               A[i] = A[j];    
               A[j] = temp;    
           }     
        }     
    }        
    //finnd the most occuring element
    int max_count = 1, res = A[0], count = 1; 
    for (int i = 1; i < n; i++) { 
        if (A[i] ==A[i - 1]) 
            count++; 
        else { 
            if (count > max_count) { 
                max_count = count; 
                res = A[i - 1]; 
            } 
            count = 1; 
        } 
    }   
    // If last element is most frequent 
    if (count > max_count) 
    { 
        max_count = count; 
        res = A[n - 1]; 
    }   
    return res; //return the most repeatinng  element
}


int main()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int A[n];
        for(int p=0;p<n;p++)
        {
            scanf("%d",&A[p]);
        }

        //int maxElement = getMaxRepeatingElement(A, n);
        int maxElement = findMostFrequentElement(A, n);
        //printf("%d\n",maxElement);

        int counter=0;
        for(int q=0;q<n;q++)
        {
            if(A[q]==maxElement)
            {
                counter++;
            }
        }

        printf("%d\n",n-counter);

    }
    return 0;
}