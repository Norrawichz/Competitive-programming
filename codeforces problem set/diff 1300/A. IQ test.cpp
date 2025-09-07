#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, feqo=0, feqe=0;
    cin>> n;
    bool oe[n]={};
    for (int i=0; i<n; i++) {
        int a;
        cin>> a;
        if (a%2 == 0) {
            oe[i]=1;
            feqe++;
        }
        else {
            oe[i]=0;
            feqo++;
        }
    }
    for (int i=0; i<n; i++) {
        if (feqe > feqo) {
            if (!oe[i]) {
                cout<< i+1;
                return 0;
            }
        }
        else {
            if (oe[i]) {
                cout<< i+1;
                return 0;
            }
        }
    }
}