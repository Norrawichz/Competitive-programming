#include <stdio.h>
int c=2,x,y, A[5][5];
int main(void) {
    for (y=0; y<5; y++) 
        for (x=0; x<5;x++) {
            c++;
            A[y][x]=x+y+c;
            A[x][y]=y-x;
        }
    for (y=0; y<5; y++) {
        for (x=0; x<5;x++) {
            printf("%d ",A[y][x]);
        }
        printf("\n");
    }
    for (int y=1; y<3; y++) {
        A[x-1][y]=A[x][y];
        for (int x=2; x<4; x++) {
            printf("%d ", A[x][y]);
        }
        printf("\n");
    }
    return 0;
}