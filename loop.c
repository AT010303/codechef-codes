#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,m;
    int d;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&m);
        if(a>=b)
        {
            d=a-b;
        }else{
            d=b-a;
        }

        if((m-d)>=d)
        {
            printf("%d",d);
        }else{
            printf("%d",m-d);
        }
    }

    return 0;
}