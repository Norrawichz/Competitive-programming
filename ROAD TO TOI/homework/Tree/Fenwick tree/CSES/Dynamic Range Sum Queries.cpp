#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,q;

int sm(int k, vector<int> &tree) {
    int sm=0;
    while (k != 0) {
        sm += tree[k];
        k -= k&-k;
    }
    return sm;
}

void upd(int k, int val, vector<int> &tree) {
    while (k<=n) {
        tree[k] += val;
        k+= k&-k;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    cin>> n>> q;

    vector<int> aa(n+1);
    for (int i=1; i<=n; i++) cin>> aa[i];

    vector<int> tree(n+1,0);

    for (int i=1; i<=n; i++) {
        upd(i, aa[i], tree);
    }


    for (int i=0; i<q; i++) {
        int a,b,c;
        cin>> a>> b>> c;

        if (a==1) {
            upd(b, c-aa[b], tree);
            aa[b] = c;
        }
        else {
            int fi = sm(b-1, tree), se = sm(c, tree);
            cout<< se-fi<< '\n';
        }
    }
}