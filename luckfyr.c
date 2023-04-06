#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    int a;
    int count=0;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);

        while(n>0)
        {
            a=n%10;
            if(a==4)
            {
                count++;
            }
            n=n/10;
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}