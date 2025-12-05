#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int n,m,s;
	cin>> n>> m>> s;
	
	vector<vector<pair<int,int>>> g(n+1);
	for (int i=0; i<m; i++) {
		int u,v,w;
		cin>> u>> v>> w;
		
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	int l;
	cin>> l;
	
	vector<int> dist(n+1, INT_MAX);
	vector<int> par(n+1);
	iota(par.begin(), par.end(), 0);
	
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	pq.push({0,s});
	dist[s] = 0;
	
	while (!pq.empty()) {
		int d=pq.top().first, cur=pq.top().second;
		pq.pop();
		
		if (d > dist[cur]) continue;
		
		for (auto &x : g[cur]) {
			int v=x.first, w=x.second;
			if (w + dist[cur] < dist[v]) {
				dist[v] = w + dist[cur];
				par[v] = cur;
				pq.push({dist[v], v});
			}
		}
	}
	int ans = 0;
	
	vector<bool> valid(n+1, false);
	for (int i=1; i<=n; i++) {
		if (dist[i] < l) valid[i] = true;
		else if (dist[i] == l) ans++;
	}
    for (int i=1; i<=n; i++) cout<< dist[i]<< ' ';
	cout<<'\n';
    vector<bool> vst(n+1, false);
	set<int> candidate;
	queue<int> q;
	q.push(s);
    vst[s] = true;

	while (!q.empty()) {
		int cur=q.front();
		q.pop();
		if (dist[cur] >= l) continue;
		
		bool leaf=false;
		for (auto &x : g[cur]) {
			if (x.first == par[cur]) continue;
			
			if (dist[cur] + x.second < l && !vst[x.first]) {
                q.push(x.first);
                vst[x.first] = true;
            }
			else leaf = true;
		}
		if (leaf) {
			candidate.insert(cur);
		}
	}
    
	//cout<< '\n';
	for (auto &x : candidate) {
		//cout<< "candidate "<< x<< ' ';
		for (auto &y : g[x]) {
			int v=y.first, w=y.second;
			if (v == par[x] || dist[x] + w <= l) continue;
			
			if (!valid[v]) {
				//cout<< v<< ' ';
				ans++;
			}
			else {
				if (l-dist[v] + l-dist[x] != w) {
					ans+=2;
					cout<< "debug "<< x<< ' '<< v<< '\n';
				}
				else {
					ans++;
				}
				if (candidate.count(v)) {
                    candidate.erase(v);
                    /*auto it = find(g[v].begin(), g[v].end(), make_pair(x, w));
                    if (it != g[v].end()) {
                        g[v].erase(it);
                    }*/
                }
			}
		}
	}
	cout<< ans;
	
}
