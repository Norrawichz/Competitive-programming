#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int recur(int i, int j, vector<vector<char>> &c, vector<vector<int>> &mem) {
    if (i < 0 || j < 0 || c[i][j] == '*') return 0;
    if (i==0 && j==0) return 1;
    
    if (mem[i][j] != -1) return mem[i][j];
    return mem[i][j] = (recur(i-1, j, c, mem) + recur(i, j-1,c, mem)) % MOD;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<char>> c(n, vector<char> (n));
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        for (int j=0; j<n; j++) {
            c[i][j] = s[j];
        }
    }
    
    vector<vector<int>> mem(n, vector<int> (n, -1));
    int ans = recur(n-1, n-1, c, mem);
    cout<< ans;
}