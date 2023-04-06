#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,x,y;
    for(i=1;i<=n;i++)
    {
        scanf("%d  %d",&x,&y);
        if(x<=y && y%x==0)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}