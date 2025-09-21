#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        unordered_map<int,int> um;
        set<int> s;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            s.insert(a);
            um[a]++;
        }
        if (s.size() == 1) cout<< "YES\n";
        else if (s.size() == 2) {
            int diff=0;
            for (auto x : um) {
                if (diff==0) diff+=x.second;
                else diff=abs(diff-x.second);
            }
            if (diff <= 1) cout<< "YES\n";
            else cout<< "NO\n";
        }
        else cout<< "NO\n";
    }
}