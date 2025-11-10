#include <bits/stdc++.h>
using namespace std;

string q[105], s[105];

int n,m,t;
int di[4] = {0, 1, 1, 1}, dj[4] = {1, 1, 0, -1};
vector<int> fr(105, 100), sr(105, 100);

void check(int i, int j) {
    
    for (int e=0; e<4; e++) {// direction

        for (int k=0; k<t*2; k++) {// temp
            int ci=i, cj=j;
            bool found=1;
            for (int p=0; p<q[k].size(); p++) {
                if (ci<0 || cj<0 || ci>=n || cj>=m || q[k][p] != s[ci][cj]) {
                    found=0;
                    break;
                }
                ci+=di[e];
                cj+=dj[e];
            }
            if (!found) continue;
            ci-=di[e];
            cj-=dj[e];
            if (found) {
                if (k>=t) {
                    int id = k-t;
                    if (ci < fr[id] || (ci == fr[id] && cj < sr[id])) {
                        fr[id]=ci;
                        sr[id]=cj;
                    }
                }
                else {
                    if (i < fr[k] || (i == fr[k] && j < sr[k])) {
                        fr[k]=i;
                        sr[k]=j;
                    }
                }
            }
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;

    for (int i=0; i<n; i++) {
        cin>> s[i];
        for (int j=0; j<m; j++) s[i][j] = tolower(s[i][j]);
    }

    cin>> t;
    for (int i=0; i<t; i++) {
        cin>> q[i];
        for (int j=0; j<q[i].size(); j++ ) q[i][j] = tolower(q[i][j]);
    }
    for (int i=t; i<t*2; i++) {
        q[i] = q[i-t];
        reverse(q[i].begin(),q[i].end());
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            check(i,j);
        }
    }

    for (int i=0; i<t; i++) {
        cout<< fr[i]<< ' '<< sr[i]<<'\n';
    }
}