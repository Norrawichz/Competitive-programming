#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    set<string> s;
    for (int i=0; i<n; i++) {
        string c;
        cin>> c;
        s.insert(c);
    }
    vector<string> ans;
    for (auto x : s) ans.push_back(x);
    sort(ans.begin(), ans.end());
    for (auto x : ans) cout<< x<< endl;
}