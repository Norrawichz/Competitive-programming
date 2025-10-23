#include <bits/stdc++.h>
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	int n;
	cin>> n;
	
	vector<pair<int,int>> m;
	for (int i=0; i<n; i++) {
		long long a,b;
		cin>> a>> b;
		m.push_back({a,1});
		m.push_back({b,-1});
	}
	sort(m.begin(), m.end());
	int mx=0, cur=0;
	for (int i=0; i<m.size(); i++) {
		cur+=m[i].second;
		mx=max(mx,cur);
	}
	cout<< mx;
}
