#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, r=0, c=0;
    vector<int> g;
    while (cin>>n) {
        g.push_back(n);
        r = max(r,n);
        c += n*2;
    }
    vector<vector<char>> board(r, vector<char>(c, ' '));
    int cur = 0;
    for (auto x : g) {
        board[r-x][cur+x-1] = '#';
        for (int i=2; i<=x; i++) {
            board[r-x+i-1][cur+x-1] = '*';
            for (int j=1; j<i; j++) {
                board[r-x+i-1][cur+x-1-j] = '*';
                board[r-x+i-1][cur+x-1+j] = '*';
            }
        }
        cur+=2*x;
    }
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cout<< board[i][j];
        }
        cout<< endl;
    }
}