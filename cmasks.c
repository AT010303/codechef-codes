#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int x,y;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        if((x*100)<(y*10))
        {
            printf("Disposable\n");
        }else{
            printf("Cloth\n");
        }
    }
    return 0;
}