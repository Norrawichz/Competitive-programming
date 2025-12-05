#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k,q;
        cin>> n>> k>> q;


        vector<int> mn(n+1, 0), mex(n+1, 0);
        while (q--) {
            int c,l,r;
            cin>> c>> l>> r;

            for (int i=l; i<=r; i++) {
                if (c==2) mex[i]=1;
                else mn[i]=1; 
            }
        }

        for (int i=1; i<=n; i++) {
            if (mex[i] && mn[i]) cout<< k+1<<' ';
            else if (mn[i]) cout<< k<< ' ';
            else cout<< i%k<< ' ';
        }
        cout<< '\n';
    }
}