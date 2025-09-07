#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<char>> &board, int i, int j, int r, int c) {
    if (i >= r || j >= c || j < 0 || i < 0 || board[i][j] == '#') {
        return false;
    }
    if (board[i][j] == '!') {
        return true;
    }

    board[i][j] = '#';
    return dfs(board, i, j+1, r, c) || dfs(board, i, j-1, r, c) || dfs(board, i+1, j, r, c) || dfs(board, i-1, j, r, c);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, c;
    cin>> r>> c;
    vector<vector<char>> board(r, vector<char>(c));
    for (int i = 0; i<r; i++) {
        for (int j = 0; j<c; j++) {
            cin>> board[i][j];
        }
    }
    for (int i = 0; i<r; i++) {
        for (int j = 0; j<c; j++) {
            if (board[i][j] == '@') {
                if (dfs(board, i, j, r, c)) {
                    cout<< "YES";
                }
                else {
                    cout<< "NO";
                }
                return 0;
            }
        }
    }
    return 0;
}