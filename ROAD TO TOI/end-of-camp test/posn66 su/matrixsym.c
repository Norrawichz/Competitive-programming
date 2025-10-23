#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];
    for (int i=1; i<n; i++) {
        for (int j=0; j<i; j++) {
            scanf("%d", &a[i][j]);
            a[j][i] = a[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        a[i][i]=0;
        for (int j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}