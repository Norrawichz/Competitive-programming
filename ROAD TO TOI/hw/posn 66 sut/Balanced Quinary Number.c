#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a;
        scanf("%d",&a);

        int d=1;
        if (a >= 0) {
            int mx=0;
            while (mx <= a) {
                mx*=5;
                mx+=2;
                d++;
            }
        }
        else {
            int mn=0;
            while (mn >= a) {
                mn*=5;
                mn-=2;
                d++;
            }
        }
        printf("%d", d);
    }   
}