#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        int n,x,y;
        cin>> n>> x>> y;

        string s;
        cin>> s;

        int cnt4,cnt8;
        cnt4=cnt8=0;

        for (int i=0; i<s.size(); i++) {
            if (s[i] == '4') cnt4++;
            else cnt8++;
        }

        x = abs(x);
        y = abs(y);

        bool ans=false;
        if (x > n || y > n) {
            cout<< "NO\n";
            continue;
        }
        if ((x == 0 || y == 0) && (n >= x && n>=y)) ans = true;
        else {
            bool check=false;
            int xx=n, yy=n-cnt4+1;
            while (yy <= n) {
                if (x >= xx && y >= yy) {
                    check = true;
                    break;
                }
                xx--;
                yy++;
            }
            if (!check) ans=true;
        }

        if (ans) cout<< "YES\n";
        else cout<< "NO\n";
    }
}