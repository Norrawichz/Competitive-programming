#include <bits/stdc++.h>
using namespace std;
#define ul unsigned long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int q;
    cin>> q;
    ul pre[19];
    pre[0] = 1; 
    for (int i=1; i<19; i++) pre[i] = pre[i-1]*10;
    ul cnt[19];
    cnt[0]=0;
    for (int i=1; i<19; i++) cnt[i] = pre[i-1]*9    ;
    while (q--) {
        ul k, d;
        cin>> k;
    
        
        for (int i=1; i<19; i++) {
            if (k <= i*cnt[i]) {
                d=i;
                break;
            }
            k -= i*cnt[i];
        }
        string s = to_string(pre[d-1]+(k-1)/d);
        cout<< s[(k-1)%d]<< "\n";
    }
}