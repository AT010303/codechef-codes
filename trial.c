// #include <stdio.h>
// #include<stdlib.h>
// #include<string.h>
// struct student
// {
//     char name[20];
//     int roll;
//     int mark1,mark2,mark3;
//     float per;
    
// };


// int main()
// {
//     struct student a[80];
//     int i;
//     for(i=0;i<3;i++)
//     {
//         printf("Enter the name : ");
//         scanf("%s",&a[i].name);
//         printf("Enter the roll : ");
//         scanf("%d",&a[i].roll);
//         printf("Enter the PPS marks : ");
//         scanf("%d",&a[i].mark1);
//         printf("Enter the English marks : ");
//         scanf("%d",&a[i].mark2);
//         printf("Enter the Maths marks : ");
//         scanf("%d",&a[i].mark3);
//         a[i].per=(a[i].mark1+a[i].mark2+a[i].mark3)/3;
//     }
//     char name[20];
//     int roll;
//     int pps,eng,ma;
//     float max=a[0].per;
//     for(i=1;i<3;i++)
//     {
//         if(max<a[i].per)
//         {
//             max=a[i].per;
//             //name=a[i].name;
//             strcpy(name,a[1].name);
//             roll=a[i].roll;
//             pps=a[i].mark1;
//             eng=a[i].mark2;
//             ma=a[i].mark3;
            
//         }
//     }
//     printf("Highest percetage is %f ",max);
//     printf("Name : %s \n Roll no. : %d \nPPS marks : %d\n English mark : %d\n Maths mark %d\n",name,roll,pps,eng,ma);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i=2;
//     while (i<=n)
//     {
//         /* code */
//         int count=0;
//         int j=1;
//         while(j<=i)
//         {
//             if(i%j==0)
//             {
//                 count++;
//             }
//             j++;
//         }
//         if(count==2)
//         {
//             printf("%d ",i);
//         }
//         i++;
//     }
    
//     return 0;
// }

// #include<stdio.h>
// void main()
// {
//     char a='s';
//     scanf("%c",&a);
//     printf("%c",a);
// }