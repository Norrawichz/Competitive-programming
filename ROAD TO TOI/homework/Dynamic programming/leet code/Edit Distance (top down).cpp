#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;
int n,m;

int recur(int i, int j,  string &a, string &b, vector<vector<int>> &mem) {
    if (j >= m) return n-i;
    if (i >= n) return m-j;

    if (mem[i][j] != -1) return mem[i][j];

    int mn=INT_MAX;
    if (a[i] == b[j]) mn=min(mn, recur(i+1, j+1, a, b, mem));
    else {
        mn=min({mn, recur(i+1, j+1, a, b, mem)+1, recur(i+1, j, a, b, mem)+1 , recur(i, j+1, a, b, mem)+1});
    }
    return mem[i][j] = mn;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    cin>> a>> b;

    n=a.size();
    m=b.size();

    vector<vector<int>> mem(n, vector<int> (m, -1));
    int ans = recur(0,0,a,b, mem);
    cout<< ans;
}