#include <stdio.h>

int mdays(int y, int m) {
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (m == 2 && ((y%4==0 && y%100!=0) || y%400==0)) return 29;
    return month[m-1];
}

int main() {
    long long y, M, d, h, m, s;
    scanf("%lld %lld %lld %lld %lld %lld", &y, &M, &d, &h, &m, &s);

    int q;
    scanf("%d", &q);

    while (q--) {
        long long add;
        scanf("%lld", &add);

        long long ny=y, nM=M, nd=d, nh=h, nm=m, ns=s;

        ns += add;
        nm += ns / 60;
        ns %= 60;
        nh += nm / 60;
        nm %= 60;
        nd += nh / 24;
        nh %= 24;

        while (1) {
            int md = mdays(ny, nM);
            if (nd <= md) break;
            nd -= md;
            nM++;
            if (nM > 12) {
                nM = 1;
                ny++;
            }
        }

        printf("%lld %lld %lld %lld %lld %lld\n", ny, nM, nd, nh, nm, ns);
    }
    return 0;
}
