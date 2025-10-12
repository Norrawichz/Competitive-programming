#include <stdio.h>

int main() {
    int r,c,k;
    scanf("%d %d", &r, &c);
    
    int a[r][c];
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int pos, neg, even, odd;
    pos=neg=even=odd=0;
    scanf("%d", &k);
    while (k--) {
        int i,j;
        scanf("%d %d", &i, &j);
        if (i<=0 || j<=0 || i>r || j>c)  continue;
        i--;
        j--;
        int b=a[i][j];
        if (b==0) {
            even++;
        }
        else if (b > 0) {
            pos++;
            if (b % 2 ==0) even++;
            else odd++;
        }
        else if (b < 0) {
            neg++;
            if ((b*-1) % 2 == 0) even++;
            else odd++;
        }
    }
    printf("%d %d %d %d", pos, neg, even, odd);
}