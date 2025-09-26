#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        vector<int> s;
        int cnt=1;
        for (int i=1; i<n; i++) {
            if (a[i-1] == a[i]) cnt++;
            else {
                s.push_back(cnt);
                cnt=1;
            }
        }
        s.push_back(cnt);
        sort(s.begin(), s.end());
        int ans=0, si=s.size();
        for (int i=0; i<s.size(); i++) {
            int te=s[i];
            ans = max(ans, te*(si-i));
        }
        cout<< ans<<"\n";
    }
}