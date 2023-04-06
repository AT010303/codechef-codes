#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[6],t;
    for(i=0;i<n;i++)
    {
        for(t=0;t<6;t++)
        {
            scanf("%d",&a[t]);
        }

        if((a[0]==a[2] || a[0]==a[3]) && (a[1]==a[2] || a[1]==a[3]))
        {
            printf("1\n");
        }
        else{
            if((a[0]==a[4] || a[0]==a[5]) && (a[1]==a[4] || a[1]==a[5]))
            {
            printf("2\n");
        }else{
            printf("0\n");
        }
        }
    }
    return 0;
}