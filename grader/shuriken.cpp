#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;

    int maxh = n*3 - 1, maxl = n*4 - 1;
    char board[maxh][maxl];
    for (int i = 0; i<maxh; i++) {
        for (int j = 0; j<maxl; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i<n; i++) {
        for (int j = n*2 - i; j<=n*2+i; j++) {
            if (j == n*2 - i || j == n*2 + i) {
                board[i][j] = '*';
            }
            else board[i][j] = '-';
        }
    }
    for (int i = n, k = 0; i<maxh - n - n/2; i++, k++) {
        for (int j = n*2 - i - 1 - k; j<=n*2 + i + 1 + k; j++) {
            if (j == n*2 - (i - n) || j == n*2 + (i - n)) {
                board[i][j] = '#';
            }
            else if (j == n*2 - i - 1 - k || j == n*2 + i + 1 + k) {
                board[i][j] = '*';
            }
            else if (j < n*2 - (i - n) || j > n*2 + (i - n)) {
                board[i][j] = '-';
            }
        }
    }
    for (int i = maxh-1, k = 0; i>n*2 - 2; i--, k++) {
        for (int j = n*2 - k; j<=n*2+k; j++) {
            if (j == n*2 - k || j == n*2 + k) {
                board[i][j] = '*';
            }
            else board[i][j] = '-';
        }
    }
    for (int i = 0; i<maxh; i++) {
        for (int j = 0; j<maxl; j++) {
            cout<< board[i][j];
        }
        cout<< endl;
    }
    return 0;
}