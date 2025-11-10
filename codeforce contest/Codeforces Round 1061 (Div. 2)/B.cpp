#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,q;
        cin>> n>> q;

        string s;
        cin>> s;

        int a[q];
        for (int i=0; i<q; i++) cin>> a[i];

        int minus=0, div2=1;
        for (auto x : s) {
            if (x=='A') minus+= div2;
            else div2*=2;
        }
        for (int i=0; i<q; i++) {
            int cur=0, sec=0;
            if (div2 == 1) {
                cout<< a[i]<< '\n';
                continue;
            }
            while (a[i] != 0) {
                if (s[cur] == 'A') a[i]--;
                else a[i]/=2;
                cur++;
                sec++;
                if (cur==n) cur=0;
            }
            cout<< sec<<'\n';
        }
        
    }
}