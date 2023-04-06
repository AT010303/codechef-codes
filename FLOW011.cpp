#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float sal,hra,da,gros;
        cin>>sal;
        if(sal<1500)
        {
            gros=sal+(0.1*sal)+(0.9*sal);
        }else{
            gros=sal+500+(0.98*sal);
        }

        //cout<<gros<<endl;
        printf("%.2f\n",gros);
    }
    return 0;
}