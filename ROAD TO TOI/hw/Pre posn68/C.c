#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n];
    for (int i=0; i<n; i++) scanf("%lld", &a[i]);

    long long ans=0;
    for (int i=n-2; i>=0; i--) {
        if (a[i] >= a[i+1]) {
            ans+=a[i]-a[i+1]+1;
        }
    }
    ans+=a[n-1]+ans;
    printf("%lld", ans);
}   