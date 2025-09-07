#include <bits/stdc++.h>
using namespace std;

struct COW {
    int start,end;
    int buc;
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n;
    cin>> n;
    vector<COW> cows(n);
    for (int i=0; i<n; i++) cin>> cows[i].start>> cows[i].end>> cows[i].buc;
    int mx=0;
    for (int i=1; i<=1000; i++) {
        int cur=0;
        for (auto x : cows) {
            if (x.start <= i && x.end >= i) cur+=x.buc;
        }
        mx=max(mx,cur);
    }
    cout<< mx;
}