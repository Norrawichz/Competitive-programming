#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);

        if (n==0) printf("B");
        else if (n==1) printf("A");
        else if (n%2==0) {
            if (n/2 == 1) {
                printf("B");
            }
            else {
                printf("A");
            }
        }
        else {
            n--;
            if (n/2 == 1) { 
                printf("A");
            }
            else {
                printf("B");
            }
        }
        printf("\n");
    }
}