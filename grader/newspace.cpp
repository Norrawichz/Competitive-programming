#include <bits/stdc++.h>
using namespace std;

vector<int> fa() {
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    vector<vector<int>> graph(n);
    for (int i = 0; i<n; i++) {
        int u, v;
        cin>> u>> v;
        graph[u].push_back(v);
    }
    int s, e;
    cin>> s>> e;

    vector<int> ans;
    ans.push_back(0);
    for (auto x : graph[s]) {

    }
    return 0;
}