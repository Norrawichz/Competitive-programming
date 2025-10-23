#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long plus=6, cur=1;
    while (cur < n) {
        cur+=plus;
        plus+=8;
    }

    if (cur-2 == n) {
        printf("Cannot find top-right corner.");
    }
    else if (n==cur) printf("%lld", cur);
    else if (cur-1 == n) printf("%lld", cur-1);
    else if (n < cur) {
        plus-=8;
        printf("%lld", cur-plus);
    } 
}