#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int mil= 1000001;
    vector<bool> p(mil, 1);
    for (int i=2; i*i<=mil; i++) {
        if (!p[i]) continue;
        for (int j=2; i*j<=mil; j++) {
            p[i*j]=0;
        }
    }
    vector<ll> pr;
    for (int i=2; i<=mil; i++) {
        if (p[i]) pr.push_back(i);
    }
    p[1]=0;
    for (int i=0; i<n; i++) {
        ll a;
        cin>> a;
        ll root = sqrtl(a);
        if (root * root == a && p[root]) cout << "YES\n";
        else cout << "NO\n";  
    }
}  