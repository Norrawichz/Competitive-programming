#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int n, target;

int recur(int cur, int cnt, vector<vector<int>> &mem) {
    if (cur == 0) return cnt;
    if (cur < 0) return INF;

    if (mem[cur][cnt] != -1) return mem[cur][cnt];
    int mn=INF;
    for (int i=0; i<n; i++) {
        mn = min(mn, recur(cur-a[i], cnt+1, mem));
    }
    return mem[cur][cnt] = mn;
}


int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>> n;
    for (int i=0; i<n; i++) cin>> a[i];
    cin>> target;

    vector<vector<int>> mem(target+1, vector<int>(target+1, -1));
    cout<< recur(target, 0, mem);

}