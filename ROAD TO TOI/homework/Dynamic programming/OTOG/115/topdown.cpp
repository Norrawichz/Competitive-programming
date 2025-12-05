#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> m;

int recur(int cur, int mxpickable, vector<int> &a, vector<vector<int>> &mem) {
    if (cur == 0) return 0;

    if (mem[cur][mxpickable] != -1) return mem[cur][mxpickable];
    return mem[cur][mxpickable] = max(recur(cur-1, mxpickable, a, mem), (m[a[cur-1]] <= mxpickable ? recur(cur-1, m[a[cur-1]], a, mem)+1 : 0));
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n);

    for (int i=0; i<n; i++) cin>> a[i];
    for (int i=0; i<n; i++) {
        int s;
        cin>> s;
        m[s] = i+1;
    }

    vector<vector<int>> mem(n+1, vector<int>(n+1, -1));
    cout<< recur(n, n, a, mem);


}