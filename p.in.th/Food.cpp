#include <bits/stdc++.h>
using namespace std;

int n,m;
bool vst[10]={}, fi[10]={};;
vector<int> ans(10);

void find(int s) {
    if (s == n) {
        for (int i=0; i<s; i++) {
            cout<< ans[i]<< " ";
        }
        cout<< "\n";
        return;
    }

    for (int i=1; i<=n; i++) {
        if (vst[i] || (s==0 && fi[i])) continue;
        ans[s]=i;
        vst[i]=1;
        find(s+1);
        vst[i]=0;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;
    for (int i=0; i<m; i++) {
        int a;
        cin>> a;
        fi[a]=1;
    }
    find(0);
}