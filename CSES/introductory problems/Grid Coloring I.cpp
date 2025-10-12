#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;
    
    vector<vector<char>> s(n, vector<char>(m));
    for (int i=0; i<n; i++) {
        string a;
        cin>> a;
        for (int j=0; j<m; j++) s[i][j] = a[j];
    }

    string tem="ABCD";
    vector<vector<char>> ans(n, vector<char>(m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            for (auto x : tem) {
                if (x == s[i][j]) continue;
                if (i>0 && x==ans[i-1][j]) continue;
                if (j>0 && x==ans[i][j-1]) continue;
                ans[i][j] = x;
                break;
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout<< ans[i][j];
        }
        cout<< "\n";
    }
}