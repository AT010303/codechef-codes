#include<stdio.h>
int main()
{
    int t,p,q;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&p,&q);
        int r=p+q;
        if(r%4==0 || (r-1)%4==0)
        {
            printf("Alice\n");
        }else{
            printf("Bob\n");
        }

    }
    return 0;
}