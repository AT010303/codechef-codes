#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int x,y,n;
        scanf("%llf %llf %llf",&x,&y,&n);
        if(x==y)
        {
            printf("0\n");
        }else{
            long int a = (x ^ y);
            if(a<n)
            {
                printf("1\n");
            }else{
                if(log(a)==log(n))
                {
                    if(n&(n-1))
                    {
                        printf("2\n");
                    }else{
                        printf("-1\n");
                    }
                }else{
                    printf("-1\n");
                }
            }
        }
    }
    return 0;
}