#include<iostream>
//#include<vector>
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

        long int count=0;
        long int total=0;

        for(int i=0;i<n;i++)
        {
        //    for(int j=i;j<n;j++)
        //    {
            if(a[i]==0)
            {
                count=0;
                
            }else{
                //total=total+count;
                count++;
                //total=total+count;
            // }
           }total=total+count;
           
        }
        cout<<total<<"\n";
        //total=0;
        //count=0;

    }
    return 0;
}