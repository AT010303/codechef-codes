#include<stdio.h>
int main()
{
    int t,i,n,a[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
// bubble sort
        // int counter=1;
        // while(counter<n)
        // {
        //     for(int p=0;p<n-counter;p++)
        //     {
        //         if(a[p]>a[p+1])
        //         {
        //             int temp=a[p];
        //             a[p]=a[p+1];
        //             a[p+1]=temp;
        //         }
        //     }
        //     counter++;
        // }

        //Selection Sort
            int l,m;
            for(l=0;l<n-1;l++)
    {
        for (int m=l+1;m<n;m++)
        {
            if(a[m]<a[l])
            {
            int temp=a[m];
            a[m]=a[l];
            a[l]=temp;
            }
        }
    }

        int z=0;
        while(z<n)
        {
            if(a[z]==a[z+1])
            {
                z=z+2;

            }else{
                printf("%d\n",a[z]);
                break;

            }
        }

        
    }
    return 0;
}

