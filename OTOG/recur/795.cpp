#include <bits/stdc++.h>
using namespace std;

int h,m,x, ud=0;

void recur() {
    if (!ud) {
        cout<< x<<" ";
        x-=m;
        if (x < m) {
            cout<< x<< " PULL ";
            ud=1;
        }
        recur();
    }
    else if (ud) {
        if (x > h) {
            return;
        }
        cout<< x<< " ";
        x+=m;
        recur();
    }
}


int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> h>> m;
    x=h;
    recur();
    
}