#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
void find(int x,int y, vector<int> &par) {
	if (x == y) {
		ans.push_back(x);
		return;
	}
	find(par[x],y, par);
	ans.push_back(x);
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int n,m,x,y;
	cin>> n>> m>> x>> y;
	
	vector<vector<pair<int,int>>> g(n);
	for (int i=0; i<m; i++) {
		int u,v,w;
		cin>> u>> v>> w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	
	vector<int> dist(n, INT_MAX);
	vector<int> par(n);
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	pq.push({0, x});
	dist[x] = 0;
	
	while (!pq.empty()) {
		int d=pq.top().first, cur=pq.top().second;
		pq.pop();
		
		if (d > dist[cur]) continue;
		
		for (auto x : g[cur]) {
			int v=x.first, w=x.second;
			if (dist[cur] + w < dist[v]) {
				dist[v] = dist[cur] + w;
				par[v] = cur;
				pq.push({dist[v], v});
			}
		}
	}
	
	cout<< dist[y]<< '\n';
	find(y, x,par);
	cout<< ans.size()<< '\n';
	for (auto x : ans) cout<< x<< ' ';
}