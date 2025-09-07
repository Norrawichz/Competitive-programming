#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin>> n>> q;
    int arr[n], money[q];
    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i<q; i++) {
        cin>>money[i];
    }
    for (auto x : money) {
        int k = x;
        for (int i = 0 ; i<n; i++) {
            if (k - arr[i] <= 0) {
                cout<< i<< endl;
                break;
            }
            k -= arr[i];
        }
    }
    return 0;
}