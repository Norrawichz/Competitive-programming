#include <stdio.h>
#include <string.h>

int main() {
    int n; 
    if (scanf("%d", &n) != 1) return 0;

    int a[n+2][n+2];
    for (int i=0;i<n+2;i++) for (int j=0;j<n+2;j++) a[i][j]=0;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%*[^0-9]%d", &a[i][j]);
        }
    }

    int sm=0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int h=a[i][j];
            if (h==0) continue;
            sm += 2;
            if (h > a[i-1][j]) sm += h - a[i-1][j];
            if (h > a[i+1][j]) sm += h - a[i+1][j];
            if (h > a[i][j-1]) sm += h - a[i][j-1];
            if (h > a[i][j+1]) sm += h - a[i][j+1];
        }
    }
    printf("%d", sm);
    return 0;
}
