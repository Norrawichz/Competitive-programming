#include <stdio.h>

int main() {
    char c[10000];
    scanf("%s", &c);

    int a[8]={};
    for (int i=0; i<10000; i++) {
        if (c[i]=='\0') break;
        a[c[i]-'A']++;
    }
    for (int i=0; i<8; i++) printf("%d ", a[i]);
}