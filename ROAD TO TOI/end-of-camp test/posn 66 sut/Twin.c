#include <stdio.h>
#include <stdbool.h>

bool p[70000001]={};

int main() {
    int l, r;
    scanf("%d %d", &l, &r);
    int t=0,c=0,s=0;
    
    for (int i=2; i*i<=r; i++) {
        if (p[i])continue;
        for (int j=i*i; j <=r; j+=i) {
            p[j]=1;
        }
    }

    for (int i=l; i<=r; i++) {
        if (p[i])continue;
        if ((i-2 >= 2 && p[i-2]==0) || p[i+2]==0) t++;
        if ((i-4 >= 2 && p[i-4]==0) || p[i+4]==0) c++;
        if ((i-6 >= 2 && p[i-6]==0) || p[i+6]==0) s++;
    }
    printf("%d\n%d\n%d", t,c,s);
}