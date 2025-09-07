#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<char> bracket(n + 1);
    int f1;

    // Step 1: Query to detect bracket[1]
    cout << "? 2 1 1" << endl;
    cout.flush();
    cin >> f1;

    bracket[1] = (f1 == 0 ? '(' : ')');  // If f == 0 => can't form (), so it's open

    for (int i = 2; i <= n; ++i) {
        cout << "? 2 1 " << i << endl;
        cout.flush();

        int f;
        cin >> f;

        // If f == 1: means s[1] + s[i] formed a valid "()", so s[i] is opposite
        bracket[i] = (f == 1 ? (bracket[1] == '(' ? ')' : '(') : bracket[1]);
    }

    // Final answer
    cout << "! ";
    for (int i = 1; i <= n; ++i) cout << bracket[i];
    cout << endl;
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
