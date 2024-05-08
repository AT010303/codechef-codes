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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {

        string s;
        getline(cin, s); // input string with spaces

        int v = 0, c = 0, w; // v = vowel, c = consonant, w = word

        if (s[0] == ' ') w = 0; // if first character is space
        else w = 1; // if first character is not space

        int len = s.length(); // length of string

        for (int i = 0; i < len; i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') // if vowel
                v++; // increment vowel count
            else if (s[i] == ' '){} // do nothing if space
            else
                c++;    // increment consonant count
                
            if(i+1 < len) // just to avoid out of bound error
            if (s[i] == ' ' && s[i + 1] != ' ') // if space and next character is not space
                w++; // increment word count
        }

        cout << w << " " << v << " " << c << endl; // output word, vowel and consonant count
    }
    return 0;
}
