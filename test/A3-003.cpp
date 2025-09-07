#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    int blue[n], red[n];
    for (int i = 0; i<n; i++) cin>> red[i];
    for (int i = 0; i<n; i++) cin>> blue[i];
    int x = 1, y= 1,count = 0;
    for (int i = 0; i<n; i++) {
        int xx = red[i], yy = blue[i];
        int p = x, q = y, pp = xx, qq = yy;
        if (p > pp) swap(p, pp);
        if (q > qq) swap(q, qq);
        if (q == p && qq == pp) count++;
        else if (p != q && p != qq && pp != q && pp != qq) {
            if (p < q && pp > q && pp < qq) count++;
            else if (q < p && qq > p && qq < pp) count++;
        }
        x = xx, y = yy;
    }
    cout<< count;
    return 0;
}