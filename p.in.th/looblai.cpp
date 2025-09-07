#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    map<int, int> d;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin>> x;
        d[x] += 1;
        mx = max(mx, d[x]);
    }
    for (auto &x : d) {
        if (x.second == mx) {
            cout<< x.first<< " ";
        }
    }
  return 0;
}