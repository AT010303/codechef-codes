#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d",&x);
    scanf("%d %d",&a,&b);
    if(x>=(a+b))
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    return 0;
}