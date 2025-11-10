#include <bits/stdc++.h>
using namespace std;

int n=9;
vector<vector<char>> b(n, vector<char>(n));
vector<vector<bool>> row(n, vector<bool>(10, true));
vector<vector<bool>> col(n, vector<bool>(10, true));
vector<vector<vector<bool>>> box(3, vector<vector<bool>> (3, vector<bool>(10, true)));
bool ok=0;
void bt() {

    int i=-1,j=-1;
    for (int p=0; p<n; p++) {
        for (int q=0; q<n; q++) {
            if (b[p][q] == '.') {
                i=p;
                j=q;
                break;
            }
        }
    }
    if (i==-1) {
        ok=1;
        return;
    }
    
    for (char e='1'; e<='9'; e++) {
        int ee=e-'0';
        int bi=i/3, bj=j/3;

        if (row[i][ee] && col[j][ee] && box[bi][bj][ee]) {
            row[i][ee] = col[j][ee] = box[bi][bj][ee] = false;
            b[i][j] = e;
            bt();
            if (ok) return;
            b[i][j] = '.';
            row[i][ee] = col[j][ee] = box[bi][bj][ee] = true;
        }
    }
    return;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
        cin>> b[i][j];
        if (b[i][j] >='0' && b[i][j] <= '9') {
            row[i][b[i][j]-'0']=false;
            col[j][b[i][j]-'0']=false;
            box[i/3][j/3][b[i][j]-'0'] = false;
        }
    }
    bt();
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<< b[i][j] << ' ';
        }
        cout<< '\n';
    }
}
