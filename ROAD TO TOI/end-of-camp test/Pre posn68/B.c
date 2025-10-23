#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n,&m);

    int ans[100], j=0;
    for (int i=2; i*i <= m; i++) {
        if (m % i==0) {
            ans[j++]=i-1;
            while (m%i==0) m/=i;
        }
    }
    if (m>1) ans[j++]=m-1;
    for (int i=0; i<j; i++) printf("%d ", ans[i]);
}