#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        
        set<int> ans;
        for (int i=2; i*i <= n; i++) {
            if (!ans.count(i) && n%i==0) {
                ans.insert(i);
                n/=i;
                break;
            }
        }
        for (int i=2; i*i <= n; i++) {
            if (!ans.count(i) && n%i==0) {
                ans.insert(i);
                n/=i;
                break;
            }
        }
        if (ans.size() < 2 || ans.count(n) || n==1) {
            cout<< "NO\n";
        }
        else {
            ans.insert(n);
            cout<< "YES\n";
            for (auto x : ans) {
                cout<< x<<" ";
            }
            cout<< "\n";
        }
    }
}