#include<stdio.h>
int main()
{
    int t;
    
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a[32]={},n;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            int b,count=0;
            scanf("%d",&b);
            
         while(b)
            {
                if(a[count]==0) a[count]=b%2;
                b=b/2;
                count++;
            }

           
        }
        int result=0;
        for(int i=0; i<32;i++)
        {
            result=result+a[i];
        }
        printf("%d\n",result);
    }
    return 0;
}