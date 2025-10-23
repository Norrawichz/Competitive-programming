#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i=0; i<n; i++) scanf("%d", &a[i]);

    int cnt1[n], pos[n], si[n],pos1[n], mxsi=0;
    char bit[n][10];
    char ans[n*8];

    for (int i=0; i<n; i++) {
        char tem[10];

        pos[i]=i;
        cnt1[i]=0;

        int cur=0;
        while (a[i] != 0) {
            cnt1[i]+=a[i]%2;

            char c='0'+a[i]%2;
            tem[cur++] = c;

            a[i]/=2;
        }

        int k=0;
        for (int j=cur-1; j>=0; j--) {
            bit[i][k++] = tem[j];
        }
        si[i]=k-1;
        mxsi+=si[i];
        pos1[i]=0;
        bit[i][k]='\0';
        for (int j=0; j<k; j++) {
            if (bit[i][j]=='1') pos1[i]++;
            else break;
        }
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (cnt1[j] > cnt1[j+1]) {
                int tem=cnt1[j+1];
                cnt1[j+1]=cnt1[j];
                cnt1[j]=tem;

                tem = pos[j+1];
                pos[j+1]=pos[j];
                pos[j]=tem;
            }
        }
    }

    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (cnt1[j] == cnt1[j+1]) {
                int si1=si[j], si2=si[j+1];
                if (si1 < si2) {
                    int tem=pos[j+1];
                    pos[j+1]=pos[j];
                    pos[j]=tem;

                    tem=si[j+1];
                    si[j+1]=si[j];
                    si[j]=tem;
                }
            }
        }
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (cnt1[j] == cnt1[j+1]) {
                int si1=si[j], si2=si[j+1];
                if (si1 == si2) {
                    if (pos1[j] > pos1[j+1]) {
                    int tem=pos[j+1];
                    pos[j+1]=pos[j];
                    pos[j]=tem;

                    tem=si[j+1];
                    si[j+1]=si[j];
                    si[j]=tem;

                    tem=pos1[j+1];
                    pos1[j+1]=pos1[j];
                    pos1[j]=tem;
                    }
                }
            }
        }
    }
    int k=0;
    for (int i=n-1; i>=0; i--) {
        for (int j=0; j<strlen(bit[pos[i]]); j++) {
            ans[k]=bit[pos[i]][j];
            k++;
        }
    }
    ans[k]='\0';

    unsigned long long tod=0;
    for (int i=0; i<strlen(ans); i++) {
        tod*=2;
        tod+=ans[i]-'0';
    }

    printf("%d\n", tod);
}