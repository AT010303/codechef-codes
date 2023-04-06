#include<stdio.h>
int gcd(int a, int b)
{
  int hcf;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      hcf = i;
    }
  }
  return hcf;
}

// int main()
// {
//     int t,i;
//     int n;
//     scanf("%d",&t);
//     for(i=0;i<t;i++)
//     {
//         scanf("%d",n);
//         int counter=0;
//         for(int p=1;p<=n;p++)
//         {
//             for(int q=1;q<=n;q++)
//             {
//                 int sol;
//                 int HCF, LCM;
//                 HCF= gcd(p,q);
//                 LCM=(p*q)/HCF;
//                 sol=(p*p)+(q*q)+(HCF*HCF)+(LCM*LCM);
//                 if(sol==n)
//                 {
//                     counter++;
//                 }
//             }
//         }

//         printf("%d\n",counter);
//     }


//     return 0;
// }


// Take 2

int main()
{
    int t,i;
    int n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",n);
        int counter=0;
        int arr[n];

        for(int z=0;z<n;z++)
        {
            arr[z]=z+1;
        }
        for(int p=0;p<n;p++)
        {
            for(int q=0;q<n;q++)
            {
                int sol;
                int HCF, LCM;
                HCF= gcd(arr[p],arr[q]);
                LCM=(arr[p]*arr[q])/HCF;
                sol=(arr[p]*arr[p])+(arr[q]*arr[q])+(HCF*HCF)+(LCM*LCM);
                if(sol==n)
                {
                    counter++;
                }
            }
        }

        printf("%d\n",counter);
    }


    return 0;
}