#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>> n;
  int m = n;
  if (n % 2 == 0) m = n-1;
  char board[n][m];
  for (int i = 0; i<n; i++) {
    for (int j = 0; j<m; j++) {
        board[i][j] = '-';
    }
  }
  for (int i = 0; i<n/2; i++) {
    board[i][m/2 +i] = '*';
    board[i][m/2 -i] = '*';
  }
  for (int i = n- 1, j = 0; i>n/2-1; i--, j++) {
    board[i][m/2 +j] = '*';
    board[i][m/2 -j] = '*';
  }
  if (n % 2 != 0) {
    board[n/2][0] = '*';
    board[n/2][n-1] = '*';
  }
  for (int i = 0; i<n; i++) {
    for (int j = 0; j<m; j++) {
        cout<< board[i][j];
    }
    cout<< endl;
  }

  return 0;
}