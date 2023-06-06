#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1e9 + 7;

void solveTestCase() {
    int M, N, K;
    cin >> M >> N >> K;

    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Test Case: " << M << "x" << N << ", K=" << K << endl;

    for (int q = 0; q < K; q++) {
        int xi, yi, xj, yj;
        cin >> xi >> yi >> xj >> yj;

        long long distance = (1LL << abs(xi - xj) + abs(yi - yj)) % MOD;
        matrix[xi - 1][yi - 1] = (1LL << q) % MOD;
        matrix[xj - 1][yj - 1] = distance;

        cout << "Query " << q + 1 << ": " << xi << "," << yi << " to " << xj << "," << yj << endl;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        solveTestCase();
    }

    return 0;
}
