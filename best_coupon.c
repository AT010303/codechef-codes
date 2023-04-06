#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a;
    for(i=1; i<=n;i++)
    {
        scanf("%d",&a);
        if((a/10)>=100)
        {
            printf("%d",(a/10));
        }else{
            printf("100");
        }
    }
    return 0;
}