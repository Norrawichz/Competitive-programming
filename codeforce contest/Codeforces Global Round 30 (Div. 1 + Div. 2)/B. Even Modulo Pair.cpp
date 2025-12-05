#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	
	int t;
	cin>> t;
	while (t--) {
		int n;
		cin>> n;
		
		vector<int> a(n);
		for (int i=0; i<n; i++) cin>> a[i];
		
		bool valid=false;
		int x, y;
		for (int i=0; i<n && !valid; i++) {
			for (int j=i+1; j<n; j++) {
				if ((a[j]%a[i])%2 == 0) {
					valid=true;
					x=a[i];
					y=a[j];
					break;
				}
			}
		}
		
		if (valid) cout<< x<< ' '<< y<< '\n';
		else cout<< -1<< '\n';
	}
}   