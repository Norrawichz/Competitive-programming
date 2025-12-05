#include <bits/stdc++.h>
using namespace std;
#define int long long

int si=1;

void update(int i, int key, vector<int> &seg) {
    i+=si;
    seg[i] = key;
    while (i/2>0) {
        int v=i/2 * 2;
        seg[i/2] = min(seg[v], seg[v+1]);
        i/=2;
    }
}

int findmn(int a, int b, vector<int> &seg) {
    a+=si;
    b+=si;
    int mn=LONG_LONG_MAX;
    while (a <= b) {
        if (a%2) {
            mn = min(mn,seg[a]);
            a++;
        }
        a/=2;
        if (b%2 == 0) {
            mn = min(mn,seg[b]);
            b--;
        } 
        b/=2;
    }
    return mn;
}
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,q;
    cin>> n>> q;

    while (si < n) si*=2;

    vector<int> seg(si*2, LONG_LONG_MAX);

    for (int i=0; i<n; i++) {
        int a;
        cin>> a;
        update(i,a,seg);
    }

    for (int i=0; i<q; i++) {
        int k, a, b;
        cin>> k>> a>> b;
        
        if (k==2) {
            a--;
            b--;
            cout<< findmn(a, b, seg)<< '\n';
        }
        else {
            a--;
            update(a, b, seg);
        }
    }

}