#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n;
    cin >> m >> n;
    
    vector<vector<int>> board(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    vector<vector<int>> dp(m, vector<int>(n, 0));
    vector<vector<long long>> ways(m, vector<long long>(n, 0));

    // แถวแรก
    for (int j = 0; j < n; j++) {
        dp[0][j] = board[0][j];
        ways[0][j] = 1;
    }

    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int max_prev = INT_MIN;
            vector<int> from_cols;

            // คำนวณช่องที่มาจากแถวบน
            if (i % 2 == 0) { // แถวคู่: มาจาก j และ j-1
                if (j < n) from_cols.push_back(j);
                if (j-1 >= 0) from_cols.push_back(j-1);
            } else { // แถวคี่: มาจาก j และ j+1
                if (j < n) from_cols.push_back(j);
                if (j+1 < n) from_cols.push_back(j+1);
            }

            // หา max จากช่องข้างบนที่เชื่อมถึงได้
            for (int k : from_cols)
                max_prev = max(max_prev, dp[i-1][k]);

            // เก็บค่า DP
            dp[i][j] = board[i][j] + max_prev;

            // รวมจำนวนวิธี
            for (int k : from_cols)
                if (dp[i-1][k] == max_prev)
                    ways[i][j] += ways[i-1][k];
        }
    }

    int max_honey = 0;
    long long count = 0;
    for (int j = 0; j < n; j++) {
        if (dp[m-1][j] > max_honey) {
            max_honey = dp[m-1][j];
            count = ways[m-1][j];
        } else if (dp[m-1][j] == max_honey) {
            count += ways[m-1][j];
        }
    }

    cout << max_honey << " " << count << "\n";
    return 0;
}
