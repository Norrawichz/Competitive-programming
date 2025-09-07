#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>> s;
    int n = s.size();
    char board[5][n*3 + n+1];
    for (int i = 0; i<5; i++) {
        for (int j = 0; j<n*3 + n + 1; j++) {
            board[i][j] = '.';
        }
    }
    int cur = 2;
    for (int i = 0; i<n; i++) {
        board[2][cur] = s[i];
        if ((i+1)%3 == 0) {
            for (int j = 0; j<2; j++) {
                board[j][cur + j] = '*';
                board[j][cur - j] = '*';
                board[4-j][cur + j] = '*';
                board[4-j][cur - j] = '*';
            }
            board[2][cur-2] = '*';
            board[2][cur+2] = '*';
        }
        else {
            for (int j = 0; j<2; j++) {
                board[j][cur + j] = '#';
                board[j][cur - j] = '#';
                board[4-j][cur + j] = '#';
                board[4-j][cur - j] = '#';
            }
            if (board[2][cur-2] != '*') {
                board[2][cur-2] = '#';
            }
            board[2][cur+2] = '#';
        }
        cur += 4;
    }
    for (int i = 0; i<5; i++) {
        for (int j = 0; j<n*3 + n + 1; j++) {
            cout<< board[i][j];
        }
        cout<< endl;
    }
    return 0;
}