#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    cin>> a>> b;

    vector<vector<int>> c(4, vector<int>(10, 0));
    for (int i=1; i<=3; i++) {
        int init = a[i-1]-'0';
        for (int j=1; j<=9; j++) {
            c[i][j] = init++;
            if (init == 10) init = 1;
        }
    }
    int n1=a[0]-'0', n3=a[2]-'0';
    for (int k=0; k<b.size(); k++) {
        int idx=b[k]-'0';
        cout<< c[3][c[2][c[1][idx]]];

        vector<int> tem = c[1], tem2 = c[2] ,tem3 = c[3];

        for (int i=1; i<=9; i++) {
            
            if (i-n1 <= 0) c[1][9-abs(i-n1)] = tem[i];
            else c[1][i-n1] = tem[i];

            if (i+1 > 9) c[2][1] = tem2[i];
            else c[2][i+1] = tem2[i];

            if (i-n3 <= 0) c[3][9-abs(i-n3)] = tem3[i];
            else c[3][i-n3] = tem3[i];
        }
    }
    
}