#include <bits/stdc++.h>
using namespace std;

int n,m;

int recur(int i, int j, string &a, string &b, vector<vector<int>> &mem) {
    if (i==0) return j;
    if (j==0) return i;

    if (mem[i][j] != -1) return mem[i][j];

    int mn=INT_MAX;
    if (a[i-1] == b[j-1]) mn = min(mn,recur(i-1, j-1, a, b, mem));
    else mn = min({mn, recur(i-1,j-1,a,b,mem)+1, recur(i-1, j, a, b, mem)+1, recur(i, j-1, a, b, mem)+1});
    return mem[i][j] = mn;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a, b;
    cin>> a>> b;

    n=a.size();
    m=b.size();

    vector<vector<int>> mem(n+1, vector<int>(m+1, -1));
    int ans = recur(n, m, a, b, mem);
    cout<< ans;
}