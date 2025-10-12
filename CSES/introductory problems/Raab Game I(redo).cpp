#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a + b > n) {
            cout << "NO\n";
            continue;
        }
        if (a + b == 0) {
            cout << "YES\n";
            for (int i = 1; i <= n; ++i) cout << i << " ";
            cout << "\n";
            for (int i = 1; i <= n; ++i) cout << i << " ";
            cout << "\n";
            continue;
        }

        if (a == 0 || b == 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        int k = n - (a + b);      
        vector<int> A, B;

        for (int i = 1; i <= k; ++i) {
            A.push_back(i);
            B.push_back(i);
        }

        int m = a + b;
        vector<int> R;
        for (int x = k + 1; x <= n; ++x) R.push_back(x);
        for (int i = 0; i < m; ++i) A.push_back(R[i]);

        vector<int> Rrot(m);
        for (int i = 0; i < m; ++i) Rrot[i] = R[(i + a) % m];
        for (int i = 0; i < m; ++i) B.push_back(Rrot[i]);

        for (int x : A) cout << x << " ";
        cout << "\n";
        for (int x : B) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
