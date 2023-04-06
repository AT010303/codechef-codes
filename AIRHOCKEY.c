#include<stdio.h>
int main(){
    int t,a,b,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>=b){
            printf("%d\n",7-a);
        }else{
            printf("%d\n",7-b);
        }
    }
    return 0;
}