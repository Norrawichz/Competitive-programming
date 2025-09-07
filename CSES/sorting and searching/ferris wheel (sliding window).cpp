#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>> n>> x;
    int arr[n];
    for (int i=0; i<n; i++) cin>> arr[i];
    sort(arr, arr+n);
    
    int l=0, r=n-1, count=0;
    while (l <= r) {
        if (arr[r] + arr[l] <= x) {
            r--;
            l++;
            count++;
        }
        else if (arr[r] <= x) {
            r--;
            count++;
        }
        else {
            r--;
        }
    }
    cout<< count;
    
}