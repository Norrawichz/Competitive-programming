#include <bits/stdc++.h>
using namespace std;

int check(int** board, int i, int j, int n, int m) {
    int sum = 0;
    for (int x = max(0, i-1); x<=min(n-1, i+1); x++) {
        for (int y = max(0, j-1); y<=min(m-1, j+1); y++) {
            sum += board[x][y];
        }
    }
    return sum;
}

int main() {
    int n, m, k;
    cin >> n >> m;
    cin >> k;

    int** board = new int*[n];
    for(int i = 0; i<n; i++) {
        board[i] = new int[m];
    }

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            board[i][j] = 0;
        }
    }

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        board[x][y]++;
    }

    int mx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] != 0) {
                continue;
            }
            mx = max(check(board, i, j, n, m), mx);
        }
    }

    cout << mx;
    return 0;
}