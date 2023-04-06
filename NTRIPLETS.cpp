// #include<bits/stdc++.h>
// using namespace std;

// vector<int> a;

// // void printDivisors(int n)
// // {
// //     int counter=0;
// //     for (int i = 1; i < n; i++){
// //         if (n % i == 0)
// //             //cout <<" " << i;
// //             if(counter=0){
// //                 a=i;
// //             }
// //             if(counter=1){
// //                 b=i;
// //             }
// //             if(counter=2){
// //                 c=i;
// //             }
// //             if(counter=3){
// //                 break;
// //             }

// //             counter++;
// //     }
// // }


// void primeFactors(int n){
//     int c=2;
//     while(n>1)
//     {
//         if(n%c==0){
//         a.push_back(c);
//         n/=c;
//         }
//         else c++;
//     }
// }


// int main()
// {
//     int t;
//     cin>>t;
//         while(t--)
//             {
//                 int n;
//                 cin>>n;
//                 primeFactors(n);
//                 int p=1,q=1,r=1;
//                 //for (auto i = a.begin(); i != a.end(); ++i)
//                 //    cout << ' ' << *i;

//                 p=a.pop_back();
//                 q=a.pop_back();
//                 for (auto i = a.begin(); i != a.end(); ++i)
//                 r=r*a.pop_back();


//                 if(p==q || p==r || q==r || p*q>n || p*r>n || q*r>n || p*q*r<n){
//                     cout<<-1<<"\n";
//                 }else{
//                     cout<<p<<" "<<q<<" "<<r<<"\n";
//                 }

//                 a.clear();
//             }
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--){
                int n;
                cin>>n;
                set<int> a;
                a.insert(1);
                for(int i=2;i*i<n;i++){
                    if(n%i==0){
                        a.insert(i);
                        a.insert(n/i);
                        break;
                    }
                }

                if(a.size()!=3){
                    cout<<-1<<"\n";
                }else{
                    for( int i:a){
                        cout<<i<<" ";
                    }
                    cout<<"\n";
                }
            }
    return 0;
}