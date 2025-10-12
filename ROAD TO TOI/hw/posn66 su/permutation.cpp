#include <stdio.h>

int main() {
    int n;
    char s[20];
    scanf("%d %s", &n, &s);

    long long fac[13]={};
    fac[1]=1;
    for (int i=2; i<13; i++) {
        fac[i]=fac[i-1]*i;
    }

    int ans=0;
    for (int i=0; i<n; i++) {
        ans+=(s[i]-'A')
    }
}