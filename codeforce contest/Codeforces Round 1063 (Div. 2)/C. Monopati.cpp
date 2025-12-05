#include <bits/stdc++.h>
using namespace std;

pair<int,int> recur(int i, int j, vector<vector<int>> &a) {
    if (i==0 && j==0) return {a[i][j], a[i][j]};
    
    return {}
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        vector<vector<int>> a(2, vector<int>(n));
        for (int i=0; i<2; i++) for (int j=0; j<n; j++) cin>> a[i][j];
        

    }
}