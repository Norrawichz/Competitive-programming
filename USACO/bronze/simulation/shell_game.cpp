#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n;
    cin>> n;
    vector<vector<bool>> start(4,vector<bool>(4, 0));
    int score[4]={};
    for (int i=1; i<=3; i++) {
        start[i][i]=1;
    }
    for (int i=0; i<n; i++) {
        int a,b,c;
        cin>> a>> b>> c;
        for (int j=1; j<=3; j++) {
            swap(start[j][a],start[j][b]);
            score[j] += start[j][c];
        }
    }
    cout<< max({score[1],score[2],score[3]});
}