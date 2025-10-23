#include <stdio.h>

int main() {
    int m,d;
    scanf("%d %d", &m, &d);

    for (int i=1; i<12; i++) {
        d=(d+1)%7;
    }
    if (m < 8) {
        for (int i=m; i<8; i++) {
            if (i==2) continue;
            if (i%2==0) d=(d+2)%7;
            else d=(d+3)%7;
        }
    }
    else if (m > 8) {
        for (int i=m; i>8; i--) {
            if (i%2==0) d=(d-3);
            else d=(d-2);
            if (d<=0) d+=7;
        }
    }
    printf("%d", d);
}