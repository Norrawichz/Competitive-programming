#include <stdio.h>
const int N=200000;
int main() {
    int q;
    scanf("%d", &q);

    int pu=0, po=0;
    while (q--) {
        int t;
        scanf("%d", &t);
        if (t==1) {
            int a;
            scanf("%d", &a);
            pu++;
        }
        else {
            po++;
        }
        int d=pu-po*2;
        if (d<0) d=0;
        printf("%d\n", d);
    }
}