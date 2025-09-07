#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<char>> &board, int sr, int sc, int r, int c) {
    if (sr < 0 || sr >= r || sc < 0 || sc >= c || board[sr][sc] == '#') {
        return 0;
    }
    board[sr][sc] = '#';
    return 1 + dfs(board, sr+1, sc, r, c) + dfs(board, sr-1, sc, r, c) + dfs(board, sr, sc+1, r, c) + dfs(board, sr, sc-1, r, c);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, c, sr, sc;
    cin>> r>> c>> sr>> sc;
    vector<vector<char>> board(r, vector<char>(c));
    for (int i = 0; i<r; i++) {
        for (int j = 0; j<c; j++) {
            cin>> board[i][j];
        }
    }
    cout<< dfs(board, sr-1, sc-1, r, c);
    
    return 0;
}