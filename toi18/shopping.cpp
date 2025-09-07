#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    vector<int> pay(n+1);
    vector<int> ge(n+1);
    for (int i = 1; i<=n; i++) {
        int a;
        cin>> a;
        if (a < 0) {
            pay[i] += pay[i-1] - a;
            ge[i] = ge[i-1];
        }
        else {
            pay[i] = pay[i-1];
            ge[i] += ge[i-1] + a;
        }
    }
    while (m--) {
        int a,b;
        cin>> a>> b;
        cout<< *(ge.begin() + (lower_bound(pay.begin()+a+1, pay.end()-1, b+pay[a]) - pay.begin())) - ge[a]<< '\n';
    }
    return 0;
}