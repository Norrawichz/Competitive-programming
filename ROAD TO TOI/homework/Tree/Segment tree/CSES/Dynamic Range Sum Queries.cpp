#include <bits/stdc++.h>
using namespace std;
#define int long long

int si=1;

void update(int i, int key, vector<int> &seg) {
    i+=si;
    while (i>0) {
        seg[i] += key;
        i/=2;
    }
}

int findsm(int a, int b, vector<int> &seg) {
    a+=si;
    b+=si;
    int sm=0;
    while (a <= b) {
        if (a%2) {
            sm+=seg[a];
            a++;
        }
        a/=2;
        if (b%2 == 0) {
            sm+=seg[b];
            b--;
        } 
        b/=2;
    }
    return sm;
}
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,q;
    cin>> n>> q;

    while (si < n) si*=2;

    vector<int> seg(si*2, 0);

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
            cout<< findsm(a, b, seg)<< '\n';
        }
        else {
            a--;
            update(a, b-seg[si+a], seg);
        }
    }

}