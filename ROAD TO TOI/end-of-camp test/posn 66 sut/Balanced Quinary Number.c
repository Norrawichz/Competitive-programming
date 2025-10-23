#include <stdio.h>

int ans[7]={}, tar, anssize=-1;
int pre[8]={};

void find(int a[], int size) {
    if (size == 7) {
        int sm=0, ss=-1;
        for (int i=0; i<7; i++) {
            sm+=pre[i]*a[i];
            if (sm==tar && ss==-1) ss=i+1;
        }
        if (sm==tar) {
            anssize=ss;
            for (int i=0; i<7; i++) {
                ans[i]=a[i];
            }
        }
        return;
    }

    for (int i=-2; i<3; i++) {
        int tem=a[size];
        a[size]=i;
        find(a, size+1);
        a[size]=tem;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        scanf("%d",&tar);

        pre[0]=1;
        for (int i=1; i<8; i++) pre[i]=pre[i-1]*5;

        int t[7]={};
        find(t, 0);
        for (int i=0; i<anssize; i++) printf("%d ", ans[i]);
        printf("\n");
    }   
}