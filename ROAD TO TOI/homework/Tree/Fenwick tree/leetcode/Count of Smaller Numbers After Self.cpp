#include <bits/stdc++.h>
using namespace std;

int n;
const int MAX = 2*10000+2;

void update(int k, int val, vector<int> &tree) {
    while (k < MAX) {
        tree[k] +=val;
        k+=k&-k;
    }
}

int sm(int k, vector<int> &tree) {
    int s=0;
    while (k != 0) {
        s += tree[k];
        k-=k&-k;
    }
    return s;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n;

    int mn=MAX;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>> a[i];
        a[i] += 10001;
        mn=min(mn, a[i]);
    }
    vector<int> ans(n);
    vector<int> tree(MAX, 0);
    for (int i=n-1; i>=0; i--) {
        ans[i] = sm(a[i]-1, tree)-sm(mn-1, tree);
        update(a[i], 1, tree);
    }

    for (auto &x : ans) cout<< x<< ' ';
}