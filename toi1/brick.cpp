#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>> n>> m;
    char board[n][m];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin>> board[i][j];
        }
    }
    int brick[m];
    for (int i = 0; i<m; i++) {
        cin>> brick[i];
    }
    for (int j = 0; j<m; j++) {
        if (brick[j] == 0) continue;
        for (int i = 0; i<n; i++) {
            if (board[i][j] == 'O') {
                for (int k = 1; k<=brick[j]; k++) {
                    if (i-k < 0) break;
                    board[i - k][j] = '#';
                }
                break;
            }
            else if (i == n-1) {
                for (int k = 0; k<brick[j]; k++) {
                    if (i-k < 0) break;
                    board[i - k][j] = '#';
                }
                break;
            }
            
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cout<< board[i][j];
        }
        cout<< endl;
    }
    return 0;
}