#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a[4];
        for (int i=0; i<4; i++) cin>> a[i];
        
        int mx=0;
        for (int i=-99; i<=99; i++) {
            int cnt=0;
            if (a[0] + a[1] == i) cnt++;
            if (a[1] + i == a[2]) cnt++;
            if (i + a[2] == a[3]) cnt++;

            mx = max(mx, cnt);
        }
        cout<< mx<< '\n';
    }
}