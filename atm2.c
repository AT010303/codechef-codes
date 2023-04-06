#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,n,k;
    int a[100];
    int c;
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&k);
        for(c=0;c<n;c++)
        {
            scanf("%d",&a[c]);
        }
        for(c=0;c<n;c++)
        {
            if(k>=a[c])
            {
                printf("1");
                k=k-a[c];
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}