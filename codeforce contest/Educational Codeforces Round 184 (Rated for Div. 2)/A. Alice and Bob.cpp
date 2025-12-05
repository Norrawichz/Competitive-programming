#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,a;
        cin>> n>> a;

        int s[n];
        for (int i=0; i<n; i++) cin>> s[i];

        int cnt=0, cnt1=0;
        for (int i=0; i<n; i++) {
            if (s[i] < a) cnt++;
            else if (s[i] == a) cnt1++;
            else break;
        }
        if (cnt > n-cnt-cnt1) cout<< a-1<<'\n';
        else cout<< a+1<< '\n';
    }
}