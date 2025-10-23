#include <bits/stdc++.h>
using namespace std;

bool edge(int i, int j) {
    return (i>=0 && i<8 && j>=0 && j<8);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char b[8][8];

    for (int i=0; i<8; i++) {
        string s;
        cin>> s;
        for (int j=0; j<8; j++) {
            b[i][j]=s[j];
        }
    }

    int di[] = {-1,-1,-1,0,1,1,1,0}, dj[] = {-1,0,1,1,1,0,-1,-1};
    int t=0;
    while (true) {
        int r,c;
        cin>> r>> c;
        if (r==-1 && c==-1) break;
        if (b[r][c] == '_') {
            if (t%2==0) b[r][c] = 'B';
            else b[r][c] = 'W';
        
            for (int e=0; e<8; e++) {
                for (int i=1; i<=7; i++) {
                    int ni=i*di[e]+r, nj=i*dj[e]+c;
            
                    if (!edge(ni,nj) || b[ni][nj] == '_' ) break;
                    if (b[ni][nj] == b[r][c]) {
                        for (int j=1; j<=i; j++) {
                            b[j*di[e]+r][j*dj[e]+c]=b[r][c];
                        }   
                        break;
                    }
                }
            }
            bool ok=0;
            for (int i=0; i<8 && !ok; i++) {
                for (int j=0; j<8; j++) {
                    if (b[i][j] == '_') {
                        ok=1;
                        break;
                    }
                }
            }
            if (!ok) break;
            t++;
        }
        
    }
    int black=0, whi=0;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            cout<< b[i][j];
            if (b[i][j] == 'B') black++;
            else if (b[i][j] == 'W') whi++;
        }
        cout<< "\n";
    }
    if (black > whi) cout<< "black wins";
    else if (black == whi) cout<< "draw";
    else cout<< "white wins";
}