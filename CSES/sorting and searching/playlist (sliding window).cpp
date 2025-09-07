#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;

    int arr[n];
    for (int i=0; i<n; i++) cin>> arr[i];

    set<int> vst;
    int l=0, ans=0;
    for (int r=0; r<n; r++) {
        while (vst.count(arr[r])) {
            vst.erase(arr[l]);
            l++;
        }
        vst.insert(arr[r]);
        ans = max(ans, r-l+1);
    }
    cout<< ans;
    
}