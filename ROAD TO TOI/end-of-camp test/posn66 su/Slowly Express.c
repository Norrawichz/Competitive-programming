#include <stdio.h>

int main() {
    
    int sm=0;
    while (1) {
        int n;
        scanf("%d", &n);
        if (n < 0) break;

        sm+=n;
        if (sm % 800 >= 500) {
            printf("%d\n", (sm+799)/800);
            sm=0;
        } 
        else {
            printf("%d\n", sm/800);
            sm=sm%800;
        }
    }
}