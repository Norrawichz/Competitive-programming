#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;

    bool died[n+1]={};
    int cnt=0,mem=n;
    
    while (mem!=1) {
        for (int i=1; i<n+1; i++) {
            if (died[i]) continue;
            if (cnt==1) {
                died[i]=1;
                mem--;
            }
            if (mem==1) break;
            cnt=(cnt+1)%2;
        }
    }
    for (int i=1; i<=n; i++) {
        if (!died[i]) {
            cout<< i;
            break;
        }
    }
}