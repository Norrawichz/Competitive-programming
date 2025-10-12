#include <stdio.h>
#define ll long long

int main() {
    ll l, r;
    scanf("%lld %lld", &l, &r);

    ll t[20];
    t[0] = 1;
    for (int i = 1; i < 20; i++) t[i] = t[i-1] * 10;

    ll ans = 0;
    for (ll x = l; x <= r; x++) {
        int d = 1;
        while (d < 19 && x >= t[d]) d++;

        if (d & 1) {
            int mid = (d + 1) / 2;
            int md = (x / t[d - mid]) % 10;
            if (md != 5) continue;
        }

        int ok = 1;
        for (int k = 0; k < d/2; k++) {
            int L = (x / t[d-1-k]) % 10;
            int R = (x / t[k]) % 10;
            if (L + R != 10) { ok = 0; break; }
        }
        if (ok) ans++;
    }
    printf("%lld", ans);
    return 0;
}
