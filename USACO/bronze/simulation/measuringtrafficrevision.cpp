#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);
    int n;
    cin>> n;
    vector<string> type(n);
    vector<int> low(n), high(n);
    for (int i=0; i<n; i++) cin>> type[i]>> low[i]>> high[i];
    int l=0, h=2000;
    for (int i=n-1; i>=0; i--) {
        if (type[i] == "none") {

        }
        else if (type[i] == "on") {
            l=max(0,l-high[i]);
        }
        else if (type[i] == "off") {
            l+=low[i];
            h+=high[i];
        }
    }
}