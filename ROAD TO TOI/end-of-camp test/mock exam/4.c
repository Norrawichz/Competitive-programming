#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=5*n; i++) {
        for (int j=1; j<30*n+6; j++) {  
            if (i<=n) {
                if (j<=n*5) printf("#");
                else if (j > n*5+1 &&j<=n*10+1) printf("#");
                else if (j > n*10+2 &&j<=n*15+2) {
                    if (j > n*10+2 && j<=n*10+2+n) printf("#");
                    else if (j > n*15+2-n && j<=n*15+2) printf("#");
                    else printf(" ");
                }
                else if (j > n*15+3 &&j<=n*20+3) {
                    if (j > n*15+3 &&j<=n*20+3-n) printf("#");
                    else printf(" ");
                }   
                else if (j > n*20+4 &&j<=n*25+4) printf("#");
                else if (j > n*25+5 &&j<=n*30+5) {
                    if (j > n*25+5 && j<=n*25+5+n) printf("#");
                    else if (j > n*30+5-n && j<=n*30+5) printf("#");
                    else printf(" ");
                }
                else {
                    printf(" ");
                }
            }
            else if (i<=2*n) {
                if (j<=n*5) {
                    if (j<=n) printf("#");
                    else printf(" ");
                }
                else if (j > n*5+1 &&j<=n*10+1) {
                    if (j<=n*5+1+n) printf("#");
                    else printf(" ");
                }
                else if (j > n*10+2 &&j<=n*15+2) {
                    if (j > n*10+2 && j<=n*10+2+n*2) printf("#");
                    else if (j > n*15+2-n*2 && j<=n*15+2) printf("#");
                    else printf(" ");
                }
                else if (j > n*15+3 &&j<=n*20+3) {
                    if (j > n*15+3 && j<=n*15+3+n) printf("#");
                    else if (j > n*20+3-n && j<=n*20+3) printf("#");
                    else printf(" ");
                }
                else if (j > n*20+4 &&j<=n*25+4) {
                    if (j > n*20+4 && j<=n*20+4+n) printf("#");
                    else if (j > n*25+4-n && j<=n*25+4) printf("#");
                    else printf(" ");
                }
                else if (j > n*25+5 &&j<=n*30+5) {
                    if (j > n*25+5+n && j<=n*25+5+n*2) printf("#");
                    else if (j > n*30+5-n*2 && j<=n*30+5-n) printf("#");
                    else printf(" ");
                }
                else {
                    printf(" ");
                }
            }
            else if (i<=3*n) {
                if (j<=n*5) {
                    printf("#");
                }
                else if (j > n*5+1 &&j<=n*10+1) {
                    printf("#");
                }
                else if (j > n*10+2 &&j<=n*15+2) {
                    if (j > n*10+2 && j<=n*10+2+n) printf("#");
                    else if (j > n*15+2-n && j<=n*15+2) printf("#");
                    else if (j > n*10+2+n*2 && j<= n*15+2-n*2) printf("#");
                    else printf(" ");
                }
                else if (j > n*15+3 &&j<=n*20+3) {
                    if (j > n*15+3 &&j<=n*20+3-n) printf("#");
                    else printf(" ");
                }
                else if (j > n*20+4 &&j<=n*25+4) {
                    if (j > n*20+4 && j<=n*20+4+n) printf("#");
                    else if (j > n*25+4-n && j<=n*25+4) printf("#");
                    else printf(" ");
                }
                else if (j > n*25+5 &&j<=n*30+5) {
                    if (j > n*25+5+n*2 && j<= n*30+5-n*2) printf("#");
                    else printf(" ");
                }
                else {
                    printf(" ");
                }
            }
            else if (i<=4*n) {
                if (j<=n*5) {
                    if (j<=n) printf("#");
                    else printf(" ");
                }
                else if (j > n*5+1 &&j<=n*10+1) {
                    if (j<=n*5+1+n) printf("#");
                    else printf(" ");
                }
                else if (j > n*10+2 &&j<=n*15+2) {
                    if (j > n*10+2 && j<=n*10+2+n) printf("#");
                    else if (j > n*15+2-n && j<=n*15+2) printf("#");
                    else printf(" ");
                }
                else if (j > n*15+3 &&j<=n*20+3) {
                    if (j > n*15+3 && j<=n*15+3+n) printf("#");
                    else if (j > n*20+3-n && j<=n*20+3) printf("#");
                    else printf(" ");
                }
                else if (j > n*20+4 &&j<=n*25+4) {
                    if (j > n*20+4 && j<=n*20+4+n) printf("#");
                    else if (j > n*25+4-n && j<=n*25+4) printf("#");
                    else printf(" ");
                }
                else if (j > n*25+5 &&j<=n*30+5) {
                    if (j > n*25+5+n*2 && j<= n*30+5-n*2) printf("#");
                    else printf(" ");
                }
                else {
                    printf(" ");
                }
            }
            else if (i<=5*n) {
                if (j<=n*5) {
                    if (j<=n) printf("#");
                    else printf(" ");
                }
                else if (j > n*5+1 &&j<=n*10+1) {
                    printf("#");
                }
                else if (j > n*10+2 &&j<=n*15+2) {
                    if (j > n*10+2 && j<=n*10+2+n) printf("#");
                    else if (j > n*15+2-n && j<=n*15+2) printf("#");
                    else printf(" ");
                }
                else if (j > n*15+3 &&j<=n*20+3) {
                    if (j > n*15+3 &&j<=n*20+3-n) printf("#");
                    else printf(" ");
                }
                else if (j > n*20+4 &&j<=n*25+4) {
                    printf("#");
                }
                else if (j > n*25+5 &&j<=n*30+5) {
                    if (j > n*25+5+n*2 && j<= n*30+5-n*2) printf("#");
                    else printf(" ");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    
}