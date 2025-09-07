#include <bits/stdc++.h>
using namespace std;
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin>> t;
	vector<string> ans(t);
	for (int j=0; j<t; j++) {
	    for (int i=0; i<8; i++) {
	        string s;
	        cin>> s;
	        for (auto x : s) {
	            if (x != '.') ans[j]+=x;
	        }
	    }
	}
	for (auto x : ans) {
	    cout<< x<<endl;
	}
}