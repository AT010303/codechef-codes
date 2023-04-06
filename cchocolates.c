#include<stdio.h>
int main()
{
    int n,i,x,y,z,total;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        printf("%d\n",((x*5)+(y*10))/z);
    }
    return 0;
}