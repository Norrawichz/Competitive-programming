#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        vector<int> pos;
        for (int i=0; i<n; i++) if (a[i] == 2) pos.push_back(i+1);
    
        if (pos.size() == 0) cout<< 1<< "\n";
        else if (pos.size() % 2 != 0) cout<< -1<< "\n";
        else cout<< pos[pos.size()/2-1]<< "\n";
    }
}