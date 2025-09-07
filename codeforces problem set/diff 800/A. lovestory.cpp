#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    string cdf="codeforces";
    while (t--) {
        string s;
        cin>> s;
        int ans=0;
        for (int i=0; i<cdf.size(); i++) if (s[i] != cdf[i]) ans++;
        cout<< ans<<endl;
    }
}