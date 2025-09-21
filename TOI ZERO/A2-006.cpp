#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char g[31][31];
    bool ct[31][31];

    int n;
    cin>> n;
    for (int i = 0; i<n; i++) {
        string s;
        cin>> s;
        for (int j = 0; j<n; j++) {
            g[i][j] = s[j];
            ct [i][j] = false;
        }
    }
    if (g[n-1][n-1] == '.') {
        ct[n-1][n-1] = true;
    }
    for (int i = n-1; i>=0; i--) {
        for (int j = n-1; j>=0; j--) {
            if (i == n-1 && j == n-1) {
                continue;
            }
            if (g[i][j] == '.') {
                bool rd = false;
                if (i + 1 < n) {
                    rd = ct[i + 1][j];
                }
                bool rr = false;
                if (j + 1 < n) {
                    rr = ct[i][j + 1];
                }
                ct[i][j] = rr || rd;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (ct[i][j]) {
                cnt++;
            }
        }
    }
    cout<< cnt;
    return 0;
}