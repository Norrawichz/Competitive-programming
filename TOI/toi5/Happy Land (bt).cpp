#include <bits/stdc++.h>
using namespace std;
const double INF = 1e9+7;

int n,m;
int di[8] = {-1, -1, -1, 0, 1, 1, 1, 0}, dj[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

double bt(vector<vector<bool>> &vst, vector<vector<double>> &a) {

    double mn = INF;
    bool ok=1;
    for (int p=0; p<n; p++) {
        for (int q=0; q<m; q++) {
            if (!vst[p][q]) continue;
            ok=0;
            vst[p][q] = false;

            double plus = a[p][q]/10;
            for (int e=0; e<8; e++) {
                int ni=p+di[e], nj=q+dj[e];
                if (ni<0 || nj<0 || ni>=n || nj>=m || !vst[ni][nj]) continue;

                a[ni][nj] += plus;
            }

            double rec = bt(vst, a)+a[p][q];
            if (rec < mn) mn = rec;

            for (int e=0; e<8; e++) {
                int ni=p+di[e], nj=q+dj[e];
                if (ni<0 || nj<0 || ni>=n || nj>=m || !vst[ni][nj]) continue;

                a[ni][nj] -= plus;
            }
            vst[p][q] = true;
        }
    }
    return (ok? 0 : mn);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>> n>> m;

    vector<vector<double>> a(n, vector<double> (m));
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>> a[i][j];

    vector<vector<bool>> vst(n, vector<bool> (m, true));

    double ans=bt(vst, a);
    cout<<  fixed<<setprecision(2)<<ans;
}