// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i,x,y;
//     for(i=1;i<=n;i++)
//     {
//         scanf("%d %d",&x,&y);
//         // if(x==y)
//         // {
//         //     printf("0");
//         // }else{
//             if(x>=y)
//             {
//                 printf("%d",(x-y));
//             }
//             else{
//                 printf("%d",(y-x));
//             }
//         }
//     // }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,x,y;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",abs(x-y));
    }
    return 0;
}