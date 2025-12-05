#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
void update(int k, int val, vector<int> &tree) {
    while (k <= n) {
        tree[k] += val;
        k+=k&-k;
    }
}

int sm(int k, vector<int> &tree) {
    int s=0;
    while (k != 0) {
        s+=tree[k];
        k-=k&-k;
    }
    return s;
}

int32_t main() {
    int q;
    cin>> n>> q;

    vector<int> a(n+1);
    for (int i=1; i<=n; i++) cin>> a[i];

    vector<int> tree(n+1,0);
    for (int i=1; i<=n; i++) {
        update(i,a[i], tree);
    }

    //for (int i=0; i<=n; i++) cout<< tree[i]<< ' ';
    //cout<< "\n"<<sm(7, tree);

    for (int i=0; i<q; i++) {
        int aa,b,c;
        cin>> aa>> b>> c;

        if (aa == 1) {
            update(b, c- a[b], tree);
            a[b] = c;
        }
        else {
            int pf1 = sm(b-1, tree), pf2 = sm(c, tree);
            cout<< pf2 - pf1<< '\n';    
        }
    }
}


