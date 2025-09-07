#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin>> s1>> s2;
    int n1 = s1.size(), n2 = s2.size();
    vector<vector<char>> board(n2, vector<char>(n1, ' '));
    int r = -1, c = -1;
    for (int i = 0; i < n2; i++) {
        auto pos = s1.find(s2[i]);
        if (pos != string::npos) {
            r = i;
            c = pos;
            break;
        }
    }
    for (int i = 0; i<n2; i++) board[i][c] = s2[i];
    for (int j = 0; j<n1; j++) board[r][j] = s1[j];
    for (int i = 0; i<n2; i++) {
        for (int j = 0; j<n1; j++) {
            cout<< board[i][j];
        }
        cout<< endl;
    }
    return 0;
}