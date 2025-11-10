#include <bits/stdc++.h>
using namespace std;

int n;
const int INF = 1e9+7;

int bt(int cur, vector<bool> &vst, vector<vector<int>> &a) {
    if (cur == 0) return 0;

    int mn=INF;
    for (int i=0; i<n; i++) {
        if (!vst[i]) {
            vst[i]=true;
            mn = min(mn, bt(cur-1, vst, a)+ a[cur-1][i]);
            vst[i]=false;
        }
    }
    return mn;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
  
    cin>> n;

    vector<vector<int>> a(n, vector<int>(n));
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin>> a[i][j];

    vector<bool> vst(n, false);
    int ans = bt(n, vst, a);
    cout<< ans;


}