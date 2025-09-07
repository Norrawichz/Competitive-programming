#include <bits/stdc++.h>
using namespace std;

int main() {
    bool v[360] = {};
    int n, range = 0, mx = 0;
    cin>> n;
    for (int i = 0; i<n; i++) {
        int x, y;
        cin>> x>> y;
        if (x > y) {
            for (int j = x; j<360; j++) v[j] = true;
            for (int j = 0; j<y; j++) v[j] = true;
        }
        else {
            for (int j = x; j<y; j++) v[j] = true;
        }
    }
    for (int i = 0; i<720; i++) {
        if (v[i%360]) range++;
        else {
            mx = max(mx, range);
            range = 0;
        }
    }
    if (range >= 360) mx = 360;
    cout<< mx;
    return 0;
}