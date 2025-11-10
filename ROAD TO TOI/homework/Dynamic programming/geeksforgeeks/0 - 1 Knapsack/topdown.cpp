#include <bits/stdc++.h>
using namespace std;

int recur(int cur, int p, vector<int> &v, vector<int> &w, vector<vector<int>> &mem) {
    if (cur == 0 || p < 0) return 0;

    if (mem[cur][p] != -1) return mem[cur][p];
    return mem[cur][p] = max(recur(cur,p-1, v, w, mem), (cur-w[p] >=0 ? recur(cur-w[p], p-1, v, w, mem)+v[p]:0));
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int w;
    cin>> w;

    int n;
    cin>> n;
    vector<int> m(n), v(n);
    for (int i=0; i<n; i++) cin>> v[i];
    for (int i=0; i<n; i++) cin>> m[i];
    

    vector<vector<int>> mem(w+1, vector<int> (n+1,-1));
    int ans = recur(w,n-1,v,m,mem);
    cout<< ans;
}