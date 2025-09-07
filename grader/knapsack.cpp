#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, w;
    cin>> n>> w;
    vector<int> weight(n), value(n);
    for (int i = 0; i<n; i++) {
        cin>> weight[i];
    }
    for (int i = 0; i<n; i++) {
        cin>> value[i];
    }
    vector<long long> arr(w + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = w; j >= weight[i]; j--) {
            arr[j] = max(arr[j], arr[j - weight[i]] + value[i]);
        }
    }
    cout<< arr[w];
    return 0;
}