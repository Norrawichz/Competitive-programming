#include <bits/stdc++.h>
using namespace std;

long long ans = 0;

void dfs(vector<int> &arr, set<int> &visited, int s) {
    if (visited.find(s) == visited.end()) {
        ans++;
        visited.insert(s);
        dfs(arr, visited, arr[s]);
    }
    else {
        return;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin>> n>> k;
    vector<int> arr(n);
    for (int i = 0; i<n; i++) {
        cin>> arr[i];
    }
    set<int> visited;
    visited.insert(1);
    dfs(arr,visited, 0);
    cout<< arr[k%ans+1];
}