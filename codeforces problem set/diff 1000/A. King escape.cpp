#include <bits/stdc++.h>
using namespace std;

int n,ai,aj,bi,bj,ci,cj;

bool check(int i, int j) {
    if (i > 0 && j > 0 && j<=n && i<=n && i != ai && j != aj && i+j != ai+aj && i-j+n != ai-aj+n) return 1;
    return 0;
}

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    cin>> n>> ai>> aj>> bi>> bj>> ci>> cj;
    int di[] = {-1,-1,-1,0,0,1,1,1}, dj[] = {-1,0,1,-1,1,-1,0,1};
    vector<vector<bool>> vst(n+1, vector<bool>(n+1, 0));
    queue<pair<int,int>> q;
    q.push({bi, bj});
    while (!q.empty()) {
        int i=q.front().first, j=q.front().second;
        q.pop();
        if (i==ci && j==cj && check(i, j)) {
            cout<< "YES";
            return 0;
        }
        for (int c=0; c<8; c++) {
            int ni=i+di[c], nj=j+dj[c];
            if (check(ni, nj) && !vst[ni][nj]) {
                q.push({ni, nj});
                vst[ni][nj] = 1;
            }
        }
    }
    cout<< "NO";
}