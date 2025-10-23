#include <stdio.h>

int main() {
    int n;
    scanf("%lld",&n);

    bool a[n]={};
    for (int i=2; i<n; i++) {
        int j=2;
        while (i*j < n) {
            a[i*j]=1;
            j++;
        }
    }
    int cnt=0, ans[5];
    for (int i=n-1; i>=0; i--) {
        if (!a[i]) {
            ans[cnt] = i;
            cnt++;
        }
        if (cnt == 5) break;
    }
    for (int i=4; i>=0; i--) printf("%d ", ans[i]);
}