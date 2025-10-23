#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;

int gcd(int a, int b) {
    while (b != 0) {
        int tem = b;
        b = a%b;
        a = tem;
    }
    return a;
}

void fi() {
    int x=a-c;
    int sm=b-d;
    sm*=-1;
    bool neg=x<0, neg2=sm<0;
    if (neg && neg2) {
        x*=-1;
        sm*=-1;
    }
    else if (neg) x*=-1;
    else if (neg2) sm*=-1;

    int g=gcd(x, sm);
    
    if (x % g ==0) x/=g;
    if (sm % g ==0) sm/=g;

    if (!(neg && neg2) && (neg || neg2)) sm*=-1;
    if (x == 1) cout<< sm<<" ";
    else cout<< sm<< "/"<< x<< " "; 
}

void se() {
    int aa=a*c, bb=b*c, y1=c;
    int cc=c*(-a), dd=d*(-a), y2=-a;

    int resy=y1+y2, resx=bb+dd;
    bool neg=resy<0, neg2=resx<0;
    if (neg && neg2) {
        resy*=-1;
        resx*=-1;
    }
    else if (neg) resy*=-1;
    else if (neg2) resx*=-1;

    int g=gcd(resy, resx);
    
    if (resx % g ==0) resx/=g;
    if (resy % g ==0) resy/=g;

    if (!(neg && neg2) && (neg || neg2)) resx*=-1;
    if (resy == 1) cout<< resx<<" ";
    else cout<< resx<< "/"<< resy<< " "; 
}

int main() {
    
    cin>> a>> b>> c>> d;
    fi();
    se();
}