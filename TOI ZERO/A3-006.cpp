#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    vector<long long> v;
    for (int i = 1; i<=200; i++) {
        for (int j = 1; j<=9; j++) {
            v.push_back(i*2);
        }
        v.push_back(i);
    }
    long long a[n], count = 0, idx = 0;
    for (int i = 0; i<n; i++) {
        cin>> a[i];
    }

    sort(a,a+n,greater<long long>());
    sort(v.begin(), v.end());
    for (int i = 0; i<n; i++) {
        count += a[i] * v[idx++];
    }
    cout<< count;
}