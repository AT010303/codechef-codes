#include<stdio.h>
int main()
{
    int t,i,n;
    long long int x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %lld",&n,&x);
        int a[n];
        for(int p=0;p<n;p++)
        {
            scanf("%d",&a[p]);
        }
        int key=0;

        //comparing consicative array to check the condition

        for(int f=0;f<n-1;f++)
        {
            if(a[f]>a[f+1])
                {
                    if(a[f]+a[f+1]>x)
                    {//condition
                        key=1;
                        break;
                    }
                // swap
                int temp=a[f+1];
                a[f+1]=a[f];
                a[f]=temp;
                }
            
        }
        if(key==0)
        {
            printf("YES\n");

        }else{
            printf("NO\n");
        }
    }
    return 0;
}