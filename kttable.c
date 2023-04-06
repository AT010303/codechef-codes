#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,a[100],b[100];
    
    int count=0;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            scanf("%d",&b[j]);
        }
        while(n>0)
        {
            if(a[i]<=b[i])
            {
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
       
    }
    return 0;
}