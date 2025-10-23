#include <stdio.h>

int main() {
    int n;
    char s[20];
    scanf("%d %s", &n, &s);

    long long fac[13]={},vst[12]={},ans=1;
    fac[1]=fac[0]=1;
    for (int i=2; i<13; i++) {
        fac[i]=fac[i-1]*i;
    }

    for (int i=0; i<n; i++) {
        int e=0;
        for (int j=i+1; j<n; j++) {
            if (s[j] < s[i]) e++;
        }
        
        ans+=e*fac[n-i-1];
    }
    printf("%d", ans);
}