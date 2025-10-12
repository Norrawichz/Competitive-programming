#include <bits/stdc++.h>
using namespace std;


int n, di[] = {2,2,-2,-2,1,-1,1,-1}, dj[] = {1,-1,1,-1,2,2,-2,-2};

vector<vector<int>> ans(1001, vector<int>(1001,INT_MAX));

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n;
    vector<vector<bool>> vst(n, vector<bool>(n,0));
    vst[0][0] = 1;
    queue<pair<int,pair<int,int>>> q;

    q.push({0,{0,0}});
    while (!q.empty()) {
        int cnt=q.front().first, i=q.front().second.first, j=q.front().second.second;
        ans[i][j] = ans[j][i] = cnt;
        q.pop();
        for (int c=0; c<8; c++) {
            int ni=i+di[c], nj=j+dj[c];
            if (ni<0 || nj<0 || ni>n-1 || nj>n-1 || vst[ni][nj]) continue;
            vst[ni][nj]=1;
            q.push({cnt+1, {ni,nj}});
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<< ans[i][j]<< " ";
        }
        cout<< '\n';
    }
}