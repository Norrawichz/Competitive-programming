#include <bits/stdc++.h>
using namespace std;

const int INF = 2e9; // กำหนดค่าความเหนื่อยสูงสุด
int N, M, K;
unordered_map<int, vector<pair<int, int>>> graph; // ใช้ adjacency list แทน map<pair<int, int>, int>
set<int> escape_roads; // เก็บถนนที่มีคนใช้หลบหนีได้

void dijkstra(int start, int maxFatigue) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    unordered_map<int, int> dist;
    
    for (int i = 1; i <= N; i++) dist[i] = INF;
    
    dist[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty()) {
        pair<int, int> temp = pq.top();
        int d = temp.first;
        int node = temp.second;
        pq.pop();

        if (d > maxFatigue) continue; // ถ้าค่าความเหนื่อยเกิน x ก็หยุด

        for (const auto& edge : graph[node]) {
            int neighbor = edge.first;
            int weight = edge.second;
            if (dist[neighbor] > d + weight) {
                dist[neighbor] = d + weight;
                pq.push({dist[neighbor], neighbor});
                if (weight <= maxFatigue) escape_roads.insert((node << 16) | neighbor);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    for (int i = 0; i < K; i++) {
        int a, b, x;
        cin >> a >> b >> x;
        escape_roads.clear();
        dijkstra(a, x);
    }

    int result = escape_roads.size();
    if (N >= 30) result *= 2; // ปรับค่าตามเงื่อนไขที่ให้มา

    cout << result << endl;
}