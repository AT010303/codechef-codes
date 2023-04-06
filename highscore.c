#include<stdio.h>
int main()
{
    int i,t,n,a[5];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
        if(a[0]>=a[1] && a[0]>=a[2] && a[0]>=a[3])
        {
            printf("%d\n",a[0]);
        }else{
            if(a[1]>=a[2] && a[1]>=a[3])
            {
                printf("%d\n",a[1]);
            }else{
                if(a[2]>=a[3])
                {
                    printf("%d\n",a[2]);
                }else{
                    printf("%d\n",a[3]);
                }
            }
        }
    }
    return 0;
}