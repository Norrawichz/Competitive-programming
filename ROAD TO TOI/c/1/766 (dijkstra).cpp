#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,k,q;
    cin>> n>> m>> k>> q;

    vector<vector<pair<int,int>>> g(n);
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    for (int i=0; i<k; i++) {
        int a;
        cin>> a;
    }
    vector<vector<int>> dist(n, vector<int> (n, INT_MAX));
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
 
    for (int i=0; i<q; i++) {
        int s,x,t;
        cin>> s>> x>> t;
        if (dist[x][s] == INT_MAX || dist[x][t] == INT_MAX) {

            dist[x][x] = 0;
            pq.push({0, x});
            while (!pq.empty()) {
                int d=pq.top().first, cur=pq.top().second;
                pq.pop();

                if (d > dist[x][cur]) continue;

                for (auto &e : g[cur]) {
                    int v=e.first, w=e.second;
                    if (dist[x][cur] + w < dist[x][v]) {
                        dist[x][v] = dist[x][cur] + w;
                        pq.push({dist[x][v], v});
                    }
                }
            }
        }
        
        /*cout<< "DEBUG\ndist\n";
        for (int j=0; j<n; j++) cout<< dist[x][j]<< ' ';
        cout<< '\n';*/
        cout<< dist[x][s] + dist[x][t]<< '\n';
    }
    
}