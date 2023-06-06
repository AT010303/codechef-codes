#include <iostream>
#include <vector>
using namespace std;

void updateElements(vector<int>& sequence, int l, int r, int x, int y) {
    for (int i = l-1; i <= r-1; i++) {
        if (sequence[i] == x)
            sequence[i] = y;
    }
}

int getSumOfElements(vector<int>& sequence, int l, int r) {
    int sum = 0;
    for (int i = l-1; i <= r-1; i++) {
        sum += sequence[i];
    }
    return sum;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    while (q--) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            int l, r, x, y;
            cin >> l >> r >> x >> y;
            updateElements(sequence, l, r, x, y);
        }
        else if (queryType == 2) {
            int l, r;
            cin >> l >> r;
            int sum = getSumOfElements(sequence, l, r);
            cout << sum << endl;
        }
    }

    return 0;
}
