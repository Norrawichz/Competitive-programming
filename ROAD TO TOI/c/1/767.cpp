#include <bits/stdc++.h>
using namespace std;
#define int long long

int m,p,q,r;

int recur(int a, int b, int c, vector<vector<int>> &g, vector<vector<vector<int>>> &mem) {
    int s1=g[1].size(), s2=g[2].size(), s3=g[3].size();
    if (a >= s1 && b>=s2 && c>=s3) return mem[a][b][c] = 0;

    if (mem[a][b][c]!=-1) return mem[a][b][c];
    int mx=LLONG_MIN;
    if (a < s1 && b < s2 && c < s3 && g[1][a] == g[2][b] && g[2][b] == g[3][c]) {
        mx = max(mx, recur(a+1, b+1, c+1, g, mem) + r-m);
    }
    else if (a < s1 && b < s2 && g[1][a] == g[2][b]) {
        mx = max(mx, recur(a+1, b+1, c, g, mem) + q-m);
    }
    else if (a < s1 && c < s3 && g[1][a] == g[3][c]) {
        mx = max(mx, recur(a+1, b, c+1, g, mem) + q-m);
    }
    else if (b < s2 && c < s3 && g[2][b] == g[3][c]) {
        mx = max(mx, recur(a, b+1, c+1, g, mem) + q-m);
    }
    else mx = max({mx, (a+1 <= s1 ?recur(a+1, b, c, g, mem)+p-m:LLONG_MIN), (b+1 <= s2 ? recur(a, b+1, c, g, mem)+p-m:LLONG_MIN), (c+1 <= s3? recur(a, b, c+1, g, mem)+p-m:LLONG_MIN)});
    return mem[a][b][c] = mx;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        cin>> m>> p>> q>> r;

        vector<vector<int>> g(4);
       
        for (int i=1; i<=3; i++) {
            int n;
            cin>> n;

            for (int j=0; j<n; j++) {
                int a;
                cin>> a;
                g[i].push_back(a);
            }
        }
        vector<vector<vector<int>>> mem(g[1].size()+1, vector<vector<int>>(g[2].size()+1, vector<int> (g[3].size()+1, -1)));
        cout<< recur(0,0,0, g, mem)<<'\n';
    }   
}