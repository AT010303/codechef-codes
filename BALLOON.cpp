#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            int counter=0;
            int check=7;//7 se kam wale count karne ke liye
            for(int i=0;i<n;i++)
            {
                if(a[i]<=7)
                {
                    counter++;
                    check--;
                }else{
                    counter++;
                }


                if(check==0)
                {
                    break;
                }
            }
            cout<<counter<<endl;
        }
return 0;
}