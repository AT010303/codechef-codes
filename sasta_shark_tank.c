#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,x,y;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if((x*10)==(y*5))
        {
            printf("ANY\n");
        }
        else{
            if((x*10)>(y*5))
            {
                printf("FIRST\n");
            }
            else{
                printf("SECOND\n");
            }
        }
    }
    return 0;
}