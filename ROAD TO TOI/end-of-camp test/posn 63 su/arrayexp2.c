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

    int pos, neg, even, odd, pp, pn, pe, po;
    pp=pn=pe=po=pos=neg=even=odd=0;
    scanf("%d", &k);
    while (k--) {
        int i,j;
        scanf("%d %d", &i, &j);
        if (i<=0 || j<=0 || i>r || j>c)  {
            pos+=pp;
            neg+=pn;
            even+=pe;
            odd+=po;
            continue;
        }
        i--;
        j--;
        int b=a[i][j];
        if (b==0) {
            even++;
            pp=0;
            pn=0;
            pe=1;
            po=0;
        }
        else if (b > 0) {
            pos++;
            pp=1;
            pn=0;
            
            if (b % 2 ==0) {
                even++;
                pe=1;
                po=0;
            }
            else {
                odd++;
                pe=0;
                po=1;
            }
        }
        else if (b < 0) {
            neg++;
            pp=0;
            pn=1;

            if ((b*-1) % 2 == 0) {
                even++;
                pe=1;
                po=0; 
            }
            else {
                odd++;
                pe=0;
                po=1;   
            }
        }
    }
    printf("%d %d %d %d", pos, neg, even, odd);
}
