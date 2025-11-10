#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,s;
    cin>> n>> m>> s;

    vector<int> a(n+1);
    for (int i=1; i<=n; i++) cin>> a[i];


    vector<int> vst1(n+1,-1);
    vector<int> vst2(n+1, -1);
    vector<int> vstcnt(n+1, 0);
    int cnt=0, mod=0;
    while (vstcnt[s] < 2) {
        if (vstcnt[s] == 1) {
            mod++;
            vst2[s] = cnt;
        }
        else {
            vst1[s] = cnt;
        }
        cnt++;
        vstcnt[s]++;
        s += a[s];
    }

    for (int i=1; i<=n; i++) {
        if (m > mod) {
            if (vst2[i] != -1 && vst2[i] % mod == m % mod) {
                cout<< i;
                return 0;
            }
        }
        else {
            if (vst1[i] != -1 && vst1[i] % mod == m% mod) {
                cout<< i;
                return 0;
            }
        }
    }
}