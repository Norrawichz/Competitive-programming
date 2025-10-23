#include <stdio.h>
int n, s[100], mn=1000000;
int ans1[100], ans2[100], as1, as2;

void bt(int cur, int s1[], int s2[], int sm1, int sm2, int size1, int size2) {
    if (cur == n) {
        if ((size1 == n/2 && size2 == n/2) || (size1 == n/2+1 && size2 == n/2)) {
            int diff = (sm1-sm2 >=0 ? sm1-sm2 : sm2-sm1);
            if (diff < mn) {
                mn = diff;
                as1 = size1;
                as2 = size2;
                for (int i=0; i<as1; i++) ans1[i] = s1[i]; 
                for (int i=0; i<as2; i++) ans2[i] = s2[i]; 
            }
        }
    }
    
    if (size1 < n/2+1) {
        s1[size1] = s[cur];
        bt(cur+1, s1,s2,sm1+s[cur], sm2, size1+1, size2);
    }
    
    if (size2 < n/2) {
        s2[size2] = s[cur];
        bt(cur+1, s1,s2,sm1, sm2+s[cur], size1, size2+1);
    }
}

int main()
{
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &s[i]);
    }
    int f[n], v[n];
    bt(0, f, v,0,0,0,0);
    
    for (int i=0; i<as2; i++) printf("%d ", ans2[i]);
    printf("\n");
    for (int i=0; i<as1; i++) printf("%d ", ans1[i]);
    
    
    return 0;
}