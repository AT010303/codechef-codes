#include<stdio.h>
int main()
{
    int t,i,p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&p);
        int q=p/100;
        int r=p%100;
        if(r+q<=10)
        {
            printf("%d\n",(r+q));
        }else{
            printf("-1\n");
        }
    }
    return 0;
}