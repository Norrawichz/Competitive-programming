#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<int> a(n), b(m);
    for (int i=0; i<n; i++) cin>> a[i];
    for (int i=0; i<m; i++) cin>> b[i];

    vector<vector<int>> board(n,vector<int>(m,INT_MAX));
    for (int i=0; i<n-1; i++) {
        board[i][0]=a[i];
        for (int j=1; j<m; j++) {
            board[i][j]=min({board[i][j],a[i],b[j]});
        }
    }
    for (int j=1; j<m; j++) {
        board[n-1][j]=b[j];
        for (int i=0; i<n-1; i++) {
            board[i][j]=min({board[i][j], b[j], a[i]});
        }
    }
    board[n-1][0]=a[n-1];
    int ans=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            //cout<< board[i][j]<< ' ';
            ans+=board[i][j];
        }
        //cout<< '\n';
    }
    cout<< ans;
}