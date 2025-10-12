#include <stdio.h>
#include <string.h>

int main() {
    char c[250];
    int h;
    scanf("%s", &c);
    scanf("%d", &h);

    int height=h*2+1,len=(h*2-1)*strlen(c)+2, cur=1+h;
    char b[height+1][len+1];//id 1
    for (int i=1; i<=height; i++) {
        for (int j=1; j<=len; j++) {
            b[i][j]='.';
        }
    }

    for (int i=0; i<strlen(c); i++) {
        for (int j=1; j<=height; j++) {
            if (j<=h+1) {
                b[j][cur-j+1]=c[i];
                b[j][cur+j-1]=c[i];
            }
            else {
                int d=j%(h+1);
                b[j][cur+h-d]=c[i];
                b[j][cur-h+d]=c[i];
            }
        }
        cur+=h*2-1;
    }

    for (int i=1; i<=height; i++) {
        for (int j=1; j<=len; j++) {
            printf("%c", b[i][j]);
        }
        printf("\n");
    }
}