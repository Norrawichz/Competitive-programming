#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        int n,m;
        cin>> n>> m;

        vector<int> a(n), b(m), c(m);
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<m; i++) cin>> b[i];
        for (int i=0; i<m; i++) cin>> c[i];
        
        priority_queue<int, vector<int>, greater<int>> pq;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pqn;
        priority_queue<int, vector<int>, greater<int>> pqz;
        for (int i=0; i<n; i++) pq.push(a[i]);
        for (int i=0; i<m; i++) {
            if (c[i] != 0) pqn.push({b[i], c[i]});
            else pqz.push(b[i]);
        }

        int ans=0;
        while (!pq.empty()) {
            int cur=pq.top();
            pq.pop();

            if (!pqn.empty() && cur >= pqn.top().first) {
                ans++;
                pq.push(max(cur, pqn.top().second));
                pqn.pop();
                continue;
            }
            if (!pqz.empty() && cur >= pqz.top()) {
                ans++;
                pqz.pop();
            } 
        }
        cout<< ans<< '\n';
    }
}