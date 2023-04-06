// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int n,m;
//         scanf("%d %d",&n,&m);
//         int a[n][m];
//         int d=1;
//         int r=1;
        
//         for(int p=1;p<=n;p++)
//         {
            
//             for(int q=0;q<m;q++)
//             {
//                 printf("%d ",(r+(q*d)));
                
//             }
//             printf("\n");
//             d=d+2;
//             r=r+2;
            
//         }
//     }
//     return 0;
// }



#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        if(n<=m)
        {
            int p=1 , d=n+1, a=1 ;// ap ka formate a + n*d  jaha a=first term , n="1,2,3,4..." , d= common difference
                                    // yaha p mera first term hai aur a common difference hai mere matrix ke row ka
                                    // d bhi common difference hai par column ka to ye p ki first value ko badhane ka kaam kare ga
            for(int x=1;x<=n;x++)
            {
                printf("%d ",p);  // first term of each column

                for(int y=1; y<m; y++)
                {
                    printf("%d ",p+(x*a)); // har column ka second se bad ke term AP ke formate me
                    a++; //
                }

                a=1;// a ki vallue reset karne ke liye
                p=p+d; //next row ke first term nikal ne ke liye
                printf("\n");
            }

        }else{
            int p=1 , d=m+1, a=1;

            for(int x=1;x<=n;x++)
            {
                printf("%d ",x);  

                for(int y=1; y<m; y++)
                {
                    printf("%d ",x+(d*a));
                    a++;
                }

                a=1;
                d++;
                printf("\n");
            }
        }
    }
    return 0;
}