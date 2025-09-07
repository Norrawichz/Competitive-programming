#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);
    int n;
    cin>> n;
    int board[700][700]={};
    int sr=350, sc=350;
    int time=1, ans=INT_MAX;
    for (int i=0; i<n; i++) {
        char c;
        int s;
        cin>> c>> s;
        if (c=='N') {
            for (int j=0; j<s; j++) {
                sr--;
                if (board[sr][sc] != 0) {
                    ans=min(ans, board[sr+1][sc]-board[sr][sc]);
                }
                board[sr][sc]=time;
                time++;
            }
        }
        else if (c=='E') {
            for (int j=0; j<s; j++) {
                sc++;
                if (board[sr][sc] != 0) {
                    ans=min(ans, board[sr][sc-1]-board[sr][sc]);
                }
                board[sr][sc]=time;
                time++;
            }
        }
        else if (c=='W') {
            for (int j=0; j<s; j++) {
                sc--;
                if (board[sr][sc] != 0) {
                    ans=min(ans, board[sr][sc+1]-board[sr][sc]);
                }
                board[sr][sc]=time;
                time++;
            }
        }
        else if (c=='S') {
            for (int j=0; j<s; j++) {
                sr++;
                if (board[sr][sc] != 0) {
                    ans=min(ans, board[sr-1][sc]-board[sr][sc]);
                }
                board[sr][sc]=time;
                time++;
            }
        }
    }
    
    cout<< (ans!=INT_MAX? ans+1: -1);
}