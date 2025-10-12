#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    bool pr[101]={};
    for (int i=2; i<101; i++) pr[i]=1;

    for (int i=2; i<101; i++) {
        if (!pr[i]) continue;
        int j=2;
        while (i*j < 101) {
            pr[i*j] = 0;
            j++;
        }
    }
    for (int i=2; i<n; i++) {
        if (pr[i]) printf("%d %c", i,'\n');
    }
}