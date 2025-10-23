#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char s='A'+n-1;
    for (int i=0; i<n*2-1; i++) {
        for (int j=0; j<n*4; j++) {
            if (j < n*2) {
                if (j==i || j==n*2-i-2) printf("%c", s);
                else printf("%c", ' ');
            }
            else {
                if (j==n*2+i || j==n*4-i-2) printf("%c", '*');
                else printf("%c", ' ');
            }
        }
        printf("%c", '\n');
        if (i<n-1) s--;
        else s++;
    }
}