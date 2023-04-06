#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string word;
        int counter=0;
        int flag=0;
        cin>>word;
        for(int i=0;i<n;i++)
        {
                if(word[i]=='a' || word[i]=='e' ||word[i]=='i' ||word[i]=='o' ||word[i]=='u')
                    counter=0;  
                else
                    counter++;
                if(counter>=4)
                {
                    flag=1;
                    break;
                }
           
        }
        if(flag==0)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
} 

