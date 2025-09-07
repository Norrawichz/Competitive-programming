#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int n, m;
bool adj[20][20];
long long dp[1 << 20][20]; // dp[mask][u] = จำนวนวิธีไปถึง u โดยผ่าน mask แล้ว

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a][b] = true;
    }

    // เริ่มจากเมือง 0 (คือเมือง 1), เยี่ยมเมือง 0 แล้ว
    dp[1 << 0][0] = 1;

    for (int mask = 1; mask < (1 << n); mask++) {
        for (int u = 0; u < n; u++) {
            if (!(mask & (1 << u))) continue; // ยังไม่ไปเมือง u
            if (dp[mask][u] == 0) continue;

            for (int v = 0; v < n; v++) {
                if (mask & (1 << v)) continue;     // ไปเมือง v มาแล้ว
                if (!adj[u][v]) continue;          // ไม่มีทางจาก u ไป v

                int next_mask = mask | (1 << v);
                dp[next_mask][v] = (dp[next_mask][v] + dp[mask][u]) % MOD;
            }
        }
    }

    // ตอบ: วิธีไปถึงเมือง n-1 โดยเยี่ยมครบทุกเมือง
    cout << dp[(1 << n) - 1][n - 1] << '\n';
}
