#include <bits/stdc++.h>
using namespace std;
 
int di[] = {0, 0, -1, 1}, dj[] = {-1, 1, 0, 0}; // L R U D
int n,m;
 
 
bool is_valid(int i, int j) {
	return (i>=0 && j>=0 && i<n && j<m);// 1 -> valid
}
 
int bfs(int i, int j, int ti, int tj, vector<vector<char>> &g) {
	queue<pair<int,int>> q;
	q.push({i,j});
	
	while (!q.empty()) {
		int ci=q.front().first, cj=q.front().second;
		q.pop();
		
		if (g[ci][cj] == 'Y') {
			for (int e=0; e<4; e++) {
				int ni=ci+di[e], nj=cj+dj[e];
				if (!is_valid) continue;
				
				
			}
		}
		else if (g[ci][cj] == 'X') {
			
		}
	}
}
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
 
	cin>> n>> m;
	
	vector<vector<char>> g(n, vector<char>(m));
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>> g[i][j];
	
	// X Y
	
	int totaldist=0;
	int period;
	cin>> period;
	
	vector<pair<int,int>> togo(period);
	for (int i=0; i<period; i++) {
		int ci,cj;
		cin>> ci>> cj;
		togo[i] = {ci, cj};
	}
	
	for (int i=0; i<period-1; i++) {
		int ci,cj, ti, tj;
		ci = togo[i].first;
		cj = togo[i].second;
		ti = togo[i+1].first;
		tj = togo[i+1].second;
		totaldist += bfs(ci, cj, ti, tj, g);
		
	}
	
}
