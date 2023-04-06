#include<stdio.h>
int main()
{
    int t,i,n,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        if(n==1)
        {
            if(k==1)
            {
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            if(n%2==1)
            {
                if(k==1)
                {
                    printf("YES\n");
                }else{
                    printf("NO\n");
                }
            }else{
                printf("YES\n");
            }
        }
    }
    return 0;
}