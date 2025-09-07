#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin>> n>> m>> k;
    int board[n][m];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            board[i][j] = 1;
        }
    }
    int area[n][m];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            area[i][j] = 0;
        }
    }

    for (int j = 0; j<m; j++) {
            area[0][j] = 1;
    }
    for (int i = 0; i<n; i++) {
            area[i][0] = 1;
    }

    for (int i = 0; i<k; i++) {
        int x,y;
        cin>> x>> y;
        board[x-1][y-1] = 0;
        int mx = 0;
        for (int i = 0; i<n; i++) {
            for (int j = 0; j<m; j++) {
                if (board[i][j] == 0) {
                    area[i][j] = 0;
                }
                else if (i != 0 && j != 0) {
                    area[i][j] = min(min(area[i-1][j], area[i][j-1]),area[i-1][j-1]) + 1;
                    mx = max(area[i][j], mx);
                }
            }
        }
        
        cout<<mx<<endl;
    }
    return 0;
}