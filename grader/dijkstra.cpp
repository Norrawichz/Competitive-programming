#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, s, t;
    cin>> n>> m>> s>> t;
    vector<vector<pair<int,int>>> graph(n+1);
    for (int i = 0; i<m; i++) {
        int u, v, w;
        cin>> u>> v>> w;
        graph[u].push_back({v, w});
    }

    vector<int> dist(n+1, INT_MAX); 
    priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dist[s] = 0;
    pq.push({0, 1});

    while(!pq.empty()) {
        pair<int,int> cur = pq.top();
        int d = cur.first, node = cur.second;
        pq.pop();
        if (d > dist[node]) continue;
    }
    return 0;
}