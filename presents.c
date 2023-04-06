#include<stdio.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n<5)
        {
            printf("%d\n",n);
        }else
        {
            printf("%d\n",(n-((n/5))));
        }

    }
    return 0;
}