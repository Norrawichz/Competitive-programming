#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    
    char board[25][1000];
    for (int i=0; i<25; i++) {
        for (int j=0; j<1000; j++) {
            board[i][j]=' ';
        }
    }

    int cur=0;
    for (int i=0; i<n; i++) {
        int l;
        scanf("%d", &l);
        for (int j=0; j<l; j++) {
            board[j][cur+j]='\\';
            board[j][2*l-1+cur-j]='/';
        }
        cur+=2*l;
    }
    for (int i=0; i<25; i++) {
        for (int j=0; j<1000; j++) {
            printf("%c", board[i][j]);
        }
        printf("%c", '\n');
    }
}