#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        char dna[n+1];
        scanf("%s",dna);
        for(int p=0;dna[p]!='\0';p++)
        {
            if(dna[p]=='A')
            {
                dna[p]='T';
            }else{
                if(dna[p]=='T')
                {
                    dna[p]='A';
                }else{
                    if(dna[p]=='C')
                    {
                        dna[p]='G';
                    }else{
                        dna[p]='C';
                    }
                }
            }
        }

        printf("%s\n",dna);
    }
    return 0;
}