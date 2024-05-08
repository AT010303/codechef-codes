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

bool contains_abc(const string &s)
{
    string target = "abc";
    int target_index = 0;

    for (char ch : s)
    {
        if (ch == target[target_index])
        {
            target_index++;
            if (target_index == target.length())
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count_a = 0, count_b = 0, count_c = 0;
        for (char ch : s)
        {
            if (ch == 'a')
                count_a++;
            else if (ch == 'b')
                count_b++;
            else if (ch == 'c')
                count_c++;
        }

        if (count_a == 0 || count_b == 0 || count_c == 0){
            cout<<0<<endl;
            continue;}
        if (!contains_abc(s)){
            cout<<0<<endl;
            continue;
        }
            

        cout << min(count_a, count_c) << endl;
    }
    return 0;
}
