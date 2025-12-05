#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin>> t;
	
	while (t--) {
		int n,x;
		cin>> n;
		
		vector<int> a(n);
		int mn=INT_MAX, mx=INT_MIN;
		for (int i=0; i<n; i++) {
			cin>> a[i];	
			
			mn=min(mn, a[i]);
			mx=max(mx, a[i]);
		}
		
		cin>> x;
		if (mn <= x && mx >=x) cout<< "YES\n";
		else cout<< "NO\n";
	} 
}