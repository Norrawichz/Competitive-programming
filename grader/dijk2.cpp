#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    vector<vector<pair<int,int>>> graph(n+1);
    for (int i = 0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        graph[u].push_back({v, w});
    }

    vector<vector<int>> dist(n+1, vector<int>(2, INT_MAX));
    priority_queue<pair<int,pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> pq;
    dist[1][0] = 0;
    pq.push({0, {1, 0}});

    while(!pq.empty()) {
        pair<int ,pair<int,int>> cur = pq.top();
        int d = cur.first, node = cur.second.first, tk = cur.second.second;
        pq.pop();
        if (d > dist[node][tk]) continue;
        for (auto x : graph[node]) {
            int v = x.first, w = x.second;
            if (dist[node][tk] + w < dist[v][tk]) {
                dist[v][tk] = dist[node][tk] + w;
                pq.push({dist[v][tk], {v, tk}});
            }
            if (tk == 0 && dist[node][tk] < dist[v][1]) {
                dist[v][1] = dist[node][tk];
                pq.push({dist[v][1], {v, 1}});
            }
        }
    }
    if (dist[n][0] != INT_MAX || dist[n][1] != INT_MAX) {
        cout<< min(dist[n][0], dist[n][1]);
    }
    else if (min(dist[n][0], dist[n][1]) == INT_MAX) {
        cout<< -1;
    }
}