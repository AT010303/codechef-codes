#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        if(x>=y)
        {
            printf("%d\n",(((x-1)/10)-((y-1)/10)));
        }else{
            printf("%d\n",-(((x-1)/10)-((y-1)/10)));
        }
    }
    return 0;
}