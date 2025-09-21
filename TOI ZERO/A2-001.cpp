#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    int red[n+1], blue[m+1];
    red[0] = 0;
    blue[0] = 0;
    for (int i = 1; i<=n; i++) {
        cin>> red[i];
    }
    for (int i = 1; i<=m; i++) {
        cin>> blue[i];
    }
    int count = 0;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (i % 2 == j % 2) {
                count += ((red[i] < blue[j] && red[i+1] > blue[j+1]) || (blue[j] < red[i] && blue[j+1] > red[i+1]));
            }
            else {
                count += ((red[i] < blue[j+1] && red[i+1] > blue[j]) || (blue[j] < red[i+1] && blue[j+1] > red[i]));
            }
        }
    }
    for (int i = 0; i<=n; i++) {
        for (int j = (i%2); j<=m; j+= 2) {
            count += (red[i] == blue[j]);
        }
    }
    cout<< count;
    return 0;
}