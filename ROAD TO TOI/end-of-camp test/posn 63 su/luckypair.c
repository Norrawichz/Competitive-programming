#include <stdio.h>

int main() {
    int n, l;
    scanf("%d", &n);

    int a[n];
    for (int i=0; i<n; i++) scanf("%d", &a[i]);

    scanf("%d", &l);
    int ok=0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i] + a[j] == l) {
                printf("%d %d\n", a[i], a[j]);
                ok=1;
            }
        }
    }
    if (!ok) printf("No"); 
}