#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    
    vector<vector<bool>> c(n, vector<bool>(1000,0)), r(n, vector<bool>(1000,0));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<1000; k++) {
                if (!r[i][k] && !c[j][k]) {
                    cout<< k<< " ";
                    r[i][k]=1;
                    c[j][k]=1;
                    break;
                }
            }
        }
        cout<< "\n";
    }
}