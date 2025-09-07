#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int& x : s) cin >> x;

        int free = 0;
        bool bad = false;
        for (int i = 0; i < n; ++i) {
            if (s[i] == -1) {
                ++free;
            } else {
                // ถ้าตำแหน่ง i ต้องได้ score มากกว่าจำนวนคนที่ระบายมาก่อน → impossible
                if (s[i] > i) bad = true;
            }
        }

        if (bad) {
            cout << "0\n";
            continue;
        }

        // เราสามารถจัด perm ของตำแหน่งที่ไม่ fix ได้ทั้งหมด → free!
        // คำตอบคือ factorial(free) mod 998244353
        int ans = 1;
        for (int i = 1; i <= free; ++i) {
            ans = 1LL * ans * i % mod;
        }
        cout << ans << '\n';
    }

    return 0;
}
