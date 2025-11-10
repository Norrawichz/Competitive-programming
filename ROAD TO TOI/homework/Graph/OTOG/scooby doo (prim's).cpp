#include <bits/stdc++.h>
using namespace std;

int findmnk(vector<int> &key, vector<bool> &mstset) {
    int mn=INT_MAX, id;
    for (int i=0; i<key.size(); i++) {
        if (key[i] < mn  && !mstset[i]) {
            mn=key[i];
            id=i;
        }
    }
    return id;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,k;
    cin>> n>> m>> k;

    vector<vector<int>> g(n, vector<int> (n, INT_MAX));
    for (int i=0; i<m; i++) {
        int u,v,w;
        cin>> u>> v>> w;
        g[u][v] = w;
        g[v][u] = w;
    }

    vector<int> key(n, INT_MAX);
    vector<bool> mstset(n, false);
    priority_queue<int, vector<int>, less<int>> pq;

    key[0] = 0;
    for (int i=0; i<n; i++) {
        int mnk=findmnk(key, mstset);
        mstset[mnk] = true;
        
        pq.push(key[mnk]);
        for (int j=0; j<n; j++) {
            if (key[j] > g[mnk][j] && !mstset[j]) {
                key[j] = g[mnk][j];
            }
        }
    }
    while (k--) {
        pq.push(pq.top()/2);
        pq.pop();
    }

    int ans=0;
    while (!pq.empty()) {
        ans+=pq.top();
        pq.pop();
    }
    cout<< ans;
}