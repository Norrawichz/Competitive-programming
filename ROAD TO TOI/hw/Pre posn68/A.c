#include <stdio.h>
 
int main() {
    int n,q;
    scanf("%d %d", &n, &q);
    
    float ans[q]={};
    int a[n][6]={};
    for (int i=0; i<n; i++) {
        int c;
        scanf("%d", &c);
        for (int j=0; j<c; j++) {
            int s;
            scanf("%d", &s);
            a[i][s]=1;
        }
    }
    for (int i=0; i<q; i++) {
        for (int j=0; j<n; j++) {
            int c, d[6]={};
            float sm=0;
            scanf("%d", &c);
            
            for (int k=0; k<c;k++) {
                int z;
                scanf("%d",&z);
                d[z]=1;
            }
            for (int k=1; k<6; k++) {
                if (d[k]==a[j][k]) sm++;
            }
            ans[i] += sm/5;
        }
    }
    for (int i=0; i<q; i++) {
        printf("%.2f\n", ans[i]);
    }
}