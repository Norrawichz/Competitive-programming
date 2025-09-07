#include <bits/stdc++.h>
using namespace std;

int main() {   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    int arr[n], pos[n];
    for (int i=0; i<n; i++) {
        cin>> arr[i];
        pos[arr[i]] = i;
    }

    int r = 1;
    for (int i=2; i<=n; i++) {
        if (pos[i] < pos[i-1]) {
            r++;
        }
    }
    cout<< r;
}