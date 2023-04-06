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

int main()
{
    int t,i;
    int n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",n);
        int counter=0;
        for(int p=1;p<=n;p++)
        {
            for(int q=1;q<=n;q++)
            {
                int sol;
                int HCF, LCM;
                HCF= gcd(p,q);
                LCM=(p*q)/HCF;
                sol=(p*p)+(q*q)+(HCF*HCF)+(LCM*LCM);
                if(sol==n)
                {
                    counter++;
                }
            }
        }

        printf("%d\n",counter);
    }


    // int HCF= gcd(4,8);
    // int LCM= (4*8)/HCF;
    // printf("%d %d",HCF,LCM);
    return 0;
}


// Take 2

// int main()
// {
//     int t,i;
//     long long int n;
//     int sol;
//     int HCF, LCM;
//     scanf("%d",&t);
//     for(i=0;i<t;i++)
//     {
//         scanf("%lld",n);
//         int counter=0;
//         for(int p=1;p<=n;p++)
//         {
//             int q=2;
            
               
//                 HCF= gcd(p,q);
//                 LCM=(p*q)/HCF;
//                 sol=(p*p)+(q*q)+(HCF*HCF)+(LCM*LCM);
//                 if(sol==n)
//                 {
//                     counter++;
//                 }

//                 q++;
            
//         }

//         printf("%d\n",counter);
//     }


//     // int HCF= gcd(4,8);
//     // int LCM= (4*8)/HCF;
//     // printf("%d %d",HCF,LCM);
//     return 0;
// }