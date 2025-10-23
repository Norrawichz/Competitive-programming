#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b==0) return 0;
    return (a / gcd(a, b)) * b;
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);

    int t;
    scanf("%d", &t);
    while (t--) {
        char c;
        int p,q;
        scanf(" %c %d %d",&c,&p,&q);
        if (c == '-') {
            int l=lcm(b,q);
            a*= l/b;
            p*= l/q;
            a-=p;
            b=l;
            int g=gcd(a,b);
            if (g <0) g*=-1;
            a/=g;
            b/=g;
            if (b < 0) {
                a=-a;
                b=-b;
            }
            if (a == 0) printf("0 1\n");
            else printf("%d %d\n", a, b);
        }
        else if (c=='+') {
            int l=lcm(b,q);
            a*= l/b;
            p*= l/q;
            a+=p;
            b=l;
            int g=gcd(a,b);
            if (g <0) g*=-1;
            a/=g;
            b/=g;
            if (b < 0) {
                a=-a;
                b=-b;
            }
            if (a == 0) printf("0 1\n");
            else printf("%d %d\n", a, b);
        }
        else if (c=='*') {
            a*=p;
            b*=q;
            int g=gcd(a,b);
            if (g <0) g*=-1;
            a/=g;
            b/=g;
            if (b < 0) {
                a=-a;
                b=-b;
            }
            if (a == 0) printf("0 1\n");
            else printf("%d %d\n", a, b);
        }
        else if (c=='/') {
            a*=q;
            b*=p;
            int g=gcd(a,b);
            if (g <0) g*=-1;
            a/=g;
            b/=g;
            if (b < 0) {
                a=-a;
                b=-b;
            }
            if (a == 0) printf("0 1\n");
            else printf("%d %d\n", a, b);
        }
    }
}