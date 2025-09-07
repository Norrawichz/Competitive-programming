#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>> n>> x;

    vector<pair<ll, ll>> arr(n);
    for (int i=0; i<n; i++) {
        ll a;
        cin>> a;
        arr[i].first = a;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());

    int l=0, r=n-1;
    while (l < r) {
        ll sum = arr[l].first + arr[r].first;
        if (sum == x) {
            cout<< arr[l].second+1<< " "<< arr[r].second+1;
            return 0;
        }
        else if (sum > x) r--;
        else l++;
    }

    cout<< "IMPOSSIBLE";
    
}