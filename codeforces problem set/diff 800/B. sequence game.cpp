#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        vector<int> ans;
        for (int i=0; i<n; i++) {
            int s;
            cin>> s;
            if (i && ans.back() > s) ans.push_back(1);
            ans.push_back(s);
        }
        cout<< ans.size()<<endl;
        for (auto x: ans) {
            cout<< x<< " ";
        }
        cout<< endl;
    }
}