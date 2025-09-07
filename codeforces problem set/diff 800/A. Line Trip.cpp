#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,x;
        cin>> n>> x;
        vector<int> g;
        g.push_back(0);
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            g.push_back(a);
        }
        g.push_back(x);
        int mx=0;
        for (int i=1; i<g.size(); i++) {
            mx = max(mx, (i==g.size()-1? 2*(g[i] - g[i-1]): g[i] - g[i-1]));
        }
        cout<< mx<<endl;
    }
}