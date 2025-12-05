#include <bits/stdc++.h>
using namespace std;

int n,m, score=0;

bool is_valid(int ci, int cj, vector<vector<char>> &g) {
    return (ci>=0 && cj>=0 && ci<n && cj<m && g[ci][cj] != '#' && g[ci][cj] != '-');
}

void ground(vector<vector<char>> &g) {
    for (int k=0; k<n*m; k++) {
        bool done=true;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (!is_valid(i, j, g)) continue;

                if (i+1 < n && g[i+1][j] == '-') {
                    swap(g[i+1][j], g[i][j]); 
                    done=false;
                }
            }
        }
        if (done) return;
    }
}

int di[] = {-1, 1, 0, 0}, dj[] = {0, 0, -1, 1};
void check(vector<vector<char>> &g) {
    for (int k=0; k<n*m; k++) {
        bool done=true;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (!is_valid(i, j, g)) continue;

                int sm=0;
                char tem = g[i][j];

                queue<pair<int,int>> q;
                q.push({i,j});

                while (!q.empty()) {
                    int ci=q.front().first, cj=q.front().second;
                    q.pop();

                    for (int e=0; e<4; e++) {
                        int ni=ci+di[e], nj=cj+dj[e];
                        if (!is_valid(ni,nj,g) || g[ni][nj] != tem) continue;
                        g[ni][nj] = '-';
                        sm+=5;
                        q.push({ni,nj});
                    }
                }
                if (sm > 5) {
                    g[i][j] = '-';
                    done = false;
                    score += sm;
                }
                /*pfor (int i=0; i<n; i++) {
                    for (int j=0; j<m; j++) {
                        cout<< g[i][j]<< ' ';
                    }
                    cout<< '\n';
                }*/
                //cout<< score<<"\n\n";
                ground(g);
                /*
                for (int i=0; i<n; i++) {
                    for (int j=0; j<m; j++) {
                        cout<< g[i][j]<< ' ';
                    }
                    cout<< '\n';
                }
                cout<< "\n\n";*/
            }
        }
        if (done) return;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;

    vector<vector<char>> g(n, vector<char>(m));
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>> g[i][j];

    int t;
    cin>> t;
    for (int i=0; i<t; i++) {
        int si,sj;
        char c;
        cin>> si>> sj>> c;

        int nj;
        if (!is_valid(si,sj,g)) {
            score -= 5;
            continue;
        }
        else if (c == 'L') nj=sj-1;
        else if (c == 'R') nj=sj+1;

        if (g[si][nj] != '-') {
            score -= 5;
            continue;
        }

        swap(g[si][sj], g[si][nj]);
        ground(g);
        check(g);
    }

    cout<< score<< '\n';
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout<< g[i][j]<< ' ';
        }
        cout<< '\n';
    }
}