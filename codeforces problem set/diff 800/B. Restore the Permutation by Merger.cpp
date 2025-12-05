#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        vector<int> a(n*2);
        for (int i=0; i<n*2; i++) cin>> a[i];

        vector<int> vst(n+1, 0);
        vector<int> ans;
        for (int i=0; i<n*2; i++) {
            if (!vst[a[i]]) {
                ans.push_back(a[i]);
                vst[a[i]] = true;
            }
            if (ans.size() == n) {
                for (auto &x : ans) cout<< x<< ' ';
                cout<< '\n';
                break;
            }
        }
    }
}