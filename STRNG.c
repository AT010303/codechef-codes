#include<stdio.h>
// int gcd(int a, int b)
// {
//   int hcf;
//   for(int i=1; i<=a && i<=b; i++)
//   {
//     if(a%i==0 && b%i==0)
//     {
//       hcf = i;
//     }
//   }
//   return hcf;
// }

int gcd(int n1 , int n2)
{
    int hcf;
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    return n1;
}


int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int p=0;p<n;p++)
        {
            scanf("%d",&a[p]);
        }

        int prefixgcd[n];
        prefixgcd[0]=a[0];
        for(int p=1;p<n;p++)
        {
            prefixgcd[p]=gcd(prefixgcd[i-1],a[i]);
        }

        int suffixgcd[n];
        suffixgcd[n-1]=a[n-1];
        for(int p=n-2;p>=0;p--)
        {
            suffixgcd[p]=gcd(suffixgcd[p+1],a[p]);
        }

        int strongElement=0;
        for(int p=0;p<n;p++)
        {
            if(p==0 && suffixgcd[1]>1)
            {
                strongElement++;
            }
            else if(p==n-1 && prefixgcd[n-2]>1)
                {
                    strongElement++;
                }
                else if(gcd(prefixgcd[p-1],suffixgcd[p+1])>1)
                    {
                        strongElement++;
                    }
        }

        printf("%d\n",strongElement);
        strongElement=0;
    }
    return 0;
}