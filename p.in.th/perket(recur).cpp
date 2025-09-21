#include <bits/stdc++.h>
using namespace std;

vector<bool> vst;
vector<int> s, bi;
int ans=INT_MAX, n;

void bt(int a, int b) {
    ans = min(ans, abs(a-b));
    for (int i=0; i<n; i++) {
        if (!vst[i]) {
            vst[i]=1;
            bt(a*s[i], b+bi[i]);
            vst[i]=0;
        }
    }
}
int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>> n;
    s.resize(n);
    bi.resize(n);
    vst.resize(n,0);

    for (int i=0; i<n; i++) cin>> s[i]>> bi[i];

    for (int i=0; i<n; i++) {
        vst[i]=1;
        bt(s[i], bi[i]);
    }
    cout<< ans;
}