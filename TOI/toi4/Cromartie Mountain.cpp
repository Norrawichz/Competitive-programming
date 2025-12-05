#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<pair<int,int>> m(n);
    int mxh=0;
    for (int i=0; i<n; i++) {
        int s,h;
        cin>> s>> h;
        m[i]={s,h};
        mxh = max(mxh, h);
    }

    sort(m.begin(), m.end());

    int mxl=m[m.size()-1].first+m[m.size()-1].second*2-1;
    vector<vector<char>> g(mxh+1, vector<char>(mxl+1, '.'));

    for (int i=0; i<n; i++) {
        int st=m[i].first, h=m[i].second;

        int cnt=1;
        for (int i=mxh-h+1, k=0; i<=mxh; i++, k++) {
            for (int j=st; j<st+h*2; j++) {
                if (g[i][j] == 'X') continue;
                if (j==st+h-1-k) {
                    if (g[i][j] == '\\') g[i][j] ='v';
                    else g[i][j] ='/';
                }
                else if (j==st+h+k) g[i][j] ='\\';
                else if (j>st+h-k-1 && j<st+h+k) g[i][j] = 'X';
            }
        }
    }
    
    for (int i=1; i<=mxh; i++) {
        for (int j=1; j<=mxl; j++) {
            cout<< g[i][j];
        }
        cout<< '\n';
    }
}