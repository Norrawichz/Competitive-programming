#include <bits/stdc++.h>
using namespace std;
 
vector<int> ans;
vector<bool> vst;
int n,k;
bool found;
 
void dfs () {
	if (found) return;
	if (ans.size() == n) {
		int d=0;
		for (int i=2; i<=n; i++) {
			for (int j=0; i+j<=n; j++) {
				for (int k=j+1; k<i+j; k++) {
					if (ans[k] < ans[k-1]) {
						d++;
						break;
					}
				}
			}
		}
		if (d==k) {
			found=1;
		}
		return;
	}
	for (int i=1; i<=n; i++) {
		if (vst[i]) continue;
		ans.push_back(i);
		vst[i]=1;
		dfs();
		if (found) return;
		vst[i]=0;
		ans.pop_back();
	}
}
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin>> t;
	while (t--) {
		cin>> n>> k;
		ans.clear();
		vst.assign(n+1,0);
		found=0;
		dfs();
		if (found) {
			for (auto x : ans) cout<< x<< ' ';
		}
		else cout<< 0;
		cout<< "\n";
	}
}