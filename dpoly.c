#include<stdio.h>
int main()
{
    int i,j,t,n,a[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            
        }
        for(j=n-1;j>=0;j--)
        {
            if(a[j]==0)
            {
                if(j==0)
                {
                    printf("%d\n",j);
                }
                
            }else{
                printf("%d\n",j);
                break;
            }
            
            
            
        }

        
        
    }
    
    return 0;
}

