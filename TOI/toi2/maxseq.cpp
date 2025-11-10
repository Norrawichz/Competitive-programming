#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    int r;

    int cur=0, mx=0;
    for (int i=0; i<n; i++) {
        if (a[i] > cur+a[i]) {
            cur=a[i];
        }
        else cur+=a[i];
        if (cur > mx) {
            mx = cur;
            r=i;
        }
    }
    if (mx <= 0) cout<< "Empty sequence";
    else {
        vector<int> ans;
        int sm=mx;
        for (int i=r; i>=0 && sm != 0; i--) {
            sm-=a[i];
            ans.push_back(a[i]);
        }
        for (int i=ans.size()-1; i>=0; i--) cout<< ans[i]<< " ";
        cout<< '\n'<<mx;
    }
}