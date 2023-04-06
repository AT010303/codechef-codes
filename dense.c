#include<stdio.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        printf("%s",s);
    }
    return 0;
}