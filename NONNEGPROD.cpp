#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    int flag=0;
	    for(int i=0;i<n;i++){
	        if(a[i]==0)
	        {
	            cout<<"0\n";
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag==0){
	    int nev=0;
	    for(int i=0;i<n;i++)
	    {
	        
	        if(a[i]<0){
	            nev++;
	        }
	        
	        
	       
	    }
	    
	    if(nev%2==0)
	    {
	        cout<<"0\n";
	    }else{
	        cout<<"1\n";
	    }}
	}
	return 0;
}
