#include<stdio.h>
int main()
{
    int n,i,x,y,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(z%x==0 && z%y==0)
        {
            printf("ANY\n");
        }else{
            if(z%x==0)
            {
                printf("CHICKEN\n");
            }else{
                if(z%y==0)
                {
                    printf("DUCK\n");
                }else{
                    printf("NONE\n");
                }
            }
        }
    }
    return 0;
}