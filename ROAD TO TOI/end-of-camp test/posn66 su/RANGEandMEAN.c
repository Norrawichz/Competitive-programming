#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n];
    for (int i=0; i<n; i++) scanf("%lld", &a[i]);

    float sm=0;
    long long mx=-1*(1<<30)+1, mn=(1<<30);
    for (int i=0; i<n; i++) {
        if (mx < a[i]) mx=a[i];
        if (mn > a[i]) mn=a[i];

        sm +=a[i];
    }
    printf("%lld %.2f", mx-mn, sm/n);
}