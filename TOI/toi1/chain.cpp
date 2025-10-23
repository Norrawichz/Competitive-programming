#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    string s2;
    for (int i = 0; i<m; i++) {
        string s1;
        cin>> s1;
        if (s2.empty()) {
            s2 = s1;
            continue;
        }
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (s1[j] != s2[j]) {
                count++;
            }
        }
        if (count > 2) {
            cout<< s2;
            return 0;
        }
        s2 = s1;
    }
    cout<< s2;
    return 0;
}