#include <stdio.h>

int main() {
    char c[100];
    int n;
    scanf("%s %d", c, &n);

    if (c[0] >= 65) {
        char st[100];
        int cur=0;
        
        for (int i=0; i<10; i++) {
            if (c[i] == '\0') break;
            int vv=c[i], cnt=7;
            char tem[8];

            for (int j=0; j<8; j++) tem[j]='0';
            while (vv != 0) {
                char ff=48+vv%2;
                tem[cnt--]=ff;
                vv/=2;
            }
            for (int j=0; j<8; j++) {
                if (cur < 99) st[cur++]=tem[j];
            }
        }
        if (cur > 99) cur = 99;
        st[cur] = '\0';                                 

        for (int i=0; i<=cur; i++) {                 
            c[i]=st[i];
        }
    }

    int si=0;
    for (int i=0; i<100; i++) {
        if (c[i] == '\0') break;
        si++;
    }
    if (si==0 || n<=0) return 0;

    char b[n][n*si];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n*si; j++) {
            b[i][j]='_';
        }
    }

    int cur=0, state=1,i=0;
    while (i<si) {
        int j=i+1;
        while (j<si && c[i]==c[j]) j++;          
        int nm=j-i;

        int plus=(nm-1)*n + (n-nm+1);
        if (state != c[i]-'0') {
            if (cur < n*si) {
                for (int r=0; r<n; r++) b[r][cur]='x';
            }
            state=c[i]-'0';
        }
        
        for (int k=cur; k<cur+plus && k<n*si; k++) {   
            b[(state == 1? 0 : n-1)][k]='x';
        }
        cur=cur+plus-1;
        if (cur >= n*si) cur = n*si-1;                
        i=j;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<=cur && j<n*si; j++) {
            printf("%c", b[i][j]);
        }
        printf("\n");
    }
}
