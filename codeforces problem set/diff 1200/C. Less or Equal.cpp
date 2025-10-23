#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin>> n>> k;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    map<int, int> m;
    for (int i=0; i<n; i++) m[a[i]]++;
    
    if (k==0 && m[1] == 0) {
        cout<< 1;
        return 0;
    }
    int cur=0;
    for (auto x : m) {
        cur+=x.second;
        if (cur == k) {
            cout<< x.first;
            return 0;
        }
        if (cur > k) {
            cout<< -1;
            return 0;
        }
    }
}