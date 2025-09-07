#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;

    int arr[n];
    for (int i=0; i<n; i++) cin>> arr[i];
    sort(arr, arr+n);

    ll mnsum = 1;
    for (int i=0; i<n; i++) {
        if (arr[i] <= mnsum) {
            mnsum += arr[i];
        }
    }
    cout<< mnsum;
}