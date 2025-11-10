#include <bits/stdc++.h>
using namespace std;


int mx, mn;
int recur(int l, int r, int cnt, vector<int> &a, vector<vector<vector<int>>> &mem) {
    if (l>r || cnt==2) return 0;

    if (mem[l][r][cnt] != -1) return mem[l][r][cnt];

    int ans=INT_MAX;
    if (a[l] == mx || a[l] == mn) ans=min(ans, recur(l+1, r, cnt+1, a, mem)+1);
    if (a[r] == mx || a[r] == mn) ans=min(ans, recur(l, r-1, cnt+1, a, mem)+1);
    if (a[r] != mx && a[r] != mn && a[l] != mx && a[l] != mn) ans = min({ans, recur(l+1, r, cnt, a, mem)+1, recur(l, r-1, cnt, a, mem)+1});
    return mem[l][r][cnt] = ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        mx=0;
        mn=105;
        vector<int> a(n);
        vector<vector<vector<int>>> mem(n+1, vector<vector<int>>(n+1, vector<int> (3, -1)));
        for (int i=0; i<n; i++) {
            cin>> a[i];
            mx=max(mx, a[i]);
            mn=min(mn, a[i]);
        }
        cout<< recur(0, n-1,0, a, mem)<< '\n';
    }
}