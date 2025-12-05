#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        int n;
        cin>> n;

        vector<int> cnt(2*n+1,0);
        for (int i=0; i<2*n; i++) {
            int a;
            cin>> a;
            cnt[a]++;
        }

        int ans, x,y,z;
        x=y=z = 0;
        for (int i=1; i<=2*n; i++) {
            if (cnt[i] == 0) continue;

            if (cnt[i]&1) x++;
            else if (cnt[i]%4) y++;
            else z++;
        }

        ans = x+y*2+z*2;
        if ((z&1) && (x==0)) ans-=2;
        cout<< ans<< '\n';
    }
}