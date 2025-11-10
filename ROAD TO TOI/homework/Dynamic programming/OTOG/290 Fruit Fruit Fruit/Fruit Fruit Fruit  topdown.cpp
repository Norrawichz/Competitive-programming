#include <bits/stdc++.h>
using namespace std;

int n,m;

int recur(int i, int j, vector<vector<int>> &board, vector<vector<int>> &mem) {
    if (i==0 && j==0) return board[i][j];
    if (i<0 || j<0) return 0;

    if (mem[i][j] != -1) return mem[i][j];
    return mem[i][j] = max(recur(i-1, j, board, mem), recur(i, j-1, board, mem))+ board[i][j];
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;

    vector<vector<int>> board(n, vector<int>(m));
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>> board[i][j];
    

    vector<vector<int>> mem(n, vector<int>(m, -1));
    int ans = recur(n-1, m-1, board, mem);
    cout<< ans;
}