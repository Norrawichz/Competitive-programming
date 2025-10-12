#include <stdio.h>

int main() {
    char c[10000], c2[10000];
    scanf("%s %s", &c, &c2);

    int a[8]={}, a2[8]={}, a3[8]={};
    for (int i=0; i<10000; i++) {
        if (c[i]=='\0') break;
        a[c[i]-'A']++;
    }
    for (int i=0; i<10000; i++) {
        if (c2[i]=='\0') break;
        a2[c2[i]-'A']++;
    }
    for (int i=0; i<8; i++) printf("%d ", a[i]);
    printf("\n");
    for (int i=0; i<8; i++) printf("%d ", a2[i]);
    printf("\n");
    int sm=0;
    for (int i=0; i<8; i++) {
        if (a[i]>a2[i]) a3[i]=a[i]-a2[i];
        else a3[i]=a2[i]-a[i];
        sm+=a3[i];
    }
    for (int i=0; i<8; i++) printf("%d ", a3[i]);
    printf("\n");
    if (sm <= 3) printf("anagram");
    else printf("no");
}