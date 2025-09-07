#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;

    multiset<int> tk;
    for (int i=0; i<n; i++) {
        int k;
        cin>> k;
        tk.insert(k);
    }

    for (int i=0; i<m; i++) {
        int t;
        cin>> t;
        auto it = tk.upper_bound(t);
        if (it == tk.begin()) {
            cout<< -1<< endl;
        }
        else {
            it--;
            cout<< *it<< endl;
            tk.erase(it);
        }
    }
    return 0;
}