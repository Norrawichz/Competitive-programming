#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    int arr[n];
    for (int i = 0; i<n; i++) {
        cin>> arr[i];
    }
    set<int> a;
    a.insert(0);
    for (int i = 0; i<n; i++) {
        int total = 0;
        for (int j = 0; j<n; j++) {
            if (i != j) {
                total += a[j];
            }
        }
        a.append(total);
    }
    return 0;
}