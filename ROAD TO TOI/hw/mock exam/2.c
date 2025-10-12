#include <stdio.h>
#define ll long long

int main() {
    int n;
    scanf("%d", &n);

    ll a[n];
    for (int i=0; i<n; i++) scanf("%lld", &a[i]);

    int ans=n-1;
    for (int i=0; i<n-1; i++) {
        a[i+1] += -a[i];
        a[i]=0;
    }
    if (a[n-1] == 0) ans++;
    printf("%d", ans);
}