#include <stdio.h>
int x,y,sum=0;
int main(void) {
    for (x=1; x<=100; x++) {
        if (x%3==0 || x%5==0) {
            x++;
            sum+=x;
        }
    }
    printf("sum = %d", sum);
}