#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,a,b;
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&a,&b);
        printf("%d\n",(2*(180+n))-(a+b));
    }
    return 0;
}