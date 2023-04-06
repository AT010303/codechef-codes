#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        // if(a==1)
        // {
        //     printf("%d\n",a);
        // }else{
        //     if(a<4)
        //     {
        //         printf("%d\n",(a-1));
        //     }else{
        //         printf("%d\n",a);
        //     }
        // }

        if((a==1) || (a>4))
        {
            printf("%d\n",a);
        }else{
            if(a==0)
            {

            }else{
                printf("%d",(a-1));
        }
            }
            printf("%d",(a-1));
        
    }
    return 0;
}