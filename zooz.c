#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        char a[x];
        for(int p=0;p<x;p++)
        {
            if(x%4==0)
            {
                if(p%4==0 || (p+1)%4==0)
                printf("1");
                else
                printf("0");
            }else{
                if(p==0 || p==x-1)
                {
                    printf("0");
                }else{
                    printf("1");
                }
            }
            
        }printf("\n");
    }
    return 0;
}