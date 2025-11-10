#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        int n,m;
        cin>> n>> m;

        bool ok=0;
        vector<string> s(n);
        for (int i=0; i<n; i++) cin>> s[i];
        
        for (int i=0; i<n && !ok; i++) {
            for (int j=0; j<m && !ok; j++) {
                if (s[i][j] == '#') {
                    int height=0, tem=i;
                    while (tem < n && s[tem][j] == '#') {
                        height++;
                        tem++;
                    }
                    cout<< i+1+height/2<< ' '<< j+1<< '\n';
                    ok=true;
                    break;  
                }
            }
        }
    }
}