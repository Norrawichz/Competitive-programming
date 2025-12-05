#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> tem;

void recur(int cur, vector<bool> &vst, vector<bool> &nf) {
    if (cur == n) {
        for (auto &x : tem) cout<< x<< ' ';
        cout<< '\n';
        return;
    }

    for (int i=1; i<=n; i++) {
        if ((cur == 0 && nf[i]) || vst[i]) continue;

        vst[i] = true;
        tem.push_back(i);
        recur(cur+1, vst, nf);
        tem.pop_back();
        vst[i] = false;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int m;
    cin>> n>> m;

    vector<bool> nf(n+1, false);
    for (int i=0; i<m; i++) {
        int a;
        cin>> a;
        nf[a] = true;
    }

    vector<bool> vst(n+1, false);
    recur(0, vst, nf);
}