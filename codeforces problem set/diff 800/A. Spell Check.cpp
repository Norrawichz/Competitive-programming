#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    string q="Timur";
    sort(q.begin(), q.end());
    while (t--) {
        int n;
        string s;
        cin>> n>> s;
        sort(s.begin(), s.end());
        cout<< (n == 5 && q == s ? "YES\n":"NO\n");
    }
}