#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        vector<string> s(3);
        for (int i=0; i<3; i++) cin>> s[i];
        int r=-1;
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (s[i][j] == '?') {
                    r=i;
                }
            }
        }
        bool a[3]={};
        for (int j=0; j<3; j++) {
            if (s[r][j] == '?') continue;
            a[s[r][j]-'A'] = 1;
        }
        for (int i=0; i<3; i++) {
            if (!a[i]) {
                cout<< char('A'+i)<<endl;
                break;
            }
        }
    }
}