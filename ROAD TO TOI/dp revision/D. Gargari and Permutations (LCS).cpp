#include <bits/stdc++.h>
using namespace std;

int n,k;
int pos[5][1001];

bool before(int x, int y) {
    for (int p=0; p<k; p++) {
        if (pos[p][x] >= pos[p][y]) return 0;
    }
    return 1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0); 
    cin>> n>>k;

    for (int i=0; i<k; i++) {
        for (int j=0; j<n; j++) {
            int val;
            cin>> val;
            pos[i][val]=j;
        }
    }

    int base[n+1];
    for (int i=1; i<=n; i++) base[pos[0][i]]=i;
    
    int dp[n+1];
    
    



}