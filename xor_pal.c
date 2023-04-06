#include<stdio.h>
int main()
{
    int t,i,count=0,b,n;
    
    char a[200000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&n);
        scanf("%s",a);
        

    for(int j=0;j<(n)/2;j++)
    {
        if(a[j]!=a[n-j-1])
        {
            count++;
            
        }
    }
    printf("%d\n",(count+1)/2);
    count=0;
    }
    return 0;
}