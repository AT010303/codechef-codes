#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,x,y;
    for(i=1; i<=n;i++)
    {
        scanf("%d  %d",&x,&y);
        if((3*x)<=(2*y))
    {
        printf("%d\n",(3*x));
    }
    else{
        printf("%d\n",(2*y));
    }
    }
    return 0;
}