#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int p,q,a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        for(i=0;i<p;i++)
        {
            scanf("%d",&a[i]);
        }
    }
    return 0;
}