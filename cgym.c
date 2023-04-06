#include<stdio.h>
int main()

{
    int i,n;
    scanf("%d",&n);
    int x,y,z;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x+y<=z)
        {
            printf("2\n");
        }else{
            if(z>=x)
            {
                printf("1\n");
            }else{
                printf("0\n");
            }
        }
    }
    return 0;
}