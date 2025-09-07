#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;

    int cube[n];
    for (int i=0; i<n; i++) cin>> cube[i];

    multiset<int> m;
    for (auto c : cube) {
        auto it = m.upper_bound(c);
        if (it != m.end()) {
            m.erase(it);
        }
        m.insert(c);
    }

    cout<< m.size();
}