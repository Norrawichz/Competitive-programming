#include <bits/stdc++.h>    
using namespace std;

void dfs(vector<vector<int>> &graph, vector<int> &val, int parent, int s) {
    for (auto x : graph[s]) {
        if (x != parent) {
            val[x] += val[s];
            dfs(graph, val, s, x);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin>> n>> q;
    vector<int> val(n+1, 0);
    vector<vector<int>> graph(n+1);
    for (int i = 1; i<n; i++) {
        int n1, n2;
        cin>> n1>> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    for (int i = 1; i<=q; i++) {
        int n1, n2;
        cin>> n1>> n2;
        val[n1] += n2;
    }
    dfs(graph, val, -1, 1);
    for (int i = 1; i<=n; i++) {
        cout<< val[i]<< " ";
    }
}