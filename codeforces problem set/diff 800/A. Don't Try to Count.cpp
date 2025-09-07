#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,m;
        string x, s;

        cin>> n>> m>> x>> s;
        int ops=0;
        while (x.size() < s.size()) {
            x+=x;
            ops++;
        }
        while (ops <= 5) {
            if (x.find(s) != string::npos) {
                break;
            }
            x+=x;
            ops++;
        }
        if (ops > 5) cout<< -1<<endl;
        else cout<< ops<<endl;
    }
}