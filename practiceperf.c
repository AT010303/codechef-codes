#include<stdio.h>
int main()
{
    int i,a[4],counter=0;
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    for(i=0;i<4;i++)
    {
        if(a[i]>=10)
        {
            counter++;
        }
    }
    printf("%d",counter);
    return 0;
}