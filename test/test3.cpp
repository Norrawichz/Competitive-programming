#include <stdio.h>
using namespace std;

int x,y,ch=0;
int main(void) {
    for (x=1; x<=100; x++) {
        if (x%3==0 || x%5==0) {
            x++;
            ch=ch+x;
            ch=ch%24;
            if (x%5==0) {
                printf("%c",'A'+ch);
            }
        } 
    }
}