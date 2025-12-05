#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int m,n;
    cin>> m>> n;

    vector<string> g(n);
    for (int i=0; i<n; i++) cin >> g[i];


    vector<vector<int>> prf(n, vector<int>(m, 0));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (g[i][j] == 'T') continue;
            int mn=min((i-1<0 ? 0:prf[i-1][j]), (j-1<0 ? 0:prf[i][j-1]));
            if ((i-1 > 0 && j-1>0 && g[i-mn][j-mn] == 'T')) prf[i][j] = mn;
            else prf[i][j] = mn+1;
            
        }
    }

    int mx=-1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            mx = max(mx,prf[i][j]);
        }
    }

    vector<vector<int>> water(n, vector<int>(m, 0));
    int cnt=1;
    queue<pair<int,int>> q;
    int di[4] = {-1, 0, 1, 0}, dj[4] = {0, 1, 0, -1};

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (g[i][j] == 'P' && water[i][j] == 0) {
                q.push({i,j});
                water[i][j] = cnt;

                while (!q.empty()) {
                    int ci=q.front().first, cj=q.front().second;
                    q.pop();

                    for (int e=0; e<4; e++) {
                        int ni=ci+di[e], nj=cj+dj[e];
                        if (ni<0 || nj<0 || ni>=n || nj>=m || g[ni][nj] != 'P' || water[ni][nj] != 0) continue;

                        water[ni][nj] = cnt;
                        q.push({ni,nj});
                    }
                }
                cnt++;
            }
        }
    }

    int mn=10000;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (prf[i][j] == mx) {
                unordered_set<int> s;
                for (int ni=i-prf[i][j]+1; ni<=i; ni++) {
                    for (int nj=j-prf[i][j]+1; nj<=j; nj++) {
                        if (water[ni][nj] != 0) s.insert(water[ni][nj]);
                    } 
                }
                int tem=s.size();
                mn = min(mn, tem);
            }
        }
    }

    cout<< mx*mx<< ' '<< mn;
}