#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int max_len = 1, cur_len = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            cur_len++;
        } else {
            cur_len = 1;
        }
        max_len = max(max_len, cur_len);
    }

    cout << max_len << '\n';
}
