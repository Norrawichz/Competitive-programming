#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,a,b,c,d;
        cin>> n>> a>> b>> c>> d;
        if (c==a) {
        	if (d < b) {
        		cout<< n-d;
			}
			else {
				cout<< d;
			}
		}
		else if (b==d) {
			if (a < c) {
        		cout<< c;
			}
			else {
				cout<< n-c;
			}
		}
		else if (c < a) {
			if (d < b) {
				cout<< max(n-c,n-d);
			}
			else {
				cout<< max(n-c,d);
			}
		}
		else if (c > a) {
			if (d < b) {
				cout<< max(c,n-d);
			}
			else {
				cout<< max(c,d);
			}
		}
		cout<< "\n";
 
    }
}