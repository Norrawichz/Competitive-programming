#include <bits/stdc++.h>
using namespace std;

int recur(int i, int j, string &a, string &b, vector<vector<int>> &mem) {
    if (i < 0 || j < 0) return 0;

    if (mem[i][j] != -1) return mem[i][j];
    int mx=0;
    if (a[i] == b[j]) {
        int cnt=1, ni=i-1,nj=j-1;
        while (ni>=0 && nj>=0 && a[ni]==b[nj]) {
            cnt++;
            ni--;
            nj--;
        }
        mx = max(mx, cnt);
    }
    mx=max({mx, recur(i-1, j, a, b, mem), recur(i, j-1, a, b, mem)});
    return mem[i][j] = mx;
}

int main() {
    cin.tie(0)->sync_with_stdio(0); 
    string a,b;
    cin>> a>> b;

    vector<vector<int>> mem(a.size(), vector<int>(b.size(), -1));
    int ans = recur(a.size()-1, b.size()-1, a, b, mem);
    cout<< ans;
}