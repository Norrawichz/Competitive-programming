#include <stdio.h>

int main() {
    int a[9];
    for (int i=0; i<9; i++) scanf("%d", &a[i]);

    int sm=0;
    for (int i=0; i<9; i++) {
        sm+=a[i]*(10-i);
    }

    int ans=((sm+10)/11)*11 - sm;
    printf("%d", ans);
}