#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i=0; i<n; i++) scanf("%d", &a[i]);

    int win=a[0], sm=a[0];
    for (int i=1; i<n; i++) {
        if (a[i] > win) {
            win = a[i];
            sm+=win;
        }
    }
    printf("%d", sm);
}