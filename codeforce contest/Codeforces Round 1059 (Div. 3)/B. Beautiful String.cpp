#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; 
    cin>> t;

    while (t--) {
        int n; string s;
        cin >> n >> s;

        vector<int> idx;
        for (int i = 0; i < n; i++) if (s[i] == '0') idx.push_back(i+1);

        cout << idx.size() << "\n";
        if (!idx.empty()) {
            for (int i = 0; i < idx.size(); i++) cout << idx[i]<< " ";
            cout << "\n";
        }
    }
    return 0;
}
