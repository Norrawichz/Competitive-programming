#include <bits/stdc++.h>
using namespace std;

int recur(int i, int j, string &a, string &b, vector<vector<int>> &mem) {
    if (i==0 && j==0) return 0;

    if (mem[i][j] != -1) return mem[i][j];

    int mn = INT_MAX;
    if (i>0 && j>0 && a[i-1] == b[j-1]) mn = min(mn, recur(i-1,j-1, a,b, mem));
    else {
        if (i > 0) mn = min(mn, recur(i-1, j, a, b, mem)+1);
        if (j > 0) mn = min(mn, recur(i, j-1, a, b, mem)+1);
    }
    return mem[i][j] = mn;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    cin>> a>> b;

    int n=a.size(), m=b.size();
    vector<vector<int>> mem(n+1, vector<int>(m+1, -1));
    cout<< recur(n,m,a,b, mem);
}