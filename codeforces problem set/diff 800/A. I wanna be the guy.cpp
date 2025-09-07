#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    bool a[n + 1] = {};

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        a[x] = 1; 
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        a[y] = 1; 
    }
    for (int i = 1; i <= n; i++) {
        if (!a[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
}
