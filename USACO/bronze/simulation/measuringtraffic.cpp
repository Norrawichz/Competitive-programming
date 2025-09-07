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
    int l1=0,u1=2000;
    for (int i=n-1; i>=0; i--) {
        if (type[i] == "none") {
            l1 = max(l1, low[i]);
            u1 = min(u1, high[i]);
        }
        else if (type[i] == "on") {
            l1 = max(0, l1-high[i]);
            u1 = max(0, u1-low[i]);
        }
        else if (type[i] == "off") {
            l1 += low[i];
            u1 += high[i];
        }
    }
    cout<< l1<< " "<< u1<< endl;
    for (int i=0; i<n; i++) {
        if (type[i] == "none") {
            l1 = max(l1, low[i]);
            u1 = min(u1, high[i]);
        }
        else if (type[i] == "on") {
            l1 += low[i];
            u1 += high[i];
        }
        else if (type[i] == "off") {
            l1 = max(0, l1-high[i]);
            u1 = max(0, u1-low[i]);
        }
    }
    cout<< l1<< " "<< u1;
}