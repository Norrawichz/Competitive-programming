#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    map<int,int> m;
    for (int i=0; i<n; i++) {
        int c,q;
        cin>> c>> q;
        m[c] = max(m[c] , q);
    }
    int curq=0;
    for (auto x : m) {
        if (x.second <= curq) {
            cout<< "Happy Alex";
            return 0;
        }
        curq = x.second;
    }
    cout<< "Poor Alex";
}