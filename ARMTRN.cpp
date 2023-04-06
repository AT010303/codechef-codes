#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i=0;i<n;++i)
        {
            cin>>A[i];
        }
        int atk=0;
        int def=0;

        sort(A.begin(),A.end());

        //def += 1000- A[0];
        for(int i=0; i<n ; ++i)
        {
            // if(A[i]>=500)
            // {
            //     atk+=A[i];
            // }else{
            //     def+= 1000- A[i];
            // }

            if(A[i]>500)
            {
                atk+=A[i];
            }
            if(A[i]<500)
            {
                def+=1000-A[i];
            }
            // if(A[i]==500)
            // {
            //     int count=0
            // }
        }
        int count=0;
        for(int i=0;i<n;i++)
            {
                if(A[i]==500)
                {
                    count++;
                }
            }

            if(count==1)
            {
                atk=atk+500;
            }
            
            else{
                if(count%2==1)
            {
                count++;
                atk=atk+(500*(count/2));
                def=def+(500*((count-1)/2));
            }else{
                atk=atk+(500*(count/2));
                def=def+(500*((count)/2));
            }
            }

        cout<<atk*def<<'\n';
    }
    return 0;
}