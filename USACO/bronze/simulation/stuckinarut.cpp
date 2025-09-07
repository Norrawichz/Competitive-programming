#include <bits/stdc++.h>
using namespace std;

struct COW {

}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    vector<pair<int,int>> E, N;
    vector<int> te;
    vector<int> tn;
    for (int i=0; i<n; i++) {
        char c;
        int x,y;
        cin>> c>>x>>y;
        if (c=='N') {
            N.push_back({x,y});
            tn.push_back(INT_MAX);
        }
        else {
            E.push_back({x,y});
            te.push_back(INT_MAX);
        }
    }

}