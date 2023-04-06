#include<stdio.h>
int main()
{
    int t,i,x1,y1,x2,y2;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x1,&y1);
        scanf("%d %d",&x2,&y2);
        if((x1==y1==1 && x2==y2==2) || (x1==y1==2 && x2==y2==1) || (x1==y1==7 && x2==y2==8) || (x1==y1==8 && x2==y2==7) || (x1==1 && y1==8 && x2==2 && y2==7) || (x1==2 && y1==7 && x2==1 && y2==8) || (x1==8 && y1==1 && x2==7 && y2==8) || (x1==7 && y1==2 && x2==8 && y2==1)){


            printf("NO\n");
        }else{

        if(abs(x1-x2)==2|| abs(x1-x2)==4 || abs(y1-y2)==2 || abs(y1-y2)==4 || abs(x1-x2)==abs(y1-y2)==1 || abs(x1-x2)==abs(y1-y2)==3 || (abs(x1-x2)==3 && abs(y1-y2)==4) || (abs(x1-x2)==4 && abs(y1-y2)==3) || (abs(x1-x2)==3 && abs(y1-y2)==5) || (abs(x1-x2)==5 && abs(y1-y2)==3) || (abs(x1-x2)==3 && abs(y1-y2)==3) || (abs(x1-x2)==3 && abs(y1-y2)==1) || (abs(x1-x2)==1 && abs(y1-y2)==3))
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }}
    }
    return 0;
}
