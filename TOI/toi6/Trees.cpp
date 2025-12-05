#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t=5;
    while (t--) {
        int n;
        cin>> n;

        vector<set<int>> g1(n+1);
        for (int i=0; i<2*(n-1); i+=2) {
            int u,v;
            cin>> u>> v;
            g1[u].insert(v);
            g1[v].insert(u);
        }

        bool ans=true;
        for (int i=0; i<2*(n-1); i+=2) {
            int u,v;
            cin>> u>> v;
            if (g1[u].find(v) == g1[u].end() || g1[v].find(u) == g1[v].end()) {
                ans = false;
            }
        }
        cout<< (ans ? "Y":"N");

    }
}