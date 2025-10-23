#include <stdio.h>
#include <string.h>

char s[20] = "0123456789ABCDEF";

int main() {
    int b;
    char n1[100], n2[100];

    scanf("%d %s %s", &b,n1,n2);

    int sm=0, fir=0, sec=0;

    for (int i=0; i<strlen(n1); i++) {
        fir*=b;
        for (int j=0; j<16; j++) {
            if (n1[i]==s[j]) {
                fir+=j;
                break;
            }
        }
    }

    for (int i=0; i<strlen(n2); i++) {
        sec*=b;
        for (int j=0; j<16; j++) {
            if (n2[i]==s[j]) {
                sec+=j;
                break;
            }
        }
    }

    sm=fir+sec;
    char ans[100]={};
    int i=0;
    if (sm==0) printf("%d", 0);
    while (sm != 0) {
        ans[i] = s[sm%b];   
        sm/=b;
        i++;
    }
    for (int j=strlen(ans)-1; j>=0; j--) {
        printf("%c", ans[j]);
    }

}