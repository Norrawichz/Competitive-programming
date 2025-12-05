#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int w,h,n;
    cin>> w>> h>> n;

    vector<int> a(w+1, 0);

    for (int i=0; i<n; i++) {
        int x, y;
        cin>> x>> y;

        a[x] += 1;
        if (x+y <= w ) a[x+y] -= 1;
    }

    int zero=0, f=0, cur=0;
    for (int i=0; i<w; i++) {
        cur+=a[i];
        if (cur == 0) zero++;
        else if (cur == 1) f++;
    }
    cout<< zero*h<< ' '<< f*h;
}