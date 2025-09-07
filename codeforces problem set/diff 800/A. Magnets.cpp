#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int cur=1, ans=0;
    for (int i=0; i<n; i++) {
        int s;
        cin>> s;
        int q=s/10,p=s%10;
        if (i==0) {
            ans++;
            cur=p;
            continue;
        }
        if (cur==q) ans++;
        cur=p;
    }
    cout<< ans;

}