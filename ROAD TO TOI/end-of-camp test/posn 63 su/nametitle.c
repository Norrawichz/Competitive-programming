#include <stdio.h>

int main() {
    char f[50], l[50];
    scanf("%s %s", &f, &l);

    int g, age, state;
    scanf("%d %d %d", &g, &age, &state);
    if (g==1) {
        if (age < 14) printf("Master %s %s", f, l);
        else printf("Mr. %s %s", f, l);
    }
    else {
        if (age < 14) printf("Miss %s %s", f, l);
        else {
            if (state==1) printf("Mrs. %s %s", f, l);
            else printf("Miss %s %s", f, l);
        }
    }
}