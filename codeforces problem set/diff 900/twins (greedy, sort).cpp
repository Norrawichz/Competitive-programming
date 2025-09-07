#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>> n;

    int sum = 0, cur = 0;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);
    for (int i=1; i<=n; i++) {
        sum -= arr[n-i];
        cur += arr[n-i];
        if (cur > sum) {
            cout<< i;
            return 0;
        }
    }
}