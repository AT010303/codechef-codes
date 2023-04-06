#include<stdio.h>
int main()
{
    int t,x,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&x,&n);
        printf("%d\n",(x/10)*n);
    }
    return 0;
}