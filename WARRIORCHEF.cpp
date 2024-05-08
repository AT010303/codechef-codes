#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define PB push_back
#define POB pop_back
#define MP make_pair
#define fi first
#define se second
bool check(int a[], int n,int x,int y){
    for(int i=0; i<n; i++){
        if(x>= a[i])
            continue;
        else if (y>a[i])
            y-=a[i];
        else
            return false;
    }
    return true;
}

int functions( int a[] , int n, int l, int h, int k){
    int ans= INT_MAX;
    while(l<=h){
        int m = l + (h-l)/2;
        if(check(a,n,m,k)){
            ans = m;
            h=m-1;
        }else{
            l=m+1;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--){

        int n,h;
        cin>>n>>h;
        int a[n];
        int s=0;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s<h) cout<<0<<endl;
        
        else{
            int sol = functions(a,n,0,s,h);
            cout<<sol<<endl;
        } 

    }
    return 0;
}